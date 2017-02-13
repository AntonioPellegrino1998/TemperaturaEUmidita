#include <LiquidCrystal.h>
#include <dht.h>
dht DHT;
#define DHT11_PIN 1

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  Serial.println(DHT.humidity);
  Serial.println(DHT.temperature);
  delay(500);
}
