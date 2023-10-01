//In this I am using the naive approach to solve the problem.
//The second largest element in the array is to be found out

#include<iostream>
using namespace std;
int largestnum(int arr[],int n)
{
    int lar=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
            lar=arr[i];
    }
    return lar;
}

int main()
{
    int n,largest,sl=0;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements into the array";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    largest=largestnum(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            if(arr[i]>sl)
                sl=arr[i];
        }
    }
    cout<<"the second largest number is "<<sl; 
}

// enter the size of the array 5
// enter the elements into the array 1 7 56 43 21
// the second largest number is 43
// PS C:\Users\Admin\Desktop\DSA Tracking\DAY2> .\a.exe              
// enter the size of the array 3
// enter the elements into the array 10 10 10
// the second largest number is 0
// 1) Naive Approach:
// In this approach, we find the 2nd largest element in the array, by ignoring the largest element. It requires two traversals of the array
// Time Complexity: O(n)


//effecient sol


int print2largest(int arr[], int n) {
	    // code here
	    int lar,slar=-1;
	    lar=arr[0];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>lar)
	        {
	            slar=lar;
	            lar=arr[i];
	          
	        }
	        else if(arr[i]==lar)
	        {
	           continue; 
	        }
	        else
	        {
	            if(arr[i]>slar)
	                slar=arr[i];
	        }
	    }
	    return slar;
	}