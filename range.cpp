#include <bits/stdc++.h>
using namespace std;

float get_min(float arr[],int n)
{
    float res=arr[0];
    for(int i=1;i<n;i++)
        res = min(res ,arr[i]);
    return res;
}
float get_max(float arr[],int n)
{
    float res=arr[0];
    for(int i=1;i<n;i++)
        res=max(res,arr[i]);
    return res;
}

void rangeandcoefficent(float arr[], int n)
{
    float max = get_max(arr,n);
    float min = get_min(arr,n);
    float range = max - min;
    float coefficentOfrange = range/ (max+min);
    cout << "Range: " << range << "\n";
    cout << "coefficent: " << coefficentOfrange;
}
int main()
{
    float arr[] = {5, 19, 1, 85,1050,58};
    int n = sizeof(arr)/sizeof(arr[0]);
    rangeandcoefficent(arr, n);
    return 0;
}
