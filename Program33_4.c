#include<stdio.h>

void Display()
{
    static int i =1;
    static char ch = 'A';
    
    if(i<=6)
    {
        printf("%c ",ch++);
        i++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}