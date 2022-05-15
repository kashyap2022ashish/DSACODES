#include <iostream>
using namespace std;


int main() {
    
    string s="ashishkumar";
    
    auto left=0;
    auto right=s.size()-1;
    
    while(left<right){
        auto temp=s[left];
        s[left++]=s[right];
        s[right--]=temp;
    }
    
    for(auto i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    
    return 0;
}
