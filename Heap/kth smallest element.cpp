//kth smallest element : 2,10,4,3,20,15
#include<iostream>
#include<queue>
using namespace::std;

int KSmallestElement(int arr[],int n,int k){
    priority_queue<int> maxH;
    for(int i=0;i<n;i++){
        maxH.push(arr[i]);
        if(maxH.size()>k){
            maxH.pop();
        }
    }
    return maxH.top();
}
int main(){
    cout<<"Heap"<<endl;
    int k=3;
    int arr[]={2,10,4,3,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=KSmallestElement(arr,n,k);
    cout<<"K th smallest number : "<<res<<endl;
    return 0;
}


