#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printDivisor(int n){

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i)
                printf("%d ",i);
            else
                printf("%d %d ", i, n/i);
        }
    }
}


int main(){

printDivisor(100);

return 0;
}
