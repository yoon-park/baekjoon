#include <iostream>

using namespace std;

int main() {
	int a, b, c, h, m;
	cin >> a >> b >> c;

	h = a + (c / 60);
	m = b + (c % 60);

	if (m > 59) {
		h += 1;
		m -= 60;
	}
	if (h > 23) {
		h -= 24;
	}

	cout << h << " " << m << endl;

	return 0;
}