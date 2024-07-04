#define BUZZER 2 
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(A5, INPUT);
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(BUZZER, OUTPUT);
}

void blink(int speed){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(speed);
  digitalWrite(LED_BUILTIN, LOW);
}

void sound(int speed, int freq){
  tone(BUZZER, freq);
  delay(speed);
  noTone(BUZZER);
  delay(speed);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor = analogRead(A5);q

  if(sensor< 30){
    sound(100, 5000);
    blink(10);
    sound(100, 1000);
  }
}
 