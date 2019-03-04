#include<Arduino.h>

class Moteur {

public:
	Moteur();
	~Moteur();
	void Vitesse(int gauche, int droite);
	void Tourner(char direction, int temps);

};