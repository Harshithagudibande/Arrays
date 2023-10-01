#include<iostream>
using namespace std;
int main()
{
    int n,ele,pos;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[100];
    cout<<"enter the elements into the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position at which element is to be deleted";
    cin>>pos;

    //actual logic
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    //displaying the array after insertion
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<"\t";
    }
}  

//sample output obtained on VS
// enter the size of the array 4
// enter the elements into the array 1 2 3 4
// enter the position at which element is to be deleted 1
// 1       3       4