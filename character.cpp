#include "character.h"




std::ostream& operator<<(std::ostream& os, character& ch) {
	os << ch.getName() << ": HP: " << ch.getCurrentHP() << ", DMG: " << ch.getAttack() << std::endl;
	return os;
}

character::~character()
{
}
