#include <bits/stdc++.h>
using namespace std;

void Rotate(int arr[],int n)
{
    int x = arr[n-1],i;
    for(int i = n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}
int main()
{
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout << "Given array is \n";
    for(int i=0;i<n; i++)
        cout << arr[i];
    cout << endl;
    Rotate(arr,n);
    cout << "Rotated array is \n";
    for (int i=0; i<n; i++)
        cout << arr[i];
    return 0;


}
