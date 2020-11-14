# PYSERIAL 1

-	pyserial python + arduino hello world 
-	OUTPUTS DATA ALL THE TIME, no logic involved
-	arduino is sending potentimoeter data every 200ms
-	python is reading data. no user inputs

## ARDUINO CODE

[]: pyserial_arduino_1/pyserial_arduino_1.ino	"pyserial_arduino_1"

```c++
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
```

## PYTHON CODE

```python
import serial

device = serial.Serial("COM3", baudrate = 9600, timeout = 1)

while 1:
    #arduinoData = ser.readline() #RESULT = b'453\r\n'
    arduinoData = device.readline().decode('ascii') #RESULT = 453
    print(arduinoData)

device.close()
```

JUPYTER NOTEBOOK