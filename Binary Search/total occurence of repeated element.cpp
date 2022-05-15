//total occurence of repeated element in sorted array
#include <iostream>
using namespace std;

int FirstBinarySearch(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element){
            result=mid;
            end=mid-1;
        }
        else if(arr[mid]<element){
            start=mid+1;
            
            
        }
        else{
            
            end=mid-1;
        }
        
    }
    
    return result;
}
int LastBinarySearch(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element){
            result=mid;
            start=mid+1;
        }
        else if(arr[mid]<element){
            start=mid+1;
            
            
        }
        else{
            
            end=mid-1;
        }
        
    }
    
    return result;
}

int main()
{
    cout<<"Binary Search Codes :\n";
    int arr[]={10,20,30,60,60,60,60,60,99,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=FirstBinarySearch(arr,n,60);
    int last=LastBinarySearch(arr,n,60);
    
    cout<<last-first+1<<endl;
    return 0;
}
