#include <iostream>

using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	if (m - 45 < 0)
	{
		if (h - 1 < 0)	cout << 23 << " " << 15 + m << endl;
		else cout << h - 1 << " " << 15 + m << endl;
	}
	else	cout << h << " " << m - 45 << endl;

	return 0;
}