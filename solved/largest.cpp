#include<iostream>
using namespace std;
int main()
{
    int n,lar;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter elements into the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //actual logic of the program
    lar=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    //return lar;
    cout<<"largest element in the array is"<<lar;

}

// SAMPLE OUTPUT
// enter the size of the array 4
// enter elements into the array 8 67 54 32
// largest element in the array is 67

//TIME COMPLEXITY :- 0(N)