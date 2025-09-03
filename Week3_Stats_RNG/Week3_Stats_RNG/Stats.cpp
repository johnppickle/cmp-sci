#include "Stats.h"
#include <iostream> // cin & cout
#include <cstdlib> // rand(), srand()
#include <ctime> // # of sec since epoc
using namespace std;

void Stats::generateRNumbers()
{
	int seed = time(0); // see rng to number of seconds since epoc
	srand(seed); // rng seeded by seed
	for (int i = 0; i < 25; i++)
	{
		num[i] = rand() % 400 + 100;
	}
}

void Stats::calcTotal()
{
	for (int i = 0; i < 25; i++)
	{
		total = total + num[i]; // running total
	}

}

void Stats::calcMean()
{
	average = static_cast<double>(total) / 25;
}

void Stats::displayStats()
{
	cout << "Here are the random numbers: \n";
	for (int i = 0; i < 25; i++)
	{
		cout << num[i] << endl;
	}
	cout << "Here is the calculated total: " << total << endl;
	cout << "Here is the calculated average: " << average << endl;

}
