#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i, N;
	double S;

	cout << "N = "; cin >> N;
	cout << endl;

	S = 0;
	i = 1;
	while (i <= N) {
		S += 1/(1. * i) + sqrt(1 + sin(1. * i)* sin(1. * i));
		i++;
	}
	cout << "1) S = " << S << endl;
	cout << endl;

	S = 0;
	i = 1;
	do{
		S += 1 / (1. * i) + sqrt(1 + sin(1. * i) * sin(1. * i));
		i++;
	} while (i <= N);
	cout << "2) S = " << S << endl;
	cout << endl;

	S = 0;
	for (i = 1; i <= N; i++) {
		S += 1 / (1. * i) + sqrt(1 + sin(1. * i) * sin(1. * i));
	}
	cout << "3) S = " << S << endl;
	cout << endl;

	S = 0;
	for (i = N; i >= 1; i--) {
		S += 1 / (1. * i) + sqrt(1 + sin(1. * i) * sin(1. * i));
	}
	cout << "4) S = " << S << endl;
	cout << endl;
	
	return 0;
}