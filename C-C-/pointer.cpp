#include<iostream>

using namespace std;

int main(){

    int* pc, c;

    c = 22;
    cout<<"addrss of c: "<<c<<endl;
    cout<<"value of c: "<<c<<endl; //22

    pc = &c;
    cout<<"address of pointer: "<<pc<<endl;
    cout<<"content of pointer: "<<*pc<<endl; //22

    c = 11;
    cout<<"address of pointer: "<<pc<<endl;
    cout<<"content of pointer: "<<*pc<<endl; //11

    *pc = 2;
    cout<<"address of c: "<<&c<<endl;
    cout<<"value of c: "<<c<<endl; //2

return 0;
}
