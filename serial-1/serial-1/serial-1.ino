/*
  example for sending potentimeter value to PC over serial
  and testing python code
*/

int analog_data = 0;
  
void setup() {
  // open serial communication
  Serial.begin(9600);
}

void loop() {
  // read analog value from port A0
  analog_data = analogRead(A0);

  // send data over serial
  // IMPORTANT delimiter, escape sequence for data is line feed = new line "\n"
  Serial.println(analog_data);  

  // delay 100ms, this means loop is running with 10Hz = 10 times per second
  delay(100); //send data every 10ms
}
