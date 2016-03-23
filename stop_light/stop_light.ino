/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leo==d 8 May 2014
  by Scott Fitzgerald
 */
const int buttonpin = 6;
int buttonstate = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 11 as an output.
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(buttonpin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  buttonstate = digitalRead(buttonpin);
  Serial.println(buttonstate);
  if (buttonstate == HIGH){
    digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level)
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    delay(5000);              // wait for a second
    digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(4000);
    digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(7000);              // wait for a second
}
else {
    digitalWrite(11, LOW);  // turn LED off
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);}
}
