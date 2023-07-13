// C++ code
//
int red=3;
int yellow=4;
int green=5;
int botton=2;
int reading=0;
int counter = 0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(botton,INPUT);
}

void loop()
{
  reading = digitalRead(botton);

  if (reading == HIGH) {
     
    reading = digitalRead(botton); 
    if (reading == LOW) { 
      counter++; 
      if (counter == 1) { 
        digitalWrite(red, 1); 
      } else if (counter == 1) { 
        digitalWrite(yellow, 1); 
      } else if (counter == 1) {
        digitalWrite(green,1);}
        else if (counter==1){
          digitalWrite(red, 0);
          digitalWrite(yellow, 0);
           digitalWrite(green,0);} 

        }

        counter = 0;
     } delay(10);
    }
  
