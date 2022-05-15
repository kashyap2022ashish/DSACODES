//kth Largest element : 2,10,4,3,20,15
#include<iostream>
#include<queue>
using namespace::std;

int KLargestElement(int arr[],int n,int k){
    priority_queue <int,vector<int>,greater<int>> minH;  //min Heap
    for(int i=0;i<n;i++){
        minH.push(arr[i]);
        if(minH.size()>k){
            minH.pop();
        }
    }
    return minH.top();      // return 3rd largest element i.e 10
}
int main(){
    cout<<"Heap"<<endl;
    int k=3;
    int arr[]={2,10,4,3,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=KLargestElement(arr,n,k);
    cout<<"K th Largest number : "<<res<<endl;
    return 0;
}


