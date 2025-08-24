#include <stdio.h>

int j = 42; // j - global variable


void func3() {
        int i = 11, j = 999; // this j - local variable fun3()
        printf("\t\t\t[We in func3] i @ 0x%08x = %d\n", &i, i);
        printf("\t\t\t[We in func3] j @ 0x%08x = %d\n", &j, j);
}

void func2() {
        int i = 7;
        printf("\t\t[We in func2] i @ 0x%08x = %d\n", &i, i);
        printf("\t\t[We in func2] j @ 0x%08x = %d\n", &j, j);
        printf("\t\t[We in func2] setting j = 1337\n");
        j = 1337; // writing in variable
        func3();
        printf("\t\t[Back in func2] i @ 0x%08x = %d\n", &i, i);
        printf("\t\t[Back in func2] j @ 0x%08x = %d\n", &j, j);
}

void func1() {    
        int i = 5;   
        printf("\t[We in func1] i @ 0x%08x = %d\n", &i, i);
        printf("\t[We in func1] j @ 0x%08x = %d\n", &j, j);
        func2();
        printf("\t[Back in func1] i @ 0x%08x = %d\n", &i, i);
        printf("\t[Back in func1] j @ 0x%08x = %d\n", &j, j);
}

int main() {
        int i = 3;
        printf("[We in main] i @ 0x%08x = %d\n", &i, i);
        printf("[We in main] j @ 0x%08x = %d\n", &j, j);
        func1();
        printf("[Back in main] i @ 0x%08x = %d\n", &i, i);
        printf("[Back in main] j @ 0x%08x = %d\n", &j, j);
}
