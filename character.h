#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class character
{
public:
	character(std::string _name, int _maxHP, int _attack) :name(_name), maxHP(_maxHP), attack(_attack)
	{
		currentHP = maxHP;
	}
	~character();

	std::string getName() { return name; }
	int getMaxHP() { return maxHP; }
	int getCurrentHP() { return currentHP; }
	int getAttack() { return attack; }

	bool isDead() { return currentHP == 0; }

	void takeDamage(int damage) { (currentHP - damage < 0) ? currentHP = 0 : currentHP -= damage; }
	
	friend std::ostream& operator<<(std::ostream& os, character& ch);

private:
	std::string name;
	int maxHP;
	int currentHP;
	int attack;
};

#endif