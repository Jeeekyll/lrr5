#include "iostream"
#include "math.h"
#include "windows.h"
#include "func.h"
using namespace std;
int main()
{
	float x, y, a, b, a2;
	int a1;
	cout << "Input a " << endl;
	cin >> a;
	cout << "Input b " << endl;
	cin >> b;
	cout << "Input x " << endl;
	cin >> x;
	cout << "Input y " << endl;
	cin >> y;
	a1 = func1(a, b);
	a2 = func2(x, y);
	cout << func3(a1, a2) << endl;;
	system("pause");
	return 0;
}

