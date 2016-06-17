#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

using namespace std; 

class Array {	
	public:	
		int n;
		int m;	
		int arr[3][3];
		void create_arr();
		int calculate();
		void replase();
		void output();
};

void Array::create_arr() {
	n = 3;
	m = 3;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			arr[i][j] = rand() % 20 - 10;
		}
	}
}

void Array::output() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {			
			if(j == 0) {
				cout << endl;
			}
			cout << arr[i][j] << " | ";
		}
	}	
}

int Array::calculate() {
	int d = 1;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {					
			if(arr[i][j] > 0) {
				d = d * arr[i][j];
			}
		}
	}
	return d;
}

void Array::replase() {
	arr[3][3] = this->calculate();
}

int main() {
	
	srand(time(NULL));
	
	Array a;
	a.create_arr();	
	cout << "Product of positive elements: " << a.calculate();
	cout << endl;
	a.replase();
	cout << endl;
	a.output();
		
	return 0;
}
