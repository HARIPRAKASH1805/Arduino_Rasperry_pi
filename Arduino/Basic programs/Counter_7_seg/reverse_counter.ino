void printNum(int num)
{
  if (num == 1)
  {
    digitalWrite(2, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
  }

  else if (num == 0)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
  }

  else if (num == 2)
  {
    digitalWrite(9, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
  }

  else if (num == 3)
  {
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }

  else if (num == 4)
  {
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }

  else if (num == 5)
  {
    digitalWrite(9, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
  }

  else if (num == 6)
  {
    digitalWrite(9, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
  }

  else if (num == 7)
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
  }

  else if (num == 8)
  {
    digitalWrite(9, HIGH);
  }

  else if (num == 9)
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
  }
  delay(1000);
  initialize();

}

void initialize()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 9;
  for (i = 9; i >=0; i--)
  {
    printNum(i);
  }

}
