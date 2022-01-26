#include "EnemyArmy.h"
void EnemyArmy::rollArmySize() //Enemy function
{
	//set total size of army - modify based on difficulty
	armySize = rand() % 40 + 20;
}
void EnemyArmy::rollDirection() //Enemy Function - pick the locations where the army is divided into [0] - [3]
{
	int tempArmySize = armySize;
	for (int i = 0; i < soldiersAtLocation.size(); i++)
	{
		if (rollAd12() > 6 && tempArmySize > 0)
		{
			int amountOfSoliers = rand() % tempArmySize + 1;
			setSoldiersAtLocation(amountOfSoliers, i);
			tempArmySize -= amountOfSoliers;
		}
	}
}
void EnemyArmy::resetArmy() //EnemyFunction
{
	for (int i = 0; i < soldiersAtLocation.size(); i++)
	{
		setSoldiersAtLocation(0, i);
	}
}
void EnemyArmy::whereAreTheEnemies() //Enemy function
{
	cout << "- - - - - - - - - - - - - - - - - - - - - -\n";
	for (int i = 0; i < soldiersAtLocation.size(); i++)
	{
		if (getSoldiersAtLocation(i) > 0)
		{
			int enemies = getSoldiersAtLocation(i);
			string direction = getDirection(i);
			cout << "\n" << enemies << " enemy soldiers approach from the " << direction << "!\n\n";
		}
	}
	cout << "- - - - - - - - - - - - - - - - - - - - - -";
}