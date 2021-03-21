#include <string.h>

char* my_downcase(char* param_1) {
    int c = 0;

    while (param_1[c] != '\0') {
        if (param_1[c] >= 'A' && param_1[c] <= 'Z') {
            param_1[c] = param_1[c] + 32;
        }
        c++;
    }
    
    return param_1;
}