#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        printf("\n");
        
        for ( j = 1; j <= 9; j++)
        {
            if(j>=i && j<= 10-i)
              printf("*");
            else
              printf(" ");

        }
        
    }
    
    return 0;
}
