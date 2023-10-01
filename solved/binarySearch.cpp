#include<iostream>
using namespace std;

 int binarysearch(int arr[], int n, int k) {
        int beg=0;
        int end=n-1;
        int mid,i;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(arr[mid]==k)
               return mid;
            else if(arr[mid]>k)
                end=mid-1;
            else
                beg=mid+1;
               
        }
            return -1;
            
    }
int main()
{
    int n,k;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements into the array";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter the element to be searched";
    cin>>k;
    cout<<"the element is present at position" << binarysearch(arr,n,k);  
}