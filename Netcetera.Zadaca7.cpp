/*7. Напиши програма која од стандарден влез ќе прочита две матрици од природни
броеви.
Програмата е потребно да провери дали двете матрици се еднакви.Да се
испечати резултатот од споредбата.*/

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
	int matrica2[10][10];

	bool seEdnakvi = false;

	int n1, n2, m1, m2;

	cout << "Vnesi golemina na red i kolona na prvata matrica" << endl;
	cin >> n1 >> m1;

	napolniMatrica(n1, m1, matrica);

	cout << "Vnesi golemina na red i kolona na vtorata matrica" << endl;
	cin >> n2 >> m2;

	napolniMatrica(n2, m2, matrica2);

	if (n1 == n2 && m1 == m2) {
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < m1; j++) {
				if (matrica[i][j] == matrica2[i][j]) {
					seEdnakvi = true;
				}
			}
		}
	}

	cout << seEdnakvi;
}
	

