/*Напиши програма која од стандарден влез ќе прочита број на редици и колони(n <= 10, m <= 10) што ќе ги содржи една матрица од природни броеви.
Од  стандарден влез внеси ги елементите на матрицата.
Програмата е потребно да ги промени местата на минималната и максималната  вредност во матрицата.*/



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



int main()
{
	int matrica[10][10];
	int n, m,temp;
	int maxI=0, maxJ=0;
	int minI = 0, minJ = 0;
	

	cout << "Vnesi broj na redovi i koloni na matricata:";
	cin >> n >> m;

	napolniMatrica(n, m, matrica);
	

	int min = matrica[0][0];
	int max = matrica[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] > max) {
				max = matrica[i][j];
				maxI = i;
				maxJ = j;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] < min) {
				min = matrica[i][j];
				minI = i; 
				minJ = j;
			}
		}
	}
	pecatiMatrica(n, m, matrica); 
	cout << endl;

	//promena na maksimalnata i minimalnata vrednost
	temp = matrica[minI][minJ];
	matrica[minI][minJ] = matrica[maxI][maxJ]; 
	matrica[maxI][maxJ] = temp;

	pecatiMatrica(n, m, matrica);

}
