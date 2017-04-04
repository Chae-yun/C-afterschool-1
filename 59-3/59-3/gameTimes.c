#include "common.h"
#include "gameTimes.h"

static int gameNumofTimes = 0;
static int youWinNumOftimes = 0;

void IncreGameTimes(){
	gameNumofTimes++;
}

int GetGameTimes(){
	return gameNumofTimes;
}

void IncreYouWinTimes(){
	youWinNumOftimes++;
}

int GetYouWinTimes(){
	return youWinNumOftimes;
}

int GetPercenOfVictory(){
	return GetYouWinTimes() * 100 / GetGameTimes();
}