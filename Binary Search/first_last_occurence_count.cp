#include <iostream>
using namespace std;

int First_BinarySearch(int arr[],int n,int element)
{
    int start=0;
    int end=n-1;
    int pos=-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==element){
            pos=mid;
            end=mid-1;
        }
        else if(arr[mid]<element){
            start=mid+1;
        }
            
            
        else
            end=mid-1;
            
    }
    return pos;
}
int Last_BinarySearch(int arr[],int n,int element)
{
    int start=0;
    int end=n-1;
    int pos=-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==element){
            pos=mid;
            start=mid+1;
        }
        else if(arr[mid]<element)
            start=mid+1;
            
        else
            end=mid-1;
            
    }
    return pos;
}

int main() {
    int arr[]={1,2,3,5,5,5,5,5,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=First_BinarySearch(arr,n,5);
    int last=Last_BinarySearch(arr,n,5);
    cout<<"First :\t"<<first<<endl;
    cout<<"Last :\t"<<last<<endl;
    
    cout<<last-first+1<<endl;

    return 0;
}
