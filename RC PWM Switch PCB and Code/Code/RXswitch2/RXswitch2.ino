// Code by HavocRC.
//   AJ Robinson


int RXin = 2;
int AUXout = 1;

unsigned long number;
unsigned long variable;
int signal = 0;

void setup()
{
  pinMode(RXin, INPUT);
  pinMode(AUXout, OUTPUT);
}

void loop()
{
  number = pulseIn(RXin, HIGH);
  variable = map(number, 975, 2005, 0, 235);
  
  
  
  if (number < 1100)
   {
     digitalWrite(AUXout, LOW);
     
   }
  
  else
  {
     analogWrite(AUXout, variable);
  }
  
  delay(100);
  
} 
