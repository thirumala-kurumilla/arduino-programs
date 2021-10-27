void setup() {
  Serial.begin(9600);
}

void loop() {
Serial.println();
Serial.println(76,BIN); //gives "0100 1100"
Serial.println(76,OCT); //gives "114"
Serial.println('L',DEC); //gives "76"
Serial.println(76,HEX);  //gives "4C" 
Serial.println();
  Serial.write(0x48);   // H
  Serial.write(0x45);   // E
  Serial.write(0x4C);   // L
  Serial.write(0x4C);   // L
  Serial.write(0x4F);   // O
  Serial.println();
  Serial.println(sizeof(int));
  Serial.println(sizeof(float));
  Serial.println(sizeof(double));
  Serial.println(sizeof(char));
  Serial.println(sizeof(long));
  Serial.println(sizeof(signed));
  Serial.println(sizeof(unsigned));
  Serial.println(sizeof(short));

  size_t n; //size_t never be negative
  Serial.println(sizeof(n));
  Serial.println(sizeof(size_t));


 long x=10;
 Serial.println(x);
 int y=10;
 Serial.println(y);
 Serial.println(sizeof(y));
 y=100L;
 Serial.println(y);
 Serial.println(sizeof(y));




 
delay(5000);





}
