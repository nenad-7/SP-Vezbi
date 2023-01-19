/*1. Напиши ги следните функции :
a.Функција преку која ќе може да се внеси матрица од n x m елементи(n < 10, m < 10)
b.Функција која ќе отпечати дадена матрица.
c.Функција која ќе ја пронајде максималната вредност во дадена матрица и  ќе ја отпечати вредноста и позицијата на елементот
d.Функција која ќе ја пронајде минималната вредност во дадена матрица и  ќе ја отпечати вредноста и позицијата на елементот
e.Функција која за дадена матрица ќе ја пронајди сумата на сите броеви во  матрицата.Отпечати ја вратената вредност од функцијата.
f.Функција која за дадена матрица ќе ја пронајди просечната вредност на  сите броеви во матрицата.Отпечати ја вратената вредност од функцијата.*/



#include <iostream>

using namespace std; 


void napolniMatrica(int n, int m, int matrica[10][10] ) {

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

void pecatiMatrica(int n, int m,int matrica[10][10]) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrica[i][j] << '\t' ;
		}
		cout << endl;
	}
}

void maxVrednost(int n, int m, int matrica[10][10]) {

	int max = matrica[0][0];
	int pozRed = 0, pozKolona = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] > max) {
				max = matrica[i][j]; 	
				pozRed = i;
				pozKolona = j;
			}
		}
	}
	cout << "Najgolemiot broj e:" << max <<endl;
	cout << "Na pozicija:" << '[' << pozRed << ']' << '[' << pozKolona << ']' << '\n';
}

void minVrednost(int n, int m, int matrica[10][10]) {

	int min = matrica[0][0];
	int pozRed = 0, pozKolona = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] < min) {
				min = matrica[i][j];
				pozRed = i;
				pozKolona = j;
			}
		}
	}
	cout << "Najmaliot broj e:" << min << endl;
	cout << "Na pozicija:" << '[' << pozRed << ']' << '[' << pozKolona << ']' <<'\n';
}

void sumMatrica(int n, int m, int matrica[10][10]) {

	int sum = 0; 

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += matrica[i][j];
		}
	}

	cout << "Sumata na elementite na matricata e:" << sum;

}

void prosekMatrica(int n, int m, int matrica[10][10]) {

	int sum = 0, prosek = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += matrica[i][j];

			prosek = sum / (n*m);
		}
	}

	cout << "Prosecnata vrednost na matricata e:" <<prosek;
}



int main() {

	int matrix[10][10];
	int n, m;

	cout << "Vnesi broj na redovi i koloni na matricata:" << endl;

	cin >> n >> m;

	napolniMatrica(n, m, matrix);

	pecatiMatrica(n, m, matrix);

	prosekMatrica(n, m, matrix);

}