#include <bits/stdc++.h>
using namespace std;

void reArrange(int arr[],int n)
{
    int j=0;
    for(int i=0; i<n;i++){
        if(arr[i] == 0){
            if(i != j)
                swap(arr[i], arr[j]);
        j++;
        }
    }
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[]={0,2,0,4,5,6,0,8,9};
    int n = sizeof(arr)/sizeof(int);
    reArrange(arr,n);
    printArray(arr,n);
    return 0;
}
