#include <ctype.h>
#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}
  
void my_print_alphabet() 
{ 
    char ch; 
  
    for (ch = 'a'; ch <= 'z'; ch++) 
        my_putchar(ch);

    putchar('\n');
}