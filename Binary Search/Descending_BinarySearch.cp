// Descending order BS

#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int element){
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(element==arr[mid]){
            return mid;
        }
        else if (element<arr[mid])
            start=mid+1;              //descending order condition
        
        else
            end=mid-1;
            
    }
    
    return -1;
    
    
}

int main() {
    //int arr[]={1,2,3,4,5,6,7,8,9,10};
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,size,1)<<endl;
    
    
    
    return 0;
}
