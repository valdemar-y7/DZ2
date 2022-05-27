#include "functions.h"

void random(int* arr, int size) {
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 200 - 100;
}

void print(int* arr, int size) {

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void inv(int* arr, int size) {
	int save;
	for (int i = 0; i < size / 2; i++) {
		save = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = save;
	}
}

void notDown(int* arr, int size) {
	int save;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (arr[i] >= arr[j]) {
				save = arr[i];
				arr[i] = arr[j];
				arr[j] = save;
			}
}

void notUp(int* arr, int size) {
	int save;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (arr[i] <= arr[j]) {
				save = arr[i];
				arr[i] = arr[j];
				arr[j] = save;
			}
}

void (*fun(int* arr, int size))(int*, int)
{
	int sum = 0;
	for (unsigned i = 0; i < size; i++) {
		sum += arr[i];
	}
	if (sum == arr[0])
		return inv;
	else if (sum < arr[0])
		return notUp;
	else
		return notDown;
}