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


int EncontrarMenor(int arr[], int high) {
	
	if (high == 0) return arr[0]; //condicion de finalizacion de la recursion

	int minElem = EncontrarMenor(arr, high - 1); //se encuentra el menor hasta llegar low = 0 y high = 1;
	if (arr[high] < minElem) return arr[high]; //compara el valor mayor del nivel de recursion con el encontrado mas abajo
	else return minElem;
}


int main()
{
	int nums[100], maxNum;
	string cantNums, num;

	while (true) {
		cout << "Cuantos numeros desea insertar? ";
		cin >> cantNums;

		if (!ValidarNumero(cantNums)) { //cuando cantNums no sea un numero
			cout << "Cantidad invalida, solo insertar numeros" << endl;
			continue;
		}

		for (int i = 0; i < stoi(cantNums); i++) { //pedir tantos valores como haya ingresado el usuario
			cout << "Inserte el valor " << i + 1 << ": ";
			cin >> num;

			if (!ValidarNumero(num)) { //verificar que sea un numero antes de agregarlo al array
				cout << "Numero invalido, intente de nuevo" << endl;
				i--;
				continue;
			}

			nums[i] = stoi(num);
		}
		break;
	}

	maxNum = EncontrarMenor(nums, stoi(cantNums)-1); //funcion recursiva
	cout << "El numero menor es: " << maxNum;
}