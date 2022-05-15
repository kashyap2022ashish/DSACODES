//Return k Largest element : 2,10,4,3,20,15
#include<iostream>
#include<queue>
using namespace::std;
void KLargestElement(int arr[],int n,int k){
    priority_queue <int,vector<int>,greater<int>> minH;  //min Heap
    for(int i=0;i<n;i++){
        minH.push(arr[i]);
        if(minH.size()>k){
            minH.pop();
        }
    }
    while(minH.size()>0){
        cout<<minH.top()<<"\t";      //output : 10 15 20
        minH.pop();
    }
    cout<<endl;
}
int main(){
    cout<<"K Largest Element using Heap :"<<endl;
    int k=3;
    int arr[]={2,10,4,3,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    KLargestElement(arr,n,k);
    return 0;
}


