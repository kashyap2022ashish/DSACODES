#include <iostream>
using namespace std;


int main() {
    cout<<"Lets Do It : \n";
    
    int arr[]={0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=n-1;
    
    for(int i=0;i<n;i++){
        int currentleftelement=arr[left];
        int currentrightelement=arr[right];
        
        if(currentleftelement==1)
            left++;
        if(currentrightelement==0)
            right--;
        
        if(currentleftelement==0 && currentrightelement==1){
            arr[left]=currentrightelement;
            arr[right]=currentleftelement;
            left++;
            right--;
        }
        
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    
    
    
    
    return 0;
}
