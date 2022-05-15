// 0-1 Knapsack Top-Down Code
#include<iostream>
using namespace std;

int knapsack(int wt[],int val[],int w,int n)
{
    int t[n+1][w+1];
    //Base condition
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }
    
    //Choice Diagram
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(wt[i-1]<=j)
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],
                                   t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
            
        }
    }
        return t[n][w];     //answer exist in last column of matrix
    
}


int main()
{
    cout<<"Dynamic Programming : \n";
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int w=7;
    int n=sizeof(wt)/sizeof(wt[0]);
    int result=knapsack(wt, val, w, n);
    cout<<result<<endl;
    return 0;
    
}

