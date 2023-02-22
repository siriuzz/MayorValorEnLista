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
	while (true) {
		string cantNums, num;
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

	int i = 0, maxNum;
	while (nums[i] != NULL) {
		i++;
	}

	int high = i;

	maxNum = EncontrarMayor(nums, 0, i - 1);
	cout << "El numero mayor es: " << maxNum;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
