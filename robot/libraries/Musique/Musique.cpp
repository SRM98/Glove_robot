#include"Musique.h"


Musique::Musique() {

	pinMode(5, OUTPUT);
}
Musique::~Musique(){}

void Musique::naruto() {

	int melody[] = {

		NOTE_CS5, NOTE_FS5, NOTE_GS5, NOTE_A5,
		NOTE_GS5, NOTE_FS5, NOTE_FS5, 0,
		NOTE_CS5, NOTE_FS5, NOTE_GS5,

		NOTE_A5, NOTE_B5, NOTE_A5, NOTE_B5,
		NOTE_B5, NOTE_CS5, 0, NOTE_CS6, NOTE_FS5, NOTE_GS5,

		NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_FS5,
		0, NOTE_FS5,  NOTE_C5, NOTE_B5,

		0, NOTE_FS5,  NOTE_C5, NOTE_B5,
		0, NOTE_E5, NOTE_E5, 0, NOTE_FS5, NOTE_FS5
	};

	// note durations: 4 = quarter note, 8 = eighth note, etc.:
	int noteDurations[] = {

		16,16,16,4,
		6,16,4,16,
		16,16,16,

		4,8,16,16,
		16,6,16,16,16,16,

		4,6,16,4,16,
		16,16,16,

		16,16,16,16,
		16, 8, 16, 16, 16, 3
	};

		// iterate over the notes of the melody:
		for (int thisNote = 0; thisNote < sizeof(melody) / 2; thisNote++) {

			// to calculate the note duration, take one second divided by the note type.
			//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
			int noteDuration = 1000 / noteDurations[thisNote];
			tone(9, melody[thisNote], noteDuration);

			// to distinguish the notes, set a minimum time between them.
			// the note's duration + 30% seems to work well:
			int pauseBetweenNotes = noteDuration * 1.9;
			delay(pauseBetweenNotes);
			// stop the tone playing:
			noTone(9);
		}
}
void Musique::zelda() {
	int melody[] = {
		NOTE_A4, 0, 0 ,NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
		
		NOTE_A4, NOTE_G4, NOTE_A4, 0, 0, NOTE_A4,
		NOTE_A4, NOTE_A4, NOTE_A4,

		NOTE_A4, NOTE_G4, NOTE_A4, 0, 0, NOTE_A4,
		NOTE_A4, NOTE_A4, NOTE_A4,

		NOTE_A4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
		NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,

		NOTE_A4, NOTE_E4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C4,
		NOTE_D4,

		NOTE_E4, 0, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_G4,

		NOTE_A4, 0, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4,
		
		NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4,
		
		NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4,

		NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_E4,
	};

	// note durations: 4 = quarter note, 8 = eighth note, etc.:
	int noteDurations[] = {
		8, 8, 8, 8,8,8,8,

		4,8,4,8,8,8,8,8,8,

		4,8,4,8,8,8,8,8,8,

		8,16,16,8,16,16,8,16,16,8,8,

		4, 3, 8, 16, 16, 16, 16,

		2, 8, 8, 8, 8, 8,

		2, 8, 8, 8, 8, 8,

		6, 16, 2, 4,

		8, 16, 16, 2, 8, 8, 

		8, 16, 16, 2, 8, 8
	
	};

	// iterate over the notes of the melody:
	for (int thisNote = 0; thisNote < sizeof(melody) / 2; thisNote++) {

		// to calculate the note duration, take one second divided by the note type.
		//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int noteDuration = 1000 / noteDurations[thisNote];
		tone(9, melody[thisNote], noteDuration);

		// to distinguish the notes, set a minimum time between them.
		// the note's duration + 30% seems to work well:
		int pauseBetweenNotes = noteDuration * 1.5;
		delay(pauseBetweenNotes);
		// stop the tone playing:
		noTone(9);
	}


}

