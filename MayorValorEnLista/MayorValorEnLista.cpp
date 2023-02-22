// MayorValorEnLista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void Intercambiar(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int Ordenar(int nums[], int low, int high, int pivote) {
	int pivoteIndex = low;
	for (int i = low; i < high + 1;i++) {
		if (nums[i] < pivote + 1) {
			swap(nums[pivoteIndex], nums[i]);
			pivoteIndex++;
		}
	}
	pivoteIndex--;
	return pivoteIndex;

}

void Quicksort(int nums[], int low, int high) {
	if (low < high) {
		int pivote = nums[high];

		int pivoteIndex = Ordenar(nums, low, high, pivote);

		Quicksort(nums, low, pivoteIndex - 1);
		Quicksort(nums, pivoteIndex + 1, high);
	}
}


int main()
{
	int nums[100] = { 2,4,60,3,80,5,20 };
	int i = 0;
	while (nums[i] != NULL) {
		i++;
	}

	int high = i;
	/*int length;
	cin >> length;

	nums.resize(length);*/

	Quicksort(nums,0, high - 1);
	//Intercambiar(&nums[3], &nums[4]);
	for (int i = 0; i <= 6;i++) {
		cout << nums[i] << " ";
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
