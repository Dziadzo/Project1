#include "Header.h"

void main() {
	int m = 0;
	int n = 0;
	cin >> m;
	cin >> n;
	int** array = createArray(m, n);
	pushRandomNumber(array, m, n);
	printArray(array, m, n);
	checkArray(array, m, n);
	delArray(array, m, n);
}