// 0-1 Knapsack Top Down Approach plus memozised code
#include<iostream>
#include<cstring>
using namespace std;

int static t[102][1002];

/*

int knapsack(int wt[],int val[],int w,int n){
    if(n==0 || w==0)
        return 0;
    if(t[n][w]!=-1)
        return t[n][w];
    else if(wt[n-1]<=w)
        return t[n][w]=max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1),knapsack(wt, val, w, n-1));
    
    else if(wt[n-1]>w)
        return t[n][w]=knapsack(wt, val, w, n-1);
    
    
    
    return 0;
}
 */

int DpKnapsack(int wt[],int val[],int w,int n)
{
    //Base condition
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }
    
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                cout<<t[i][j]<<"\t";
            }
            cout<<endl;
        }
    
        cout<<endl;
    
  
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            /*
            if(t[i][j]!=-1)
                return t[i][j];
             */
            
            if(wt[i-1]<=j)
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],
                                   t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
            
        }
    }
    
    cout<<"result matrix :\n";
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
        return t[n][w];
    
}


int main()
{
    memset(t,-1,sizeof(t));
    cout<<"Dynamic Programming : \n";
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int w=7;
    int n=sizeof(wt)/sizeof(wt[0]);
    /*
    int result=knapsack(wt, val, w, n);
    cout<<result<<endl;
     */
    int result2=DpKnapsack(wt, val, w, n);
    cout<<result2<<endl;
    return 0;
    
}
