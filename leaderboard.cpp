//leaderboards.cpp

#include "leaderboard.h"
#include <algorithm>
#include <iostream> // debugging

void saveLeaderBoard(const std::string &fileName, Leaderboard &playerData) // write leaderboard object player data to <filename> from object <playerData>
{
	std::ofstream out;
	out.open(fileName, std::ofstream::binary); // for appending ---->   out.open(fileName, std::ofstream::binary | std::ofstream::app); 
	out.write(reinterpret_cast<char*>(&playerData), sizeof(Leaderboard));
	out.close();
}

void loadLeaderBoard(const std::string &fileName, Leaderboard &playerData) // read leaderboard object player data from <filename> and load it into object <playerData>
{
	std::ifstream in;
	in.open(fileName, std::ifstream::binary);
	in.read(reinterpret_cast<char*>(&playerData), sizeof(Leaderboard));
	in.close();
}

bool updateLeaderBoard(const Leaderboard &a, const Leaderboard &b) // rank players - sort the data according to high scores 
{
	return a.topScore > b.topScore; // call std::sort(playerVector.begin(), playerVector.end(), updateLeaderBoard)
}

void displayLeaderBoard(const Leaderboard &playerData)
{
	std::cout << "\n Rank " << playerData.rank << " Top Score " << playerData.topScore << "\n" << std::endl; // display data on console for debugging purposes
}