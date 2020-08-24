#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>&A)
{
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(A[i].begin(),A[i].end());
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout << A[i][j];
        }
    }
    cout << endl;
}

int main()
{
    std::vector<vector<int>>m = {{ 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 } };
    rotate(m);
}
