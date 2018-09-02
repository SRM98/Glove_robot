#include "Musique.h"
#include "Moteur.h"
#include "NewPing.h"
#include <VirtualWire.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     13  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 400

Moteur moteur;
Musique musique;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

int RF_RX_PIN = A0;


int distance(){
  
  delay(100);  // Wait 500ms between pings (about 2 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  int distance = uS / US_ROUNDTRIP_CM;
  return distance;
  
  }

void setup(){
 vw_set_rx_pin(RF_RX_PIN);  // Setup receive pin.
 vw_setup(2000); // Transmission speed in bits per second.
 vw_rx_start(); // Start the PLL receiver.
  }
void loop(){
 uint8_t buf[VW_MAX_MESSAGE_LEN];
 uint8_t buflen = VW_MAX_MESSAGE_LEN;
 
   if(vw_get_message(buf, &buflen)){
    for(int i = 0; i < buflen; ++i) {
      
      if(buf[i] == 49){ //avancer gauche
        
        moteur.Vitesse(80,0);
        delay(400);
        moteur.Vitesse(0,0);
        
        }
     else if(buf[i] == 56 ){ //arreter
   
        moteur.Vitesse(0,0);
        
        }
     else if(buf[i] == 51){ //avancer droite
  
        moteur.Vitesse(0,80);
        delay(400);
        moteur.Vitesse(0,0);
        
        }
    
     else if(buf[i] == 53){ //avancer
      
         moteur.Vitesse(80,75);
        delay(400);
        moteur.Vitesse(0,0);
        
        }
      
     else if(buf[i] == 55){ //musique
      moteur.Vitesse(0,0);
       musique.zelda();
        
       }
  
    }
    
   }
}

