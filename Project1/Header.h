#pragma once
#include <stdlib.h>;
#include <iostream>;
#include <iomanip>;
using namespace std;

int** createArray(int m, int n);
void pushRandomNumber(int** array, int m, int n);
void printArray(int** array, int m, int n);
void delArray(int** array, int m, int n);
void checkArray(int** array, int m, int n);