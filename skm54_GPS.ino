/*
Bill Geronatsios (c)  2018
This Sketch will run with the SkyLab SKM53 GPS 
 RXD Arduino Pin 3
 TXD Arduino Pin 2
 RST Leave Open 
 NC Leave Open
 GND Ground
 VCC +5
 Make sure you download and save to your Arduino/Libraries folder TinyGPS.h
 and NewSoftSerial.h files.
*/

#include <TinyGPS.h>
#include <SoftwareSerial.h>

unsigned long fix_age;

SoftwareSerial GPS(2,3);
TinyGPS gps;
//void gpsdump(TinyGPS &gps);
//bool feedgps();
//void getGPS();
long lat, lon;
float LAT, LON;

void setup(){
  GPS.begin(9600);
  Serial.begin(9600);
}

void loop(){
  long lat, lon;
  unsigned long fix_age, time, date, speed, course;
  unsigned long chars;
  unsigned short sentences, failed_checksum;

  // retrieves +/- lat/long in 100000ths of a degree
  gps.get_position(&lat, &lon, &fix_age);

  getGPS();
  Serial.print("Latitude : ");
  Serial.print(LAT/100000,7);
  Serial.print(" :: Longitude : ");
  Serial.println(LON/100000,7);
}

void getGPS(){
  bool newdata = false;
  unsigned long start = millis();
  // Every 1 seconds we print an update
  while (millis() - start < 1000)
  {
    if (feedgps ()){
      newdata = true;
    }
  }
  if (newdata)
  {
    gpsdump(gps);
  }
}

bool feedgps(){
  while (GPS.available())
  {
    if (gps.encode(GPS.read()))
      return true;
  }
  return 0;
}

void gpsdump(TinyGPS &gps)
{
  //byte month, day, hour, minute, second, hundredths;
  gps.get_position(&lat, &lon);
  LAT = lat;
  LON = lon;
  {
    feedgps(); // If we don't feed the gps during this long routine, we may drop characters and get checksum errors
  }
}
