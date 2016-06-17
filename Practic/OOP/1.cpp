#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

using namespace std; 

class Array {	
	public:
		int arr[19];
		void create_arr();
		int calculate_sum();
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

int Array::calculate_sum() {
	int sum = 0;
	for (int i = 0; i <= sizeof(arr) / sizeof(int); i++) {
		if(arr[i] > 0) {
			sum = sum + arr[i];
		}		
	}	
	return sum;
}

void Array::replase() {
	arr[0] = this->calculate_sum();
}

int main() {
	
	srand(time(NULL));
	
	Array a;
	a.create_arr();	
	cout << "Sum of positiv elements: " << a.calculate_sum();
	cout << endl;
	a.replase();
	cout << endl;
	a.output();
		
	return 0;
}
