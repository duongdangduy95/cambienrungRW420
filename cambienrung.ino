#define SENSOR_PIN 7   
#define LED_PIN 13    

void setup() {
  pinMode(SENSOR_PIN, INPUT);  
  pinMode(LED_PIN, OUTPUT);    
  Serial.begin(9600);
  Serial.println("Khởi động cảm biến rung SW-420...");
}

void loop() {
  int sensorState = digitalRead(SENSOR_PIN);

  if (sensorState == HIGH) {
    Serial.println(">>> Phát hiện rung động!");
    digitalWrite(LED_PIN, HIGH);  
    delay(200);
    digitalWrite(LED_PIN, LOW);
  }

  delay(50); 
}
