#include<stdio.h>
#include<stdlib.h>

int main(){
    int* ptr;
    int n, i, sum = 0;

    n = 5;

    printf("Enter the number of elements: %d\n", n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("memory not allocated \n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated \n");

        for(i=0;i<n;i++){
            ptr[i] = 7;
        }

        for(i=0;i<n;i++){
            printf("%d, %d \n", &ptr[i], ptr[i]);
        }
    }

    free(ptr);
    printf("free the allocated memory");

return 0;
}
