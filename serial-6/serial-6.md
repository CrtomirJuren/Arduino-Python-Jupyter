# PYSERIAL 6 - WRITE DATA TO FILE

-	WRITE DATA TO FILE
-	reject invalid user inputs
-	when arduino gets string value "1", send data to PC
-	arduino outputs data only when requested from PC
-	arduino is sending potentimoeter data every 200ms
-	python is reading data. no user inputs


## ARDUINO CODE
```

const int potentiometer_pin = A0;
int analog_data = 0;
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  analog_data = analogRead(potentiometer_pin);
  Serial.println(analog_data);  // IMPORTANT delimiter, escape sequence for data is line feed = new line "\n"
  delay(200);
}
```

## PYTHON CODE

```python

```