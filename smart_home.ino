#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Apne Wi-Fi ka Naam aur Password Sahi Likhein
char ssid[] = "your wifi name";     
char pass[] = "your password"; 

const int RELAY_1 = 18; 
const int RELAY_2 = 19; 

// Room 1 (V0) - Switch Inverted Fix
BLYNK_WRITE(V0) {
  int value = param.asInt();
  digitalWrite(RELAY_1, !value); // ! Lagane se ON/OFF Sahi Ho Gaya
}

// Room 2 (V1) - Switch Inverted Fix
BLYNK_WRITE(V1) {
  int value = param.asInt();
  digitalWrite(RELAY_2, !value); 
}

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);

  // Shuruat me HIGH rakhne se Relay OFF rahega
  digitalWrite(RELAY_1, HIGH);
  digitalWrite(RELAY_2, HIGH);

  // Direct Blynk Connection (Sabse Reliable)
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
