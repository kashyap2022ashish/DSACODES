//NGR : Nearest Greater to Right

#include <iostream>
#include <stack>
#include <vector>

using namespace std;
vector <int> NGR(int arr[],int n){
    stack <int> s;
    vector <int> v;
    
    for(int i=n-1;i>=0;i--){
        
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
                
            }
            
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
                
            }
        }
        
        s.push(arr[i]);
        
    }
    
    
    
    
    reverse(v.begin(), v.end());
  
    
    
    return v;
    
}

int main()
{
    cout<<"StackCodes:\n";
    int arr[]={1,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> result;
    result=NGR(arr,n);
    for(auto&it:result){
        cout<<it<<"\t";
    }
    cout<<endl;
    return 0;
    
    
}
