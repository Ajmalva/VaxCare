//initilize package
// dht
//tft spi


// initilize pins
//int Edht=;
//int Idht=;
int Efan=12;
int Ifan=13;
int peltier=14;
int door=34;
// display
int BV=33;
int BI=25;
int SV=26;
int SI=27;




void setup() {
  // pinmode
  pinMode(Efan, OUTPUT);
  pinMode(Ifan, OUTPUT);
  pinMode(peltier, OUTPUT);
  pinMode(door, INPUT);
  pinMode(BV, INPUT);
  pinMode(BI, INPUT);
  pinMode(SV, INPUT);
  pinMode(SI, INPUT);


}

void loop() {
  // Read values
  bool DoorState = digitalRead(door);
  float BattV= analogRead(BV);
  float BattI= analogRead(BI);
  float SolarV= analogRead(SV);
  float SolarI= analogRead(SI);

  

}


// DHT11 sensor ext and int
// Fan relay exhaust and internal
// peltier relay
// door hall pin
// oled display or tft small
// battery volt and current (soc)
// solar volt current 
