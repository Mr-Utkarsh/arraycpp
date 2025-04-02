#include <iostream>
using namespace std;

int main() {

    // int arr[5]= {1,2,3,4,5};
    // cout<<arr[4];


    int arr[10]={5,6,4,3,5,};//stores rest value are 0
    // int arr[10];//stores garbage value
    int s = sizeof(arr)/sizeof(arr[0]);//length of aray
    cout<<"length iof array = "<<s<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<"\t";//display the value of
    }
    
}