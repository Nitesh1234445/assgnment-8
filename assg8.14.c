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
              if(j>=2 && j<= i-1 && i!=5)
              printf(" ");
              else
              printf("*");
            else
              printf(" ");
        }
        
    }
    
    return 0;
}
