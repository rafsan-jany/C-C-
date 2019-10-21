#include<iostream>

using namespace std;

struct Distance{
 int feet;
 float inch;

}dist1, dist2, sum;

int main(){
    cout<<"enter first distance : "<<endl;
    cin>>dist1.feet;

    cout<<"enter second distance : "<<endl;
    cin>>dist2.feet;

    sum.feet = dist1.feet + dist2.feet;

    cout<<"sum is : "<<sum.feet<<endl;

return 0;
}
