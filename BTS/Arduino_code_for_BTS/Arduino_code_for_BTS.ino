int R_IS_1 = 1;
int L_IS_1= 2;
int R_IS_2 = 7;
int L_IS_2= 8;

int R_PWM_1 = 3;
int L_PWM_1 = 4;
int R_PWM_2 = 3;
int L_PWM_2 = 4;

int R_EN_1 = 5;
int L_EN_1 = 6;
int R_EN_2 = 5;
int L_EN_2 = 6;

void setup(){
  pinMode(R_IS_1, OUTPUT);
  pinMode(R_EN_1, OUTPUT);
  pinMode(R_PWM_1, OUTPUT);
  pinMode(L_IS_1, OUTPUT);
  pinMode(L_EN_1, OUTPUT);
  pinMode(L_PWM_1, OUTPUT);

  pinMode(R_IS_2, OUTPUT);
  pinMode(R_EN_2, OUTPUT);
  pinMode(R_PWM_2, OUTPUT);
  pinMode(L_IS_2, OUTPUT);
  pinMode(L_EN_2, OUTPUT);
  pinMode(L_PWM_2, OUTPUT);

  digitalWrite(R_EN_1, HIGH);
  digitalWrite(L_EN_1, HIGH);
  digitalWrite(R_IS_1, LOW);
  digitalWrite(L_IS_1, LOW); 

  digitalWrite(R_EN_2, HIGH);
  digitalWrite(L_EN_2, HIGH);
  digitalWrite(R_IS_2, LOW);
  digitalWrite(L_IS_2, LOW); 
}

void loop(){
  int i;
  for (i=0; i<=255; i++){
    analogWrite(R_PWM_1, i);     //Here R_PWM rises and L_PWM set to 0
    analogWrite(L_PWM_1, 0);
    //analogWrite(R_PWM_2, i);     //Here R_PWM rises and L_PWM set to 0
    //analogWrite(L_PWM_2, 0);
    delay(10);
  }
  delay(1000);
  for (i=0; i<=255; i++){
    analogWrite(R_PWM_1, 0);     //Here R_PWM_1 rises and L_PWM_1 set to 0
    analogWrite(L_PWM_1, i);
    //analogWrite(R_PWM_2, 0);     //Here R_PWM_2 rises and L_PWM_2 set to 0
    //analogWrite(L_PWM_2, i);
    delay(10);      
  }
  delay(1000);
}
