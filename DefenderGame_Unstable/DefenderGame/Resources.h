#ifndef RESOURCES_H
#define RESOURCES_H

#include <iostream>
using namespace std;

class Resources
{
public:
	int getGold();
	void setGold(int addGold);
	//in development
	int getMetalScraps();
	void setMetalScraps(int newMetalScraps);
	int getWoodScraps();
	void setWoodScraps(int newWoodScraps);
	int getStone() const;
	void setStone(int newStone);
	int getMysteriousWard() const;
	void setMysteriousWard(int numberWards);
	int getCapturedEnemies() const;
	void setCapturedEnemies(int numberToSell);
private:
	int gold = 500;
	//in development
	int metalScraps;
	int woodScraps;
	int stone;
	int mysteriousWard;
	int capturedEnemies;


};



#endif //RESOURCES_H