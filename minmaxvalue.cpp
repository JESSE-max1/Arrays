#include <bits/stdc++.h>
using namespace std;

int get_min(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
        res=min(res,arr[i]);
    return res;
}
int get_max(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
        res=max(res,arr[i]);
    return res;
}
int main()
{
    int arr[] = {5, 19, 1, 85,1050,58};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Min of array: " << get_min(arr,n) << "\n";
    cout << "Max of array: " << get_max(arr,n);
    return 0;
}
