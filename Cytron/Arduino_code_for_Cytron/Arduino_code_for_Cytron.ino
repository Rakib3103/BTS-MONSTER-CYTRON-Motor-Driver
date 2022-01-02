#define MotorDirection1 7
#define MotorSpeed1 3
#define MotorDirection2 3
#define MotorSpeed2 4

int SpeedVal1 = 100;
int SpeedVal2 = 100;
void setup() {
  pinMode(MotorDirection1, OUTPUT);
  pinMode(MotorSpeed1, OUTPUT);
  pinMode(MotorDirection2, OUTPUT);
  pinMode(MotorSpeed2, OUTPUT);

}

void loop() {

  digitalWrite(MotorDirection1, LOW);
  digitalWrite(MotorDirection2, LOW);

  analogWrite(MotorSpeed1 ,SpeedVal1);
  analogWrite(MotorSpeed2 ,SpeedVal2);
  delay(500);
  
  analogWrite(MotorSpeed1,0);
  analogWrite(MotorSpeed2,0);
  
  digitalWrite(MotorDirection1, HIGH);
  digitalWrite(MotorDirection2, HIGH);
  
  analogWrite(MotorSpeed1,SpeedVal1);
  analogWrite(MotorSpeed2,SpeedVal2);
  delay(500);
  
  analogWrite(MotorSpeed1,0);
  analogWrite(MotorSpeed2,0);
}
