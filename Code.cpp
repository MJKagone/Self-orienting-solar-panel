#define MOTOR_EN_1_2  10
#define MOTOR_EN_3_4  11
#define MOTOR_IN1     9
#define MOTOR_IN2     8
#define MOTOR_IN3     12
#define MOTOR_IN4     13

#define forward  0
#define backward 1

#define slow   10
#define normal 5
#define fast   2

#define half_step     2

int speeed; 
int direcshen;
int stepping;


void stepp(void){
  
  digitalWrite(MOTOR_EN_1_2, HIGH);
  digitalWrite(MOTOR_EN_3_4, HIGH);
  
if (direcshen==forward){
  if (stepping==half_step){
    digitalWrite(MOTOR_IN1, HIGH);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN4, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN1, HIGH);
    digitalWrite(MOTOR_IN2, HIGH);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN4, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN1, LOW);
    digitalWrite(MOTOR_IN2, HIGH);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN4, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN1, LOW);
    digitalWrite(MOTOR_IN2, HIGH);
    digitalWrite(MOTOR_IN3, HIGH);
    digitalWrite(MOTOR_IN4, LOW);
    delay(speeed);  
    digitalWrite(MOTOR_IN1, LOW);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN3, HIGH);
    digitalWrite(MOTOR_IN4, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN1, LOW);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN3, HIGH);
    digitalWrite(MOTOR_IN4, HIGH);
    delay(speeed);
    digitalWrite(MOTOR_IN1, LOW);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN4, HIGH);
    delay(speeed);
    digitalWrite(MOTOR_IN1, HIGH);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN4, HIGH);
    delay(speeed);     
  }
 }
 
 if (direcshen==backward){
  if (stepping==half_step){
    digitalWrite(MOTOR_IN4, HIGH);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN1, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN4, HIGH);
    digitalWrite(MOTOR_IN3, HIGH);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN1, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN4, LOW);
    digitalWrite(MOTOR_IN3, HIGH);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN1, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN4, LOW);
    digitalWrite(MOTOR_IN3, HIGH);
    digitalWrite(MOTOR_IN2, HIGH);
    digitalWrite(MOTOR_IN1, LOW);
    delay(speeed);  
    digitalWrite(MOTOR_IN4, LOW);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN2, HIGH);
    digitalWrite(MOTOR_IN1, LOW);
    delay(speeed);
    digitalWrite(MOTOR_IN4, LOW);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN2, HIGH);
    digitalWrite(MOTOR_IN1, HIGH);
    delay(speeed);
    digitalWrite(MOTOR_IN4, LOW);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN1, HIGH);
    delay(speeed);
    digitalWrite(MOTOR_IN4, HIGH);
    digitalWrite(MOTOR_IN3, LOW);
    digitalWrite(MOTOR_IN2, LOW);
    digitalWrite(MOTOR_IN1, HIGH);
    delay(speeed);
    }
 }
}

void setup() {
  
  Serial.begin(9600);
  Serial.println("L293D Stepper motor test");

  pinMode(MOTOR_EN_1_2, OUTPUT);
  pinMode(MOTOR_EN_3_4, OUTPUT);
  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);
  pinMode(MOTOR_IN3, OUTPUT);
  pinMode(MOTOR_IN4, OUTPUT);
}

void loop() {

  int analogValue0 = analogRead(A0);
  int analogValue1 = analogRead(A1);
  // reads the input on analog pin A0 (value between 0 and 1023)
  
  
  // doesn't spin if difference between light sensors values are less than 5
  if(pow((analogValue1 - analogValue0), 2) < 25){
    
  }
  else if(analogValue1 < analogValue0){
    direcshen=forward;
    speeed=fast;           
    stepping=half_step;    
    for (int i=0;i<=60;i++)
    {stepp();}
  }
  else if(analogValue1 > analogValue0){
    direcshen=backward;    
    speeed=fast;         
    stepping=half_step;  
    for (int i=0;i<=60;i++)
    {stepp();}
  }



  delay(500);
}
