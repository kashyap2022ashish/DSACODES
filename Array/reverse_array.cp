#include <iostream>
using namespace std;

int main() {
    
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    int left=0;
    int right=size-1;
    while(left<right){
        int temp=a[left];
        a[left++]=a[right];
        a[right--]=temp;
    }
    
    for(int i=0;i<size;i++)
    cout<<a[i]<<endl;
    
    

    
    return 0;
}
