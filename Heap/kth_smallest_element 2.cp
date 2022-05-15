/*
 K th smallest element
 
 Tips:
 
 implemet max heap by priority_queue
 check queue size>k then pop
 in last queue top element is result
 */

#include <iostream>
#include <vector>
#include<queue>
using namespace std;

int main() {
    cout<<"Kth smallest element :\n";
    int arr[]={1,3,2,4,11,5,7,9,10};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue <int> maxh;
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    
    cout<<"k th smallest element : \t"<<maxh.top();
    cout<<endl;
    
  
    return 0;
}
