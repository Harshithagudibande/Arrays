#include<iostream>
#include <math.h>
using namespace std;
int linSearch(int arr[],int n,int X)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==X)
            return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4},n,X;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the element to be searched";
    cin>>X;
    cout<< linSearch(arr,n,X);

}