#include<iostream>
using namespace std;
int main()
{
    int n,ele,pos;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[100];
    cout<<"enter the elements present in the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be inserted";
    cin>>ele;
    cout<<"enter the position at which element is to be inserted";
    cin>>pos;

    //actual logic of the code
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;

    //displaying the array after insertion
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
