/*
 * RULETA DE 5 LEDs
 * Arduino UNO
 *
 * Pines: 2, 3, 4, 5, 6
 *
 * Funcionamiento:
 * 1. Parpadeo inicial de 3 veces.
 * 2. Recorrido secuencial rápido.
 * 3. Desaceleración progresiva.
 * 4. Detención aleatoria.
 * 5. Reinicio mediante botón RESET.
 */

const byte leds[] = {2, 3, 4, 5, 6};
const byte NUM_LEDS = 5;

const int VELOCIDAD_INICIAL = 40;   // Milisegundos
const int VELOCIDAD_FINAL = 500;    // Milisegundos

const int VUELTAS_MIN = 5;
const int VUELTAS_MAX = 10;

void setup() {

  
  for (byte i = 0; i < NUM_LEDS; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }

  
  randomSeed(analogRead(A0));

  
  animacionInicio();

  ejecutarRuleta();
}

/*
* sin uso, el código se ejecuta namás una vez XD
*/
void loop() {

  
  
}

void animacionInicio() {

  for (int repeticion = 0; repeticion < 3; repeticion++) {
    
    for (byte i = 0; i < NUM_LEDS; i++) {
      digitalWrite(leds[i], HIGH);
    }

    delay(200);

    for (byte i = 0; i < NUM_LEDS; i++) {
      digitalWrite(leds[i], LOW);
    }

    delay(200);
  }

  delay(300);
}


void encenderLed(byte indice) {

  for (byte i = 0; i < NUM_LEDS; i++) {

    if (i == indice) {
      digitalWrite(leds[i], HIGH);
    } else {
      digitalWrite(leds[i], LOW);
    }
  }
}

void ejecutarRuleta() {

  byte ganador = random(0, NUM_LEDS);

  int vueltas = random(VUELTAS_MIN, VUELTAS_MAX + 1);

  int pasosTotales = vueltas * NUM_LEDS + ganador + 1;

  for (int paso = 0; paso < pasosTotales; paso++) {

    
    byte ledActual = paso % NUM_LEDS;

    
    encenderLed(ledActual);

    
    float progreso = (float)paso / (pasosTotales - 1);

    
    float desaceleracion = progreso * progreso;

    
    int tiempo = VELOCIDAD_INICIAL +
                 (VELOCIDAD_FINAL - VELOCIDAD_INICIAL)
                 * desaceleracion;

    delay(tiempo);
  }
  
  encenderLed(ganador);
}
