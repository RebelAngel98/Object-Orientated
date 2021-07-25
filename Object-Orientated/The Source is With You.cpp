#include <iostream>
#include <string>

#include "GameStructure.h"
#include "Character.h"
#include "GameDriver.h"

#include "Ninja.h"
#include "Pirates.h"

int main()
{
	//displaying the introduction

	GameDriver game_driver;
	game_driver.DisplayIntro();

	//creating new ninjas
	Ninja red_ninja;
	Ninja black_ninja;
	
	//this is the ninjas section of the code
	red_ninja.Name = "Connor";
	black_ninja.Name = "Johnny";

	//this is the health of the ninjas and what their health bar is set at.
	//below that is the get health bar of the ninjas
	red_ninja.SetHealthBar(100);
	black_ninja.SetHealthBar(100);
	std::cout << "\n\n\tThe Ninja's Health is " << red_ninja.GetHealthBar() << std::endl;
	std::cout << "\n\n\tThe Ninja's Health is " << black_ninja.GetHealthBar() << std::endl;

	//testing the fight between ninjas and pirates
	red_ninja.DisplayCharacterStat();
	black_ninja.DisplayCharacterStat();

	//this is the pirates section of the code
	Pirates red_pirates;
	Pirates black_pirates;

	//the names of our pirates. Names are based off of Treasure Planet by Disney 
	red_pirates.Name = " Captain John Silver";
	black_pirates.Name = "Jim Hawkins";

	//the health of the pirates is 50 more than ninjas because of the rough way they're grown up
	red_pirates.SetHealthBar(150);
	black_pirates.SetHealthBar(150);
	std::cout << "\n\n\tThe Pirate's Health is " << red_pirates.GetHealthBar() << std::endl;
	std::cout << "\n\n\tThe Pirate's Health is " << black_pirates.GetHealthBar() << std::endl;

	//testing the fight between pirates and ninjas
	red_pirates.DisplayCharacterStat();
	black_pirates.DisplayCharacterStat();

	//_____________________________________the talking period of our code ________________________________________________________________________
	red_pirates.Talk("Yer better keep yer damn head on Jimmy Boy!");
	black_pirates.Talk("Aye Aye Sir!");

	//======================back to the regular code================================
	black_ninja.Help();
	black_pirates.Help();
	
	return 0;
}