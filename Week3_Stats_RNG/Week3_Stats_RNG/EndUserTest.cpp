#include "Stats.h"

int main()
{
	Stats s;

	s.generateRNumbers();
	s.calcTotal();
	s.calcMean();
	s.displayStats();

	return 0;
}