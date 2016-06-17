#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

using namespace std; 

class Array {	
	public:
		int arr[29];
		void create_arr();
		int calculate();
		void replase();
		void output();
};

void Array::create_arr() {
	for (int i = 0; i <= sizeof(arr) / sizeof(int); i++) {
		arr[i] = rand() % 20 - 10;
	}
}

void Array::output() {
	for (int i = 0; i <= sizeof(arr) / sizeof(int); i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}	
}

int Array::calculate() {
	int amount = 0;
	for (int i = 0; i <= sizeof(arr) / sizeof(int); i++) {
		if(arr[i] % 2 != 0) {
			amount++;
		}		
	}	
	return amount;
}

void Array::replase() {
	arr[(sizeof(arr) / sizeof(int)) - 1] = this->calculate();
}

int main() {
	
	srand(time(NULL));
	
	Array a;
	a.create_arr();	
	cout << "Amount of not even elements: " << a.calculate();
	cout << endl;
	a.replase();
	cout << endl;
	a.output();
		
	return 0;
}
