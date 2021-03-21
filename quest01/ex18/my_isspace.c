#include <ctype.h>

int my_isspace(char param_1) {
    if (isspace(param_1)!=0) {
        return 1;
    }else {
        return 0;
    }
}