#include<stdio.h>
long int my_recursive_factorial(int n) {
    if (n>=1)
        return n*my_recursive_factorial(n-1);
    else
        return 1;
}