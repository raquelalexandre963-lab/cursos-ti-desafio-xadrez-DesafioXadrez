#include <stdio.h>
int main ()
{
    char Ch;
    Ch='\0';
    while (Ch!='q') 
       {
            Ch = getch();
       }
    return(0);
}