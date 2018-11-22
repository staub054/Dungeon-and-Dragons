#include "Chartacter.h"
#include <cmath>

Character::Character() {
	name = "NONE";
	level = 1;
	strength = 0;
	exp = 0;
	expNext = 0;
	hp = 0;
	hpMax = 0;
	stamina = 0;
	damageMin = 0;
	damageMax = 0;
	defence = 0;
}

void Character::initialize(const std::string name) {
	this->name = name;
	level = 1;
	exp = 0;
	expNext = (50 / 3) * (pow(level, 3) - 6 * pow(level, 3) + (17 * level) - 11);
	hp = 10;
	hpMax = 10;
	stamina = 10;
	damageMin = 1;
	damageMax = 4;
	defence = 1;

}