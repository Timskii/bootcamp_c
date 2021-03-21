#include <stdio.h>
int my_iterative_pow(int param_1, int param_2)
{
    int result=1;
    int i;
    for(i=0; i<param_2; i++){
        result = result*param_1;
    }
    return result;
}
    

/*int main () {
    printf("%d\n", my_iterative_pow(2,3));
}*/