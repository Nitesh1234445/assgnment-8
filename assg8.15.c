#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        printf("\n");
        
        for ( j = 1; j <= 5; j++)
        {
            if(j>=6-i)
              if((j==4 && i==3) || (j==4 && i==4) || (j==3 && i==4))
              printf(" ");
              else
              printf("*");
            else
              printf(" ");
        }
        
    }
    
    return 0;
}
