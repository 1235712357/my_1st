/* To find  the sum of integer numbers*/
#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i, sum = 0;
    clrscr ();
    
    printf("\n Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }

    printf("\n Sum = %d \n", sum);
    
    getch ();
    return 0;
}
