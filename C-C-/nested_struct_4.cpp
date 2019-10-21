#include<iostream>

using namespace std;

struct complex{
    int imag;
    float real;
};

struct number{
    struct complex comp;
    int integers;
}num1, num2;

int main(){

    cout<<"enter number: "<<endl;
    cin>>num2.comp.imag;

    cout<<"the number is: "<<num2.comp.imag<<endl;

return 0;
}
