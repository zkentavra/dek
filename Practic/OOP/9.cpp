#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>
#include<cmath>

using namespace std; 

class Array {	
	public:	
		int n;
		int m;	
		float arr[4][4];
		void create_arr();
		float calculate();
		void replase();
		void output();
};

void Array::create_arr() {
	n = 4;
	m = 4;
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

float Array::calculate() {
	float arithmetic_mean;
	float counter = 0;
	float sum = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {					
			if(arr[i][j] > 0) {
				sum += arr[i][j];
				counter++;
			}
		}
	}
	arithmetic_mean = abs(sum / counter);
	return arithmetic_mean;
}

void Array::replase() {
	arr[2][1] = this->calculate();
}

int main() {
	
	srand(time(NULL));
	
	Array a;
	a.create_arr();	
	cout << "Arithmetic Mean of positive elements: " << a.calculate();
	cout << endl;
	a.replase();
	cout << endl;
	a.output();
		
	return 0;
}
