#include <stdio.h>

void usage(char *program_name) {
	printf("Usage: %s <message> <# of times to repeat>\n", program_name);
	exit(1);
}

int main(int argc, char *argv[]) {
	int i, count;
