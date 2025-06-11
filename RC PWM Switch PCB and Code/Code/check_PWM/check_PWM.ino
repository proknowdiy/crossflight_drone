
int esc_pin = 7;
int servo_pin = 8;
unsigned long esc;
unsigned long servo;

void setup()
{
  pinMode(esc_pin, INPUT);
  pinMode(servo_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  esc = pulseIn(esc_pin, HIGH);
  servo = pulseIn(servo_pin, HIGH);
  Serial.print("ESC:");
  Serial.print(esc);
  Serial.print("      Servo:");
  Serial.println(servo);
   
  delay(200);
}

