#include <stdio.h>    
int main ()    
{    
    int i,j,k,l;    
    printf("enter the number of rows:\t");
    scanf("%d",&k);
    printf("enter the number of coloumn:\t");
    scanf("%d",&l);
    int ankush[k][l];
    
    for (i=0;i<k;i++)    
    {    
        for (j=0;j<l;j++)    
        {    
            printf("element ankush[%d][%d]: ",i,j);                
            scanf("%d",&ankush[i][j]);    
        }    
    }    
    printf("printing the elements ....\n");     
    for(i=0;i<k;i++)    
    {    
          for (j=0;j<l;j++)    
        {    
            printf("%d\t",ankush[i][j]);    
        }   
        printf("\n");
    }    
}	
	

