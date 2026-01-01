#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d\n", &n);
    int arr[n];
    
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
    	printf("Enter the element %d : ",i);
        scanf("%d", &arr[i]);
    }
    
      printf("Printing the elements: \n");
    for (int i = 0; i < n; i++) {
        printf("Printing the element %d : %d \n",i, arr[i]);
    }
    
    
    return 0;
}
