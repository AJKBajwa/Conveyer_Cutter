#define step_pin 3
#define dir_pin 2
void setup() {
  // put your setup code here, to run once:
  pinMode(step_pin, OUTPUT);
  pinMode(dir_pin, OUTPUT);
  digitalWrite(dir_pin, HIGH);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(step_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(step_pin, LOW);
  delayMicroseconds(10);
}
