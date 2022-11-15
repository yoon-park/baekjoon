#include <iostream>

using namespace std;

int main() {
	int x, n, a, b;
	int sum = 0;
	cin >> x >> n;
	
	for (int i; i < n; i++) {
		cin >> a >> b;
		sum += a * b;
	}

	if (x == sum)	cout << "Yes" << endl;
	else	cout << "No" << endl;
	
	return 0;
}