#pragma once
#include "Character.h"
class Ninja :
	public Character
{
public:
	//throwing ninja stars...racist
	void UseStarAttack();
	Ninja();
	int Attack() override;
	void Help() override; 
	
private:
	
	
};

