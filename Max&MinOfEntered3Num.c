/* To find the maximum & minimum of three numbers using ternary operator  */

#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, x, y, max, min;

    clrscr();
    printf("\n Enter three numbers (separated by space): ");
    scanf("%d%d%d",&a,&b,&c);

     x=(a>b) ? a : b;
     max=(x>c) ? x : c;
     printf("\nThe Maximum of the three numbers is: %d\n",max);
   
     y = (a < b)  ? a : b;
     min =  (c < y) ? c : y;
     printf ("\nThe Minimum of the three numbers is: %d\n", min);
           
    getch ();
    
        /* indicate success */
   return 0;
}
