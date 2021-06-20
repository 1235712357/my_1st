// C Program to Find & Display Multiplication table

#include <stdio.h>
#include<conio.h>
 
int main()
{
    int number, i = 1;
    clrscr ();
 
    printf(" Enter the Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n ", number);
    printf("--------------------------\n");
    
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
    }
    
    getch();
    return 0;
}