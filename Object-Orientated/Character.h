#pragma once
#include "GameStructure.h"
#include <string>
class Character :
	public GameStructure
{
public:
	std::string Name;
	int GetHealthBar();
	void SetHealthBar(int health);
	//getting the character statistics
	void DisplayCharacterStat();
	//polymorphism
	void Talk(std::string stuffToSay);
	void Talk(std::string stuffToSay, std::string name);
	virtual int Attack();
	void Help() override;
	
	
private:
	int Health;
};


