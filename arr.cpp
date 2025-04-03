#include <iostream>
using namespace std;

int main() {

    // int arr[5]= {1,2,3,4,5};
    // cout<<arr[4];


    // int arr[10]={5,6,4,3,5,};//stores rest value are 0
    // // int arr[10];//stores garbage value
    // int s = sizeof(arr)/sizeof(arr[0]);//length of aray
    // cout<<"length of array = "<<s<<endl;
    // for (int i = 0; i < s; i++)
    // {
    //     cout<<arr[i]<<"\t";//display the value of
    // }

    // user input
    //  int arr[10];
    // int s = sizeof(arr)/sizeof(arr[0]);
    // cout<<"length of array = "<<s<<endl;
    // cout<<"enter "<<s<<" values"<<endl;
    // for (int i = 0; i < s; i++)
    // {
    //    cin>>arr[i];
    // }
    // cout<<"stored data are = ";
    // for (int i = 0; i < s; i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
    

    //Q write a program to display only even values in given array

    // int arr[10];
    // int s = sizeof(arr)/sizeof(arr[0]);
    // cout<<"length of array = "<<s<<endl;
    // cout<<"enter "<<s<<" values"<<endl;
    // for (int i = 0; i < s; i++)
    // {
    //    cin>>arr[i];
    // }
    // cout<<"stored data are = ";
    // for (int i = 0; i < s; i++)
    // {
    //     if (arr[i]%2==0)
    //     {
    //         cout<<arr[i]<<"\t";
    //     }
        
    // }

    //Q write a program to display minimum value in an array?  

    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // int smallest=a[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (smallest>a[i])
    //     {
    //        smallest=a[i];
    //     }
    //     cout<<smallest;
    // }
    //Q write a program to display maximum value in an array?

        // int n;
        // cin>>n;
        // int a[n];
        // for (int i = 1; i < n; i++)
        // {
        //     cin>>a[i];
        // }
        // int largest=a[0];
        // for (int i = 1; i < n; i++)
        // {
        //     if (largest<a[i])
        //     {
        //        largest=a[i];
        //     }
        //     cout<<largest;
        // }
        
    //Q write a program to display the sum of the values of an array?
    

    //for each loop examaple:-

    // int a[5]= {6,7,8,9};
    // for (auto i :a)
    // {
    //     cout<<i<<" ";
    // }

    //for each loop user input examaple:-

    // int a[5]= {6,7,8,9};
    // for (auto &i :a)
    // {
    //     cin>>i;
    // }
    // for (auto i :a)
    // {
    //     cout<<i<<" ";
    // }

    //Q Given an array of length n and a target is given if the target exist in the array print yes, else print no

    
    int n,t;
    cout<<"enter the length of an array = ";
    cin>>n;
    cout<<"enter the target value = ";
    cin>>t;
    int p = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (t==arr[i])
        {
            p=1;
        }
    }
    if (p==0)
    {
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
    
    
    
}