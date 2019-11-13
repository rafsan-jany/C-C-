#include<bits/stdc++.h>

void printDivisors(int n){
    int j = 0;
    for(int i=1;i<=n;i++)
        if(n%i==0){
            printf("%d ",i);
            j++;
        }
        printf("\ntotal divisors are: %d", j);
}

int main(){
printf("The divisors of 100 is: \n");
printDivisors(100);

return 0;
}


