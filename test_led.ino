/* LoRa transmitter - receiver messenger -- llcoder 11-18-2021
* There are three serial ports on the ESP known as U0UXD, U1UXD and U2UXD.
*
* U0UXD is used to communicate with the ESP32 for programming and during reset/boot.
* U1UXD is unused and can be used for your projects. Some boards use this port for SPI Flash access though
* U2UXD is unused and can be used for your projects.
*/

#define RXD2 16   // LoRa TX (ESP32 RX2)
#define TXD2 17   // LoRa RX (ESP32 TX2)
#define LED BUILTIN_LED//38

#include<LoRa.h>


String incomingString;
String PrStr; // String used to print the incoming string after decoding it

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, RXD2, TXD2);  // (ESP32 UART)
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
}
