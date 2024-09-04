int ct=3;
void setup() {
  pinMode (ct, INPUT);
  Serial.begin(9600);

}

void loop() {
  int ct_state = digitalRead(ct);
  Serial.println(ct_state);
  delay(200);

}
