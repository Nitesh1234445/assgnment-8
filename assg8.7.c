#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        printf("\n");
        
        for ( j = 1; j <= 10; j++)
        {
            if(j>=7-i && j<= 4+i)
              printf(" ");
            else
              printf("*");

        }
        
    }
    
    return 0;
}
