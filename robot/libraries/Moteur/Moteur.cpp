#include "Moteur.h"


Moteur::Moteur(){
	
	pinMode(2, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);

	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(8, OUTPUT);

}

Moteur::~Moteur(){}

void Moteur::Vitesse(int gauche, int droite) {

	gauche = 255 / 100 * gauche; //conversion pourcentage
	droite = 255 / 100 * droite;

	if (gauche >= 0) { //avancer gauche

		analogWrite(5, gauche);
		digitalWrite(4, LOW);
		digitalWrite(2, HIGH);

	}
	if(gauche < 0){ //reculer gauche

		gauche *= -1;
		analogWrite(5, gauche);
		digitalWrite(4, HIGH);
		digitalWrite(2, LOW);

	}
	if (droite >= 0) { //avancer droite

		analogWrite(6, droite);
		digitalWrite(7, LOW);
		digitalWrite(8, HIGH);

	}
	if (droite < 0) { //reculer droite

		droite *= -1;
		analogWrite(6, droite);
		digitalWrite(7,HIGH);
		digitalWrite(8, LOW);


	}
	
}

void Moteur::Tourner(char direction, int temps) {

	int delai = 0;

	if (temps == 90) {
		delai = 400;
	}
	if (temps == 180) {
		delai = 800;
	}
	if (temps == 360) {
		delai = 1600;
	}
	if (direction == 'G') {
		Vitesse(-100, 100);
		delay(delai);
		Vitesse(0, 0);
	}
	if (direction == 'D') {
		Vitesse(100, -100);
		delay(delai);
		Vitesse(0, 0);
	}
}