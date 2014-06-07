#include<iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main(){
	int* doubleCapacity();
	
}
int* doubleCapacity(const int* list, int size)
{

	int* doublearr = new int[size * 2];

	for (int i = 0; i < size; i++){
		doublearr[i] = list[i];
	}

	for (int i = size++; i < size * 2; i++){

		doublearr[i];
	}

	return doublearr;
}