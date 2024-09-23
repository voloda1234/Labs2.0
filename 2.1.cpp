#include <iostream>
#include <cmath>

using namespace std;

const double PI = 4 * atan(1.);

int main()
{
	double a; 
	double z1; 
	double z2; 

	cout << "a = "; cin >> a;

	z1 = (pow(cos(3 / 8 * PI - a / 4), 2) - pow(cos(11 / 8 * PI + a / 4), 2));
	z2 = (sqrt(2) / 2) * sin(a / 2);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}