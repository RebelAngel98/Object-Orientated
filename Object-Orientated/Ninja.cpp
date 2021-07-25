#include "Ninja.h"
#include <iostream>
#include <string>


void Ninja::UseStarAttack()
{
	std::cout << "\n\nThrow the Pointy Stars!";
}
Ninja::Ninja()
{
	std::cout << "\nNinja just born!";
}
int Ninja::Attack()
{
	//the override attack will cause 15 attack damage points. 
	return 15;
}
void Ninja::Help()
{
	std::cout << "\n\tThis is Ninja Help, your Sensei saids to try your Star Attack!\n\t";
}
