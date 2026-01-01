// 2 dimensional array for taking values from user and print values in user defined function


#include<stdio.h>

int function(int n_students,int n_subjects){


int arr[ n_students][n_subjects];
	
//Taking values from the user
for(int i=0; i<n_students; i++){

for (int j=0; j<n_subjects; j++){ 
printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
 scanf("%d", &arr[i][j]);
  }}


//Printing values
for(int k=0; k<n_students; k++){

for(int l=0; l<n_subjects; l++){

printf("The marks of student %d in subject %d is: %d\n", k+1, l+1, arr[k][l]);
	}
	printf("\n");
	}
  
  }
	




int main(){
int n_students;
int n_subjects;

//Taking Rows and columns values from the user
printf("enter the no. of students ");
scanf("%d",&n_students);
printf("enter the no. of subjects ");
scanf("%d",&n_subjects);
	


function(n_students,n_subjects);


}









// dimensional array for taking values from user and print values in user defined function
/*

#include<stdio.h>

int function(int *arr,int n_students,int n_subjects){

for(int i=1; i<=n_students; i++){

for(int j=1; j<=n_subjects; j++){

printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, *arr+i+j);
	}
	printf("\n");
	}
	}




int main(){
int n_students;
int n_subjects;

//Taking values from the user
	
printf("enter the no. of students ");
scanf("%d",&n_students);
printf("enter the no. of subjects ");
scanf("%d",&n_subjects);
	
int arr[ n_students][n_subjects];
	

for(int i=0; i<n_students; i++){

for (int j=0; j<n_subjects; j++){ 
printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
 scanf("%d", &arr[i][j]);
	}
}
	
function(arr,n_students, n_subjects);



return 0;

}*/
