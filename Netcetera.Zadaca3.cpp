
/* 3. Напиши програма која од стандарден влез ќе прочита број на редици и колони(n <= 10, m <= 10) што ќе ги содржи една матрица од природни броеви.
Од  стандарден влез внеси ги елементите на матрицата.
Креирај нова матрица која ќе биди трансформација на внесената матрица така
што секој елемент ќе биди трансформиран во својот број на десетки(пр. 175 ->  7, 87-> 8, 5 ->0).Отпечати ја добиената матрица. */

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

void transformMatrica(int n, int m, int matrica[10][10], int tMatrica[10][10]) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tMatrica[i][j] = matrica[i][j] / 10 % 10;
		}
	}
}



int main() {
	int matrica[10][10], tMatrica[10][10];

	int n, m; 

	cout << "Vnesi broj na redovi i koloni na matricata:" << endl;
	cin >> n >> m;
	
	napolniMatrica(n, m, matrica); 

	transformMatrica(n, m, matrica, tMatrica); 

	pecatiMatrica(n, m, tMatrica);
}