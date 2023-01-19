/*6. Напиши програма која од стандарден влез ќе прочита број на редици и колони
(n <= 10, m <= 10) што ќе ги содржи една матрица од природни броеви.Од
стандарден влез внеси ги елементите на матрицата.
Програмата е потребно да го провери секој ред и секоја колона од матрицата и
да отпечати дали редот / колоната е строго растечки, строго опаѓачки или ниту
строго растечки ниту строго опаѓачки.Резултатот за секој ред / колона да се
отпечати.*/

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
	bool eRasteckiRed = false; bool eRasteckaKolona = false;
	bool eOpajgackiRed = false; bool eOpajgackaKolona	 = false;

	int n, m, matrica[10][10];

	cout << "Vnesi golemina na red i kolona na matrica:";
	cin >> n >> m;

	napolniMatrica(n, m, matrica);
	pecatiMatrica(n, m, matrica);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i - 1 >= 0) {
				if (matrica[i][j] >= matrica[i - 1][j]) {
					eRasteckiRed = true;

				}
			}
			if (j - 1 >= 0) {
				if (matrica[i][j] >= matrica[i][j - 1]) {
					eRasteckaKolona = true;
				}
			}

			if (i - 1 >= 0) {
				if (matrica[i][j] <= matrica[i-1][j]) {
					eOpajgackiRed = true;
				}
			}

			if (j - 1 >= 0) {
				if (matrica[i][j] <= matrica[i][j - 1]) {
					eOpajgackaKolona = true;
				}
			}


		}
	}

	if (eRasteckiRed && eRasteckaKolona) {
		cout << "Redot e rastecki i kolonata e rastecka" << endl;
	}
	else if (eOpajgackiRed && eOpajgackaKolona) {
		cout << "Redot e opajgacki i kolonata e opajgacka" << endl;
	}

	else {
		cout << "Matricata ne e nitu strogo opajgacka nitu strogo rastecka" <<endl;
	}
}