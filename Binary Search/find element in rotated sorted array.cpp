//Find an element in a rotated sorted array
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int st,int en,int element)
{
    int start=st;
    int end=en;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element)
            return mid;
        else if(arr[mid]<=element)
            start=mid+1;
        else
            end=mid-1;
    }
    
    return -1;
    
}

int BsMinEle(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid-1+n)%n;
        
        if(arr[mid]<=prev&&arr[mid]<=next)
            return mid;
        else if(arr[start]<=mid)
            start=mid+1;
        else if(arr[mid]<=end)
            end=mid-1;
    }
    
    
    return -1;

    
    
}

int main()
{
    cout<<"Binary Search Codes :\n";
    int arr[]={12,15,18,2,5,6,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=BsMinEle(arr,n);
    //int result=BinarySearch(arr,n,0);
    cout<<"Index of Minimum element : "<<index<<endl;
    int result1=BinarySearch(arr,0,index-1,8);
    int result2=BinarySearch(arr, index,n-1,8);
    
    cout<<result1<<endl;
    cout<<result2<<endl;
    
    
    
    return 0;
}

