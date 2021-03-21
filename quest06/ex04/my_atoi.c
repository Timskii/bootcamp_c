#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 int my_atoi(char* str)
{
     // Initialize result
    int res = 0;
 
    // Initialize sign as positive
    int sign = 1;
 
    // Initialize index of first digit
    int i = 0;
 
    // If number is negative,
    // then update sign
    if (str[0] == '-') {
        sign = -1;
        // Also update index of first digit
        i++;
    }
 
    // Iterate through all digits
    // and update the result
    for (; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    // Return result with sign
    return sign * res;
}

 /*int main()
{
    printf("my_atoi=%d\n", my_atoi("359765"));
    int res = 100;
    res = res - '0';
    return (0);
}*/