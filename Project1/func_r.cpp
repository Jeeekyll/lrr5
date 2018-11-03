#include "func.h"
#include "math.h"
#include "iostream"
using namespace std;
float func1(float a, float b)
{
	if ((pow(a, 1.0 / 3) + 1) / (a*a + 4) != 0) {
		return ((exp(3) + (a*a) + (4 / b)) / ((pow(a, 1.0 / 3) + 1) / (a*a + 4)));
	}
	else cout << "Error" << endl;
}
float sum(float j)
{

	int y = 0;
	if (5 * j*j != 0)
	{
		for (int i = 1; i < 6; i++)
		{
			y = y + cos(i*j);
		}
	}


	return (y + sqrt(j)) / (5 * j*j);

}

float rez(int a1, float a2)
{
	return ((a1*a1) - (4 * a2)) / (fabs(a2) - 24);
}
void print()
{
	cout << "Answer = ";
}
