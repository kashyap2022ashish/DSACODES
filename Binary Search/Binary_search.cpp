#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int element)
{
    int start=0;
    int end=n-1;
    int pos=-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==element){
            pos=mid;
            return pos;
        }
        else if(arr[mid]<element)
            start=mid+1;
            
        else
            end=mid-1;
            
    }
    return pos;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=BinarySearch(arr,n,5);
    
    if(result<0)
        cout<<"Element not found \n";
    else
        cout<<"Element found position :\t"<<result<<endl;

    return 0;
}
