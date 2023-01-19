/*4. Напиши програма која од стандарден влез ќе прочита број на редици и колони
(n <= 10, m <= 10) што ќе ги содржи една матрица од природни броеви.Од
стандарден влез внеси ги елементите на матрицата.
Програмата да го пресмета збирот на парните елементи во матрицата и збирот
на непарните елементи во матрицата.Резултатот да се испечати.*/

#include <iostream>

using namespace std;

void napolniMatrica(int n, int m, int matrica[10][10]) {

	cout << "Vnesi elementi na matricata:" << endl;

	int broj;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> broj;
			matrica[i][j] = broj;
		}
	}
	cout << endl;
}

void pecatiMatrica(int n, int m, int matrica[10][10]) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrica[i][j] << '\t';
		}
		cout << endl;
	}
}


int main() {

int matrica[10][10];
int n, m;
int sumN = 0, sumP = 0;

	cout << "Vnesi golemina na red i koloni na matrica:" << endl;
	cin >> n >> m;

	napolniMatrica(n, m, matrica);
	pecatiMatrica(n, m, matrica);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] % 2 == 0) {
				sumP += matrica[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] % 2 == 1) {
				sumN += matrica[i][j];
			}
		}
	}

	cout << "Sumata na parni broevi e:" << sumP << endl;
	cout << "Sumata na neparni broevi e:" << sumN;
}