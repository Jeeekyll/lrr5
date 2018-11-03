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

float func2(float x, float y)
{
	if ((5 * x + 1) != 0)
		return ((exp(2) + (1 / pow(x, y))*cos(45)*x) / (5 * x + 1)) + sin(pow(x, 2) + y);
	else cout << "Error" << endl;
}
float func3(int a1, float a2)
{
	return ((a1*a1) - (4 * a2)) / (fabs(a2) - 24);
}
