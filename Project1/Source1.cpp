#include "Header.h"

int** createArray(int m, int n){
	int** array = new int* [m];
	for (int i = 0; i < m; i++)
	{
		array[i] = new int[n];
	}
	return array;
}

void delArray(int**array,  int m, int n) {
	for (int i = 0; i < m; i++)
	{
		delete[]array[i];
	}
	delete[]array;
}

void printArray(int** array, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << array[i][j];
		}
		cout << endl;
	}
}

void pushRandomNumber(int** array, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[i][j] = rand()%99+1;
		}
	}
}

void checkArray(int** array, int m, int n) {
	int sum = 0;
	int maxsum = 0;
	int indexmaxsum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += array[i][j];
		}
		if (sum>maxsum)
		{
			maxsum = sum;
			indexmaxsum = i;
		}
		sum = 0;
	}
	cout <<endl<< "max row sum = " << maxsum << " row index = " << indexmaxsum + 1 << endl;
}