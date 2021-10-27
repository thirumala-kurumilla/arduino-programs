int LEDpin = 2;     // LED on pin 5
int switchPin = 5; // momentary switch on 13, other side connected to ground

bool running = false;

void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);  // turn on pullup resistor
}

void loop() {
  if (digitalRead(switchPin) == LOW) {
    // switch is pressed - pullup keeps pin high normally
    delay(1000);                     // delay to debounce switch
    running = !running;             // toggle running variable
    digitalWrite(LEDpin, running);  // indicate via LED
  }
}
