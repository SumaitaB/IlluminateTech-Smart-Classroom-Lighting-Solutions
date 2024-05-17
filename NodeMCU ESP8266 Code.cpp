
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "8MENY7cubtR8Asw6-w87lI6M_txKWdWn"; //Enter your Blynk auth token
char ssid[] = "II"; //Enter your WIFI name
char pass[] = "12345678"; //Enter your WIFI passowrd

int fan1=D1;
int light1=D2;

BLYNK_WRITE(V0){
  int L = param.asInt();
  if (L==HIGH){digitalWrite(light1,HIGH);}
 if (L==LOW){digitalWrite(light1,LOW);}

  }

  BLYNK_WRITE(V1){
  int F = param.asInt();
  if (F==HIGH){digitalWrite(fan1,HIGH);}
 if (F==LOW){digitalWrite(fan1,LOW);}

  }
void setup() {
  Serial.begin(9600);
  pinMode(fan1,OUTPUT);
  pinMode(light1,OUTPUT);
  Blynk.begin(auth,ssid,pass,"blynk.cloud",80);
}

void loop() {
Blynk.run();
}
