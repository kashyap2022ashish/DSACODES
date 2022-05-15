
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,4,5,6,7,8,3,4,5,2,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;

   
    return 0;
}
