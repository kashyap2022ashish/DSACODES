#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,2,2,3,4,5,5,6,6,7,8,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    if (n == 0 || n == 1)
      return n;

    int temp[n];

    int j = 0;
    int i;
    for (i = 0; i < n - 1; i++)
      if (arr[i] != arr[i + 1])
        temp[j++] = arr[i];
    temp[j++] = arr[n - 1];

    for (i = 0; i < j; i++)
      arr[i] = temp[i];
    
    
    for(int i=0;i<j;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
    
    
    
    
    
    return 0;
}
