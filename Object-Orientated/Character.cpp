#include "Character.h"
#include <iostream>
#include <string>

int Character::GetHealthBar()
{

	return Health;
}
void Character::SetHealthBar(int health)
{
	if (health < 0)
	{
		health = 0;
		std::cout << "\n\n\t"<< Name << " has died honorably in battle against the dreaded enemy.";
	}


	Health = health;
}
void Character::DisplayCharacterStat()
{
	std::cout <<"\n\n\t"<< Name << " has a current health of " << Health << ".";
}
	
//getter and setter of health of the character 
void Character::Talk(std::string stuffToSay)
{
	std::cout << "\n" << Name << " saids " << stuffToSay << std::endl;
}
void Character::Talk(std::string stuffToSay, std::string name)
{
	std::cout << "\n" << Name << " saids " << stuffToSay << std::endl;
}
int Character::Attack()
{
	//this is the attack method for both our pirates and ninjas
	return 10;
}
void Character::Help()
{
	std::cout << "\n\nThis is the N.P.C Help!\n";
}

