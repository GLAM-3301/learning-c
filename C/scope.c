#include <stdio.h>

void func3() {
	int i = 11;
	printf("\t\t\t[We in func3] i = %d\n", i);
}

void func2() {
	int i = 7;
	printf("\t\t[We in func2] i = %d\n", i);
	func3();
	printf("\t\t[Back in func2] i = %d\n", i);
}

void func1() {
	int i = 5;
	printf("\t[We in func1] i = %d\n", i);
	func2();
	printf("\t[Back in func1] i= %d\n", i);
}

int main() {
	int i = 3;
	printf("[We in main] i = %d\n", i);
	func1();
	printf("[Back in main] i = %d\n", i);
}
