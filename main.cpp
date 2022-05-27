#include "functions.h"

int main()
{
	srand(time(0));
	int size = 0;
	cin >> size;
	int* mas = new int[size];
	random(mas, size);
	fun(mas, size)(mas, size);
	print(mas, size);
}
