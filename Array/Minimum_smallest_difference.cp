#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element)
            return 0;   //key is present so smallest difference is 0
        else if(element<arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    
    int first=arr[start];
    int second=arr[end];
    
    int r1=abs(first-element);
    int r2=abs(second-element);
    
    
    return min(r1,r2);
}
int main() {
    
    int arr[]={1,2,3,4,5,6,8,9,10,15,16,22};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=binarySearch(arr,size,19);
    
    cout<<"Minimum smallest difference is : "<<x<<endl;
    
    
    
    return 0;
}
