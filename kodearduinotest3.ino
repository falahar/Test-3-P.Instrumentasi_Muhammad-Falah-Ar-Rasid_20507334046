int input1 = A0;
int input2 = A1;
int input3 = A2;

int sensor1 = 0;
int sensor2 = 0;
int sensor3 = 0;

#define led1 2
#define led2 3
#define led3 4
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  sensor1 = analogRead(input1);
  sensor2 = analogRead(input2);
  sensor3 = analogRead(input3);

  //Untuk menyalakan LED 1
  if ((sensor1 >= 15)&&(sensor2 < 9)){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  //Untuk menyalakan LED 2
  else if ((sensor1 < 15)&&(sensor3 > 5)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  //Untuk menyalakan LED 3
  else if ((sensor2 >= 11)&&(sensor3 >= 5)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

}
