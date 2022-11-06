#include <iostream>

using namespace std;

int main()
{
	// 오차가 10^(-9) 이하여야 하므로 float(오차 범위가 10^(-7) 정도이다)는 사용할 수 없다
	double A, B;
	cin >> A >> B;

	// 소숫점 이하의 숫자를 10개로 고정한다(소숫점 아래 11자리에서 반올림하여 10자리까지 표현해준다)
	cout.fixed;
	cout.precision(10);
	cout << A / B << endl;

	return 0;
}