int latchPin=11;
int clockPin=9;
int dataPin=12;

byte LEDs=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);

}
