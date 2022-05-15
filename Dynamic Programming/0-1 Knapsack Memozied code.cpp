// 0-1 Knapsack Memozied code
#include<iostream>
#include<cstring>
using namespace std;

int static t[102][1002];
int Knapsack0_1(int wt[],int val[],int W,int n){
    memset(t,-1,sizeof(t));
    //Base condition
    
    if(n==0 || W==0)
        return 0;
    if(t[n][W]!=-1)
        return t[n][W];
    
    else if(wt[n-1]<=W)
        return t[n][W]=max(val[n-1]+Knapsack0_1(wt,val,W-wt[n-1],n-1),Knapsack0_1(wt,val,W,n-1));
    
    else if(wt[n-1]>W)
        return t[n][W]=Knapsack0_1(wt,val, W, n-1);
    
    //return 0;
    return t[n][W];

    
}


int main()
{
    cout<<"Dynamic Programming : \n";
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int W=7;
    int n=sizeof(wt)/sizeof(wt[0]);
    int result=Knapsack0_1(wt,val,W,n);
    cout<<result<<endl;
    
    return 0;
    
}
