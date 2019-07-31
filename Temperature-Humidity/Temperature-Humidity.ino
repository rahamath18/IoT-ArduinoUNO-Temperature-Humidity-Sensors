#include "DHT.h"
#define DHTPIN 5                       // Digital Pin 5
#define DHTTYPE DHT11                  // We are Using DHT11
int i=1;
DHT dht(DHTPIN, DHTTYPE);              // Initialising Pin and Type of DHT

void setup() {                
  Serial.begin(9600);
  Serial.println("Temparature & Humidity Measurements!");  
  dht.begin();
}

// the loop 
void loop() {
  int temp = dht.readTemperature();        // Reading Temperature Value
  String temperature = String(temp);
  
  int hum =  dht.readHumidity();             // Reading Humidity Value  
  String humidity = String(hum);                 // Converting them to string 
  Serial.println("Temperature == " + temperature + ", Humidity == " + humidity);                
  delay(1000); // Update after every 15 seconds
}
