#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char* rcapitalize(char* param_1)
{
char* s = malloc(sizeof(char) * strlen(param_1));
int j=0;

    
        
    for (int i = 0; param_1[i]!='\0'; i++) {
        if(param_1[i] >= 'a' && param_1[i] <= 'z' && ( param_1[i+1] == ' ' || param_1[i+1]=='\0')) {
            s[j] = param_1[i] -32;
        }
        
        else if (param_1[i] >= 'A' && param_1[i] <= 'Z' &&  param_1[i+1] != ' ' && param_1[i+1]!='\0') {
            s[j] = param_1[i] + 32;
        } 
                else {
            s[j] = param_1[i];
        }

     
        j++;  
   }
 
   return s;
}

/*int main() {
    printf("%s\n",rcapitalize("   But... This iS not THAT COMPLEX"));
    
} */