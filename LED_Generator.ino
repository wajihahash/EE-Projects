long randNumber;
 int analongInputRL = A0;
 int analogInputYL =  A1;
 int analogInputGL =  A6;
 int analogInputRR =  A8;
 int analogInputYR =  A9;
 int analogInputGR =  A11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A8, OUTPUT);
  pinMode(A9, OUTPUT);
  pinMode(A11, OUTPUT);


randomSeed(analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A6, LOW);
    digitalWrite(A8, LOW);
    digitalWrite(A9, LOW);
    digitalWrite(A11, LOW);

  randNumber = random(0, 7);
  Serial.println(randNumber);

  if(randNumber == 1){
      digitalWrite(A0, HIGH);
      delay(2500);

      digitalWrite(A0, LOW);
      delay (2500);
  }
  else if(randNumber == 2){
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      delay (2500);

      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      delay (2500);
  }
  else if(randNumber == 3){
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A6, HIGH);
      delay(2500);

      digitalWrite(A0, LOW);
      digitalWrite(A6,LOW);
      digitalWrite(A1,LOW);
      delay (2500);
  }
  else if(randNumber == 4){
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A8, HIGH);
      digitalWrite(A6, HIGH);
      delay(2500);

       digitalWrite(A0, LOW);
      digitalWrite(A6,LOW);
      digitalWrite(A1,LOW);
      digitalWrite(A8, LOW);
      delay(2500);





  }
  else if(randNumber == 5){
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A8, HIGH);
      digitalWrite(A6, HIGH);
      digitalWrite(A11, HIGH);

      delay(2500);

       digitalWrite(A0, LOW);
      digitalWrite(A6,LOW);
      digitalWrite(A1,LOW);
      digitalWrite(A8, LOW);
      digitalWrite(A11, LOW);
      delay(2500);
  }
  else if(randNumber == 6){
      digitalWrite(A0, HIGH);
      digitalWrite(A6, HIGH);
      digitalWrite(A8, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A11, HIGH);
      digitalWrite(A9, HIGH);
      delay(2500);
  }


}
