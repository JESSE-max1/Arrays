#include <bits/stdc++.h>
using namespace std;

struct Interval{
int s,e;
};

bool mycomp(Interval a,Interval b)
{
    return a.s <b.s;
}

void mergeintervals(Interval arr[],int n)
{
    sort(arr,arr+n,mycomp);
    int index = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[index].e >= arr[i].s)
        {
            arr[index].e = max(arr[index].e,arr[i].e);
            arr[index].s = min(arr[index].s,arr[i].s);
        }
        else
            arr[++index] = arr[i];
    }
    for(int i=0;i<=index;i++){
        cout << "[" << arr[i].s <<"," << arr[i].e << "]";
    }
}

int main()
{
    Interval arr[] = {{6,8},{1,9} ,{2,4},{4,7},{10,11}};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeintervals(arr,n);
    return 0;
}
