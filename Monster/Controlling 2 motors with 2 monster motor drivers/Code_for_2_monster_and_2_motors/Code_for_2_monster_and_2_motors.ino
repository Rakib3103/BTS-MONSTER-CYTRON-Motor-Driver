#define CW   1
#define CCW  2

int inApin[2] = {7, 6};
int inBpin[2] = {8, 9};
int pwmpin[2] = {5, 4};
int cspin[2] = {A2, A3}; 
int enpin[2] = {A0, A1}; 


void setup()
{
  Serial.begin(9600);
  

  for (int i=0; i<2; i++)
  {
    pinMode(inApin[i], OUTPUT);
    pinMode(inBpin[i], OUTPUT);
    pinMode(pwmpin[i], OUTPUT);
  }
  
  for (int i=0; i<2; i++)
  {
    digitalWrite(inApin[i], LOW);
    digitalWrite(inBpin[i], LOW);
  }
}

void loop()
{
  motorGo(0, CW, 1023);
  motorGo(1, CCW, 1023);
  delay(500);

  motorGo(0, CCW, 1023);
  motorGo(1, CW, 1023);
  delay(500);
  

}

void motorOff(int motor)
{
  for (int i=0; i<2; i++)
  {
    digitalWrite(inApin[i], LOW);
    digitalWrite(inBpin[i], LOW);
  }
  analogWrite(pwmpin[motor], 0);
}

void motorGo(uint8_t motor, uint8_t direct, uint8_t pwm)
{
  if (motor <= 1)
  {
    if (direct <= 2)
    {
      if (direct <= 1)
        digitalWrite(inApin[motor], HIGH);
      else
        digitalWrite(inApin[motor], LOW);

      if (direct >= 2)
        digitalWrite(inBpin[motor], HIGH);
      else
        digitalWrite(inBpin[motor], LOW);

      analogWrite(pwmpin[motor], pwm);
    }
  }
}
