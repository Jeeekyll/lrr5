
#include "iostream"
#include "math.h"
#include "windows.h"
#include "func.h"
using namespace std;
int main()
{
	float  a, b, j, a2;
	int a1;
	cout << "Input a " << endl;
	cin >> a;
	cout << "Input b " << endl;
	cin >> b;
	cout << "Input j " << endl;
	cin >> j;
	a1 = func1(a, b);
	a2 = sum(j);
	print();
	cout << rez(a1, a2) << endl;
	system("pause");
	return 0;
}

