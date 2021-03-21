#include <stdio.h>
int my_recursive_pow(int base, int a) {
    if (a != 0)
        return (base * my_recursive_pow(base, a - 1));
    else
        return 1;
}