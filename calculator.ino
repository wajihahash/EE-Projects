
int numb1= 0;
int numb2=0;
char operation;
int result= 0;

int calculate(int numb1, int numb2 , char operation)

       {

           if(operation == '+')
           {
               result = numb1 + numb2;
           }
           else if (operation == '-')
           {
               result = numb1 - numb2;

           }
           else if ( operation == '*')
           {
               result= 0;

               for (int i=0; i< numb2; i++)
               {
                   result = result + numb1;

               }

           }
           else if (operation == '/')
           {
               result = numb1 / numb2;

           }
           else if (operation == '^')
           {
               result = 1;
               for (int i = 0; i < numb2; i++)
               {
                   result = result * numb1;
               }
           }
          else
            {
                Serial.print("Error!!");
                Serial.println();
                result= 0;

               }
       }



// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600); // msp430g2231 must use 4800


}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
    while (Serial.available() > 0)
        {
            numb1= Serial.parseInt();
            String input = Serial.readString();
            input.replace(" ","");
            operation = input.charAt(0);
            input.remove(0,1);
            numb2 = input.toInt();
            calculate (numb1,numb2,operation);
            Serial.print(numb1);
            Serial.print(operation);
            Serial.println(numb2);
            Serial.print("result=");
            Serial.println(result);
            Serial.println();



        }
}

//the parse int takes away the first integer and and the input replace takes away the space which leaves the second number


