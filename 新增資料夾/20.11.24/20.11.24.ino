const boolean data[16][7] = 
{
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}, // 9
  {1, 1, 1, 0, 1, 1, 1}, // a
  {0, 0, 1, 1, 1, 1, 1}, // b
  {1, 0, 0, 1, 1, 1, 0}, // c
  {0, 1, 1, 1, 1, 0, 1}, // d
  {1, 0, 0, 1, 1, 1, 1}, // e
  {1, 0, 0, 0, 1, 1, 1}, // f
};
byte seg[7] = {2,3,4,5,6,7,8};
int counter=0;
void setup()
{
  for(int i=0;i<7;i++)
    pinMode(seg[i],OUTPUT);  
  pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(9,HIGH);
  counter++; 
  if (counter > 15)
  {
    counter=0;
  }
  disp(counter);
  delay(1000);
}

void disp(int x)
{
  for(int i=0;i<7;i++)
    digitalWrite(seg[i],data[x][i]);
}
