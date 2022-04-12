// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

// This #include statement was automatically added by the Particle IDE.
#include <ThingSpeak.h>


#include <ThingSpeak.h>

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

// This #include statement was automatically added by the Particle IDE.


#define DHTPIN D6 //This defines the pin that is being used to access the LCD Screen

#define DHTTYPE DHT11 // This defines the sensors that are being used to obtain the temperature and humidity data


DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
    Serial.begin(9600);
    dht.begin();

}

void loop() {
    
    float temp;

temp = dht.getTempCelcius();

Particle.publish("temp", String(temp), PRIVATE);


delay(30000);

}
