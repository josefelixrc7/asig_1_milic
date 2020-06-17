// Mildred Fernanda Chacón Méndez V20.196.384

//Variables
  //Asignación de variables a los pines
    int lVerde1 = 7;
    int lAmarillo1 = 8;
    int lRojo1 = 9;
    int lVerde2 = 10;
    int lAmarillo2 = 11;
    int lRojo2 = 12;

void setup() {
  //Configuración de pines
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
}

void loop() {
  // Semáforo 1 en verde y 2 en rojo (todos los demás apagados)
    digitalWrite(lVerde1, HIGH);
    digitalWrite(lAmarillo1, LOW);
    digitalWrite(lRojo1, LOW);
    digitalWrite(lVerde2, LOW);
    digitalWrite(lAmarillo2, LOW);
    digitalWrite(lRojo2, HIGH);
    delay(2000); //2 segundos de retraso
    
  // Semáforo 1 en amarillo y 2 en rojo (todos los demás apagados)
    digitalWrite(lVerde1, LOW);
    digitalWrite(lAmarillo1, HIGH);
    digitalWrite(lRojo1, LOW);
    digitalWrite(lVerde2, LOW);
    digitalWrite(lAmarillo2, LOW);
    digitalWrite(lRojo2, HIGH);
    delay(2000); //2 segundos de retraso
    
  // Semáforo 1 en rojo y 2 en verde (todos los demás apagados)
    digitalWrite(lVerde1, LOW);
    digitalWrite(lAmarillo1, LOW);
    digitalWrite(lRojo1, HIGH);
    digitalWrite(lVerde2, HIGH);
    digitalWrite(lAmarillo2, LOW);
    digitalWrite(lRojo2, LOW);
    delay(2000); //2 segundos de retraso
    
  // Semáforo 1 en rojo y 2 en amarillo (todos los demás apagados)
    digitalWrite(lVerde1, LOW);
    digitalWrite(lAmarillo1, LOW);
    digitalWrite(lRojo1, HIGH);
    digitalWrite(lVerde2, LOW);
    digitalWrite(lAmarillo2, HIGH);
    digitalWrite(lRojo2, LOW);
    delay(2000); //2 segundos de retraso
}
