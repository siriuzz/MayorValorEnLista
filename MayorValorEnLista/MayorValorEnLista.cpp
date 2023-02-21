// MayorValorEnLista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

int nums[100] = { 20,10,40,30,5 };

void Intercambiar(int* num1, int* num2) {
	int i = 0, temp;
	while (nums[i] != NULL) {
		if (nums[i] == *num1 && nums[i + 1] == *num2) {
			temp = *num1;
			*num1 = *num2;
			*num2 = temp;
			break;
		}
		else {
			temp = *num2;
			*num2 = *num1;
			*num1 = temp;
			break;
		}
	}
}

int BusquedaBinaria(int nums[], int lookUpValue) {
	return 1;

}


int main()
{
	Intercambiar(&nums[1], &nums[0]);
	for (int i = 0; i < 5; i++) {
		cout << nums[i] << endl;
	}

	//cout << "Inserte un numero: ";


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
