#include <stdio.h>

int j = 42; // j - global variable

void func3() {
	int i = 11, j = 999; // Here j - local variable fun3()
	printf("\t\t\t[We in func3] i = %d, j = %d\n", i, j);
}

void func2() {
	int i = 7;
	printf("\t\t[We in func2] i = %d, j = %d\n", i, j);
	printf("\t\t[We in func2] setting j = 1337\n");
	j = 1337; // recording in variable
	func3();
	printf("\t\t[back in func2] i = %d, j = %d\n", i,j);
}

void func1() {
	int i = 5;
	printf("\t[We in func1] i = %d, j = %d\n", i, j);
	func2();
	printf("\t[Back in func1] i = %d, j = %d\n", i, j);
}

int main() {
	int i = 3;
	printf("[We in main] i = %d, j = %d\n", i,j);
	func1();
	printf("[Back in main] i = %d, j = %d\n", i,j);
}

