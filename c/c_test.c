
#include <stdio.h>
char * my_method() {
 char c[10] = "yoyoyo";
 return (char *)&c;
} 

int main() {
    char * my_pointer = my_method();
    sprintf("%s", *my_pointer);
    return 0;
}