void Musique::skyrim() {

	int melody[] = {
		NOTE_D4, NOTE_CS4, NOTE_D4, 0, 0, NOTE_D4, NOTE_CS4, NOTE_D4, 0, 0,
		NOTE_C4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B3, 0, 0, NOTE_B4,
		NOTE_A4, NOTE_B4,

		0,0, NOTE_B4, NOTE_A4, NOTE_B4, 0,0, NOTE_A4, NOTE_B4, NOTE_CS4, NOTE_D4, NOTE_A4,
		NOTE_B4, 0, 0, NOTE_D4, NOTE_C4, NOTE_D4,

		NOTE_D4, NOTE_CS4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B4, NOTE_B4,
		NOTE_B4, NOTE_A4, NOTE_B4,

		NOTE_B4,NOTE_A4,NOTE_B4, NOTE_A4,NOTE_B4,NOTE_CS4, NOTE_D4, NOTE_A4, NOTE_B4, NOTE_B4, NOTE_C4,

		NOTE_D4,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_FS4,NOTE_F4,NOTE_F4,NOTE_A4,NOTE_E4,NOTE_E4,NOTE_FS4,NOTE_E4,
		NOTE_D4,NOTE_CS4,NOTE_B4,NOTE_B4
	};

	// note durations: 4 = quarter note, 8 = eighth note, etc.:
	int noteDurations[] = {
		16,16,16,8,16,16,16,16,8,16,16,16,8,8,8,6,8,16,16,16,16,

		8,16,16,16,16,8,16,16,16,8,8,8,16,8,16,16,16,4,

		16,16,4,16,16,8,8,8,8,8,16,16,4,

		16,16,4,16,16,8,8,8,8,8,8,

		4,4,8,8,4,4,8,8,4,8,16,16,8,8,4,4
	};

	// iterate over the notes of the melody:
	for (int thisNote = 0; thisNote < sizeof(melody) / 2; thisNote++) {

		// to calculate the note duration, take one second divided by the note type.
		//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int noteDuration = 1000 / noteDurations[thisNote];
		tone(9, melody[thisNote], noteDuration);

		// to distinguish the notes, set a minimum time between them.
		// the note's duration + 30% seems to work well:
		int pauseBetweenNotes = noteDuration * 1.8;
		delay(pauseBetweenNotes);
		// stop the tone playing:
		noTone(9);
	}




}

void Musique::wonderful() {

	int melody[] = {
		NOTE_A4,NOTE_G4,NOTE_A4,NOTE_G4,NOTE_C4,NOTE_E4,NOTE_F4,NOTE_F4,NOTE_C4,0,
		NOTE_D4,NOTE_D4,NOTE_D4,NOTE_C4,

		0,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_A4,0,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_F4,NOTE_F4,NOTE_F4,
		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,

		0,NOTE_F4,NOTE_F4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_C4,NOTE_CS4,NOTE_A4,
		NOTE_A4,NOTE_AS4,NOTE_A4,NOTE_G4,NOTE_C4,NOTE_E4,NOTE_F4,NOTE_F4,NOTE_C4,NOTE_C4,

		NOTE_D4,NOTE_D4,NOTE_C4,NOTE_C4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_AS4,NOTE_A4,NOTE_A4,
		NOTE_GS4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_E4,

		NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,NOTE_F4,0,NOTE_F4,NOTE_F4,NOTE_E4,
		NOTE_F4,NOTE_G4,NOTE_A4,
		
	};

	// note durations: 4 = quarter note, 8 = eighth note, etc.:
	int noteDurations[] = {
		2,2,2,4,8,8,3,8,2,8,8,8,8,2,

		8,8,8,8,2,8,8,8,8,4,8,8,8,2,8,8,8,2,

		4,8,8,4,4,4,1,4,4,4,8,8,8,4,8,8,3,8,3,8,

		3,8,3,8,4,8,8,8,3,8,4,8,8,8,4,8,8,8,

		2,8,8,8,2,4,8,8,4,4,4,1,
	};

	// iterate over the notes of the melody:
	for (int thisNote = 0; thisNote < sizeof(melody) / 2; thisNote++) {

		// to calculate the note duration, take one second divided by the note type.
		//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int noteDuration = 1000 / noteDurations[thisNote];
		tone(9, melody[thisNote], noteDuration);

		// to distinguish the notes, set a minimum time between them.
		// the note's duration + 30% seems to work well:
		int pauseBetweenNotes = noteDuration * 2.7;
		delay(pauseBetweenNotes);
		// stop the tone playing:
		noTone(9);
	}




}