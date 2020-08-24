#include <bits/stdc++.h>
using namespace std;

int maxsubarraySum(int arr[],int n)
{
    int max_so_far = arr[0];
    int current_max = arr[0];
    for(int i=1;i<n;i++)
    {
        current_max = max(arr[i],current_max+arr[i]);
        max_so_far  = max(max_so_far,current_max);
    }
    return max_so_far;
}
int main()
{
    int A[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(A)/sizeof(int);
    int max_sum = maxsubarraySum(A,n);
    cout << max_sum;
    return 0;
}
