#include <iostream>
using namespace std;
int main() {
    int arr[]={3,4,5,6,0,0,0,0,7,0,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    
    int left=0;
    int right=n-1;
    
    while(left<right){
        int currentLeftElement=arr[left];
        int currentRightElement=arr[right];
        if(currentLeftElement>0)
            left++;
        if(currentRightElement==0)
            right--;
        if(currentLeftElement==0 && currentRightElement>0){
            arr[left]=currentRightElement;
            arr[right]=currentLeftElement;
            left++;
            right--;
        }
        
        
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    
    cout<<endl;
    
   
    
    
    
    return 0;
}
