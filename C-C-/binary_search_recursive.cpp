#include<iostream>

using namespace std;

int binary_search(int arr[], int low, int high, int item){
    if (low<=high){
        int mid = (low+high)/2;
        cout<<mid;
        cout<<("------------------------")<<endl;

        if(item == arr[mid]){
            return mid;
        }
        if(item> arr[mid]){
            cout<<"=================="<<endl;
            low = mid + 1;
            return binary_search(arr, low, high, item);
        }
        else{
            high = mid - 1;
            return binary_search(arr, low, high, item);
        }
    }
    return -1;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]);
    int item = 8;

    int result = binary_search(arr, low, high, item);
    if (result == -1){
        cout<< "Not find";
    }
    else{
        cout << result;
    }

return 0;
}
