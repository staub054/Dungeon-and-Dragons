#pragma once
#include <string>
using namespace std;
class Character {
public:
	Character();

	//Functions
	void initialize(int level, string name);

	//Accessors
	const double& getX() const { return xPos;  }
	const double& getY() const { return yPos; }
	const string& getName() const { return name; }
	const int& getLevel() const { return level; }
	const int& getStrength() const { return strength; }
	const int& getExp() const { return exp; }
	const int& getHp() const { return hp; }
	const int& getHpMax() const { return hpMax; }
	const int& getStamina() const { return stamina; }
	const int& getDamageMin() const { return damageMin; }
	const int& getDamageMax() const { return damageMax; }
	const int& getDefence() const { return defence; }

	//Modifier


private:
	double xPos;
	double yPos;
	
	string name;
	int level;
	int strength;
	int exp;
	int hp;
	int hpMax;
	int stamina;
	int damageMin;
	int damageMax;
	int defence;

};


Character::Character() {
	
	name = "NONE";
	level = 1;
	strength = 0;
	exp = 0;
	hp = 0;
	hpMax = 0;
	stamina = 0;
	damageMin = 0;
	damageMax = 0;
	defence = 0;

}