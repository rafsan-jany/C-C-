#include<iostream>
#include<string>
#include<sstream>

using namespace std;

struct person{
    int age;
    float weight;
};

int main(){
    struct person *personPtr, person1;
    personPtr = &person1;

    cout<<"enter age: "<<endl;
    getline(cin, personPtr->age);

    cout<<"age is: "<<personPtr->age<<endl;

return 0;
}
