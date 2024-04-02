//Inisialisasi pin 
int ledPin = 13; 
int ldrPin = A0;

void setup() { 
Serial.begin(9600);
pinMode (ledPin, OUTPUT);
pinMode (ldrPin, INPUT);
}

void loop() {
  //membaca nilai input analog
  int ldrStatus = analogRead(ldrPin); 
  //pengujian kondisi
  if (ldrStatus <= 200) {
    digitalWrite(ledPin, HIGH); 
    Serial.print ("Gelap, LED hidup : "); 
    Serial.println(ldrStatus);
  } else {
    digitalWrite(ledPin, LOW);
    Serial.print ("Terang, LED mati : ");
    Serial.println(ldrStatus);
  }
}