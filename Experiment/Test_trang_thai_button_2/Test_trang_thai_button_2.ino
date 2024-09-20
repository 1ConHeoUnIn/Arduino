
int nut1=2;
int nut2=3;
void setup()
{
  pinMode(nut1, INPUT_PULLUP); // chưa nhấn thì =1
  pinMode(nut2, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{
  int trangthai1=digitalRead(nut1);
  int trangthai2=digitalRead(nut2);
  Serial.println(trangthai1);
  Serial.println(trangthai2);//In ra trạng thái hiện tại
 delay(100);

  
}