#include <bits/stdc++.h>
using namespace std;

int countOccurance(int arr[], int n , int x)
{
    int res = 0;
    for(int i=0;i<n;i++)
    {
        if(x == arr[i])
            res++;
    }
     return res;
}
int main()
{
    int arr[] ={1,2,2,2,2,2,5,6,8};
    int n = sizeof(arr)/sizeof(int);
    int x = 2;
    cout << countOccurance(arr,n,x);
    return 0;
}
