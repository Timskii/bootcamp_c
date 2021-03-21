#include <ctype.h>

int my_islower(char param){
    if (islower(param)!=0){
        return 1;
    }else {
        return 0;
    }
}