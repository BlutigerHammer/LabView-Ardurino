#define trigPin 10
#define echoPin 11


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  Serial.print(distance_measure());
  Serial.println("cm");
  delay(500);
}
int distance_measure(){
  long time, dystans;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  time=pulseIn(echoPin,HIGH);
  dystans=time/58;
  return dystans;
}
