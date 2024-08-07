#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

//수정본
//수정본 22


//혼자 개발하지 않는다.
//남을 믿으면 안됨.
int main()
{
	APlayer* Player = new APlayer();

	//cout << Player->GetHP() << endl;
	srand(time(nullptr));

	int GoblinCount = rand() % 6;
	int SlimeCount = rand() % 6;
	int BoarCount = rand() % 6;

	AGoblin* Goblins[6];
	ASlime* Slimes[6];
	ABoar* Boars[6];

	for (int i = 1; i < GoblinCount; i++)
	{
		AGoblin* Temp = new AGoblin;
	}

	for (int i = 1; i < SlimeCount; i++)
	{
		ASlime* Temp = new ASlime;
	}

	for (int i = 1; i < BoarCount; i++)
	{
		ABoar* Temp = new ABoar;
	}


	for (int i = 1; i < GoblinCount; i++)
	{
		Goblins[i]->Move();
	}

	for (int i = 1; i < SlimeCount; i++)
	{
		Slimes[i]->Move();
	}

	for (int i = 1; i < BoarCount; i++)
	{
		Boars[i]->Move();
	}


	for (int i = 1; i < BoarCount; i++)
	{
		delete Goblins[i];
	}

	for (int i = 1; i < BoarCount; i++)
	{
		delete Slimes[i];
	}

	for (int i = 1; i < BoarCount; i++)
	{
		delete Boars[i];
	}

	return 0;
}