#include <stdio.h>

typedef struct bank_details{
	char name[50];
    int account_Number;
    int secret_code;
	}bd;
	

void display(bd d1){

	printf("The name of custumer is : %s\n",d1.name);
	printf("The acc. no. of custumer is : %d\n",d1.account_Number);
	printf("The secret code of custumer is : %d\n",d1.secret_code);
	
	printf("\n\n");
	
	}
	
	
int main(){
	int n;
	printf("Enter no. of custumers : ");
	scanf("%d\n\n",&n);
	
	bd d[n];
	
	//taking drtails of every custumer
	for(int i=0;i<n;i++)
	{
        
        printf("Enter the name of cutumer %d : ",i+1);
        scanf("%s",&d[i].name);
        
        
        printf("Enter the acc. no. of cutumer %d : ",i+1);
        scanf("\n%d",&d[i].account_Number);
        
        
        printf("Enter the secret code of cutumer %d : ",i+1);
        scanf("\n%d",&d[i].secret_code);
        
        printf("\n");
		
		}
		
		
		printf("\n");
		
		//displaying the details of custumer
		for(int i=0;i<n;i++)
		{
			display(d[i]);
		}

	return 0;
	}
