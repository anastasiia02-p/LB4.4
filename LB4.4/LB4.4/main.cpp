#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	
	if (x < -6)
		y = R;
	else

		if (x > -6 && x < -R)
			y = (x - R) / 6;
		else

			if (x > -R && x < 0)

				y = sqrt(R * R - pow(x + R, 2));
			else if (x >= 0 && x <= R)

				y = sqrt(R * R - x * x);
			else
				y = -1 * (x + R);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	
	cout << "---------------------------" << endl;
	return 0;
}