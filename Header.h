#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;
class Game {
public:
	Game();

		//Operators

		//Functions
		void mainMenu();

		//Asccessors
		bool getPlaying() const { return playing; };

		//Modifers
private:
	int choice;
	bool playing;
};

Game::Game() {
	choice = 0;
	playing = true;
}
void Game::mainMenu() {

	cout << "Main Menu" << endl << endl; 
	cout << "0: Quit" << endl;
	cout << "1: Travel" << endl;
	cout << "2: Shop" << endl;
	cout << "3: Level up" << endl;
	cout << "4: Rest" << endl;

	cout << endl << "Choice: ";
	cin >> choice;

	switch (choice) {
	case 0:
		playing = false;
		break;
	default:
		break;
	}
}