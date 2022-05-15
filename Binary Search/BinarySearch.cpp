#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            result=mid+1;
            return result;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else
            end=mid-1;
    }
    
    return result;
    
}

int main()
{
    cout<<"Binary Search Codes :\n";
    int arr[]={10,20,30,35,50,65,70,78,99,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=BinarySearch(arr,n,99);
    cout<<result<<endl;
    return 0;
}
