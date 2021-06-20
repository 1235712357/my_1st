#include <stdio.h>
#include<conio.h>

int main()
{
    int a[10001],i,n,key;
    clrscr();
    
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the key : ");
    scanf("%d", &key);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("element found ");
            return 0;		 
        }
 
    }
    
	printf("element  not  found");
	getch ();
}