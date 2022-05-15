#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n)
{
    int start=0;
    int end=n-1;
    
    while(start<=end)
        
    {
    
        int mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid-1+n)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
                return mid;
        else if (arr[mid]>=arr[start])  //sorted situation move to right(in unsorted array)
            start=mid+1;
        else if (arr[mid]<=arr[end])    //sorted situation move to left(in unsorted array)
            end = mid-1 ;
            
    }
    return 0;
    
}

int main()
{
    cout<<"Binary Search Codes :\n";
    int arr[]={12,15,18,2,5,6,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=BinarySearch(arr,n);
    cout<<result<<endl;
    return 0;
}

