/*
   Created by ArduinoGetStarted.com

   This code is based on an example in the public domain

   Tutorial page: https://arduinogetstarted.com/tutorials/arduino-light-sensor
*/

void setup() {
  // initialize pins and serial communication at 9600 bits per second:
  Serial.begin(9600);
  int pinLeft = A0;
  int pinRight = A1;
}

void loop() {
  // reads the input on two analog pins (value between 0 and 1023)
  int analogValueLeft = analogRead(pinLeft);
  int analogValueRight = analogRead(pinRight);

  Serial.print("Left sensor: ");
  Serial.println(analogValueLeft);   // the raw analog reading
  Serial.print("Right sensor: ");
  Serial.println(analogValueRight);


  // Part of the original code, probably unnecessary:
  // We'll have a few threshholds, qualitatively determined
//  if (analogValueLeft < 10) {
//    Serial.println(" - Dark");
//  } else if (analogValueLeft < 200) {
//    Serial.println(" - Dim");
//  } else if (analogValueLeft < 500) {
//    Serial.println(" - Light");
//  } else if (analogValueLeft < 800) {
//    Serial.println(" - Bright");
//  } else {
//    Serial.println(" - Very bright");
//  }
//  if (analogValueRight < 10) {
//    Serial.println(" - Dark");
//  } else if (analogValueRight < 200) {
//    Serial.println(" - Dim");
//  } else if (analogValueRight < 500) {
//    Serial.println(" - Light");
//  } else if (analogValueRight < 800) {
//    Serial.println(" - Bright");
//  } else {
//    Serial.println(" - Very bright");
  }


  delay(500);
}
