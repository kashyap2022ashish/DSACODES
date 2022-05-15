// 0-1 Knapsack Recursive Solution
#include<iostream>
using namespace std;

int Knapsack0_1(int wt[],int val[],int W,int n){
    
    //Base condition
    
    if(n==0 || W==0)
        return 0;
    
    //Now move a/c to choice diagram first case where w1<=w
    
    if(wt[n-1]<=W)
        return max(val[n-1]+Knapsack0_1(wt,val,W-wt[n-1],n-1),
                   Knapsack0_1(wt, val, W, n-1));
    
    //Now move to choice diagram second case where w1>W
    
    else if(wt[n-1]>W)
        return Knapsack0_1(wt,val,W,n-1);
    
    return 0;

    
}


int main()
{
    cout<<"Dynamic Programming : \n";
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int W=7;
    int n=sizeof(wt)/sizeof(wt[0]);
    int result=Knapsack0_1(wt,val,W,n);
    cout<<result<<endl;                     //output : 9
    
    return 0;
    
}
