#include <stdio.h>
#include <stdint.h>

int main() {
        int i;

        char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
        int int_array[5] = {1, 2, 3, 4, 5};

        uintptr_t hacky_nonpointer;

        hacky_nonpointer = (uintptr_t)char_array;
        for (i = 0; i < 5; i++) {
                printf("[hacky_nonpointer] указывает на адрес %p, содержащий символ '%c'\n", hacky_nonpointer, *((char *)hacky_nonpointer));
                hacky_nonpointer = hacky_nonpointer + sizeof(char);
        }

        hacky_nonpointer = (uintptr_t)int_array;
        for (i = 0; i < 5; i++) {
                printf("[hacky_nonpointer] указывает на адрес %p, содержащий число '%d'\n", hacky_nonpointer, *((int *)hacky_nonpointer));
                hacky_nonpointer = hacky_nonpointer + sizeof(int);
        }

}
