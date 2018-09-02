#include <VirtualWire.h>
int RF_TX_PIN = A1;

/*Serial.print(data5);
Serial.print(" ");
Serial.print(data4);
Serial.print(" ");
Serial.print(data3);
Serial.print(" ");
Serial.print(data2);
Serial.println(" ");*/ //debug


void setup() {
  // put your setup code here, to run once:

pinMode(A5,INPUT);
pinMode(A4,INPUT);
pinMode(A3,INPUT);
pinMode(A2,INPUT);

vw_set_tx_pin(RF_TX_PIN); // Setup transmit pin
vw_setup(2000); // Transmission speed in bits per second.

}

void loop() {
  // put your main code here, to run repeatedly:

int data5 = analogRead(A5);
int data4 = analogRead(A4);
int data3 = analogRead(A3);
int data2 = analogRead(A2);

if(data5 <= 30){ //avancer gauche
  const char *msg = "1";
  vw_send((uint8_t *)msg,1); 
  vw_wait_tx();
}

if(data4 < 20){ //avancer droite
  const char *msg = "3";
  vw_send((uint8_t *)msg, 1); 
  vw_wait_tx();
}

if(data3 < 20 && data2 < 20 ){ //avancer
  const char *msg = "5";
  vw_send((uint8_t *)msg,1); 
  vw_wait_tx();
}

if(data5 <= 30 && data4 < 20 && data3 < 20 && data2 < 20){ //musique
  const char *msg = "7";
  vw_send((uint8_t *)msg, 1); 
  vw_wait_tx();
}

if((data3 >= 20 && data2 >= 20) || (data5 > 30 && data4 > 20)){ //arreter
  const char *msg = "8";
  vw_send((uint8_t *)msg, 1); 
  vw_wait_tx();
  
}

}
