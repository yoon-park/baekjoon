#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b & b == c)	cout << 10000 + 1000 * a << endl;
	else if (a == b & b != c)	cout << 1000 + 100 * a << endl;
	else if (a == c & b != c)	cout << 1000 + 100 * c << endl;
	else if (b == c & a != c)	cout << 1000 + 100 * b << endl;
	else
	{
		if (a > b & a > c)	cout << 100 * a << endl;
		else if (b > a & b > c)	cout << 100 * b << endl;
		else cout << 100 * c << endl;
	}
	
	return 0;
}