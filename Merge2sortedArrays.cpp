#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
    cout << "\n";
}

void merge(int A[],int B[],int m,int n)
{
    for(int i=0;i<m;i++){
        if(A[i]>B[0]){
            swap(A[i],B[0]);
            int first = B[0];
            int k;
            for(k=1;k<n && B[k]<first;k++){
                B[k-1] = B[k];
            }
            B[k-1] = first;
        }
    }
}

int main()
{
    int A[] = {1,4,5,6,8};
    int B[] = {2,7,9};
    int n = sizeof(A)/sizeof(int);
    int m = sizeof(B)/sizeof(int);
    merge(A,B,n,m);
    printarray(A,n);
    printarray(B,m);
    return 0;
}
