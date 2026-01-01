#include <stdio.h>

int main()
{
   
    int marks[2][4] = {{4, 2, 2, 3},
                       {3, 2, 3, 3}};

     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value of [%d][%d] of the array is %d\n",i,j, marks[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}

