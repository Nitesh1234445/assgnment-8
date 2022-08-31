#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        printf("\n");
        
        for ( j = 1; j <= 5; j++)
        {
            if(j<=i)
              printf("*");
            else
              printf(" ");

        }
        
    }
    
    return 0;
}
