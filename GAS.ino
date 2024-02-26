#define GASPIN 36

void setup() {
  Serial.begin(115200);
}

void loop() {
  int analogValue = analogRead(GASPIN);
  float porGas = analogValue * (35.0 / 2000.0);


  Serial.print("Valor analógico: ");
  Serial.println(analogValue);

  Serial.print("Porcentaje de Gas: ");
  Serial.print(porGas);
  Serial.println(" %");


  delay(1000);
}

  
