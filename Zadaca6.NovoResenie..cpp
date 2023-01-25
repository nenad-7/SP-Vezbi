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

void rowIncDec(int n, int m, int matrica[10][10]) {

	for (int i = 0; i < n; i++) {
		bool rasteckiRed = true;
		bool opajgackiRed = true;
		for (int j = 0; j < m - 1; j++)
		{
			if (matrica[i][j] <= matrica[i][j + 1]) {
				opajgackiRed = false;
			}
			if (matrica[i][j] >= matrica[i][j + 1]) {
				rasteckiRed = false;
			}
		}
		if (rasteckiRed == true) {
			cout << "Redot " << i << " e rastecki" << endl;
		}
		else if (opajgackiRed == true) {
			cout << "Redot " << i << " e opajgacki" << endl;
		}
		else {
			cout << "Redot " << i << " nitu rastecki nitu opajgacki" << endl;
		}
	}
}

void columnIncDec(int n, int m, int matrica[10][10]) {

	for (int j = 0; j < m; j++) {
		bool rasteckaKolona = true;
		bool opajgackaKolona = true;
		for (int i = 0; i < n - 1; i++) {
			if (matrica[i][j] <= matrica[i + 1][j]) {
				opajgackaKolona = false;
			}
			if (matrica[i][j] >= matrica[i + 1][j]) {
				rasteckaKolona = false;
			}
		}
		if (rasteckaKolona == true) {
			cout << "Kolonata " << j << " e rastecka" << endl;
		}
		else if (opajgackaKolona == true) {
			cout << "Kolonata " << j << " e opajgacka" << endl;
		}
		else {
			cout << "Kolonata " << j << " nitu rastecka nitu opajgacka" << endl;
		}
	}
}
	

int main() {
	int n, m; 
	int matrica[10][10];

	cout << "Vnesi golemina na matrica" << endl; 
	cin >> n >> m;
	napolniMatrica(n, m, matrica); 
	pecatiMatrica(n, m, matrica); 
	cout << endl;

	rowIncDec(n, m, matrica);
	columnIncDec(n, m, matrica);
}