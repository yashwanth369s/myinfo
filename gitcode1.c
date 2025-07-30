#include <stdio.h>

int main() 
{   

  //here stdout is the file pointer pointing to standard output stream
    fwrite("Welcome to DS\n", sizeof(char), 14, stdout);
    
    return 0;
}