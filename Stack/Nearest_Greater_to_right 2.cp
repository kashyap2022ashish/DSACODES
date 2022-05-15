/*
 Nearest Greater to right
 Tips:
 
 stack empty ---->   -1
 
 s.top()>arr[i] ------>  s.top()
 
 s.top()<=arr[i]  ------->  pop()  -----i: stack empty
                                        ii: s.top() greater than arr[i]
 
 */

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    cout<<"Nearest Greater to right :\n";
    int arr[]={1,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    vector <int> v;
    stack  <int> s;
    
    for(int i=n-1;i>=0;i--){
        if (s.size()==0){
            v.push_back(-1);
        }
        
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        
        s.push(arr[i]);
    }
    
    
    reverse(v.begin(),v.end());
    
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<"\t";
    cout<<endl;
    
    
    return 0;
}
