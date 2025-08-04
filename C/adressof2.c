#include <stdio.h>

int main() {
	int int_var = 5;
	int *int_ptr;

	int_ptr = &int_var;

	printf("int_ptr = 0x%08x\n", int_ptr);
	printf("&int_ptr = 0x%08x\n", &int_ptr);
	printf("*int_ptr = 0x%08x\n\n", *int_ptr);

	printf("int_var 0x%08x and %d\n", &int_var,int_var);
	printf("int_ptr 0x%08x 0x%08 to %d\n\n", &int_ptr, int_ptr, *int_ptr);
}
