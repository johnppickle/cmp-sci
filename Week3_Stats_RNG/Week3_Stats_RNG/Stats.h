
class Stats
{
private:
	int num[25] = { 0 }; // name of array: numbers, size of array: 25
				// subscripts/index goes from 0-24
				// elements of the array: num[0]...num[24]
	int total = 0;
	double average = 0.0;
public:
	void generateRNumbers();
	void calcTotal(); // running total approach
	void calcMean(); // avg
	void displayStats(); // all 25 numbers, total, avg

};