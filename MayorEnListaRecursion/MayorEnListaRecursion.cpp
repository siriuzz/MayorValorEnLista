// MayorEnListaRecursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool ValidarNumero(string str)// metodo para comprobar si el dato introducido es entero
{
	int i = 0;
	while (str[i] != '\0') //'\0' es el character que marca el final del string
	{
		if (isdigit(str[i]) == false) return false;// compara cada caracter de la cadena para saber si es numerico	
		i++;
	}
	return true; //devuelve un str igual si no se encontraron letras
}


int EncontrarMayor(int arr[], int low, int high) {
	
	if (high == 0) return arr[0];

	int maxElem = EncontrarMayor(arr, low, high - 1);
	if (arr[high] < maxElem) return arr[high];
	else return maxElem;
}


int main()
{
	int nums[100];
	string cantNums, num;

	while (true) {
		cout << "Cuantos numeros desea insertar? ";
		cin >> cantNums;

		if (!ValidarNumero(cantNums)) {
			cout << "Cantidad invalida, solo insertar numeros" << endl;
			continue;
		}

		for (int i = 0; i < stoi(cantNums); i++) {
			cout << "Inserte el valor " << i + 1 << ": ";
			cin >> num;

			if (!ValidarNumero(num)) {
				cout << "Numero invalido, intente de nuevo" << endl;
				i--;
				continue;
			}

			nums[i] = stoi(num);
		}

		break;
	}

	int j = 0, maxNum;
	while (j < stoi(cantNums)) {
		j++;
	}

	int high = j - 1;

	maxNum = EncontrarMayor(nums, 0, high);
	cout << "El numero menor es: " << maxNum;
}