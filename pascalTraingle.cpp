#include <bits/stdc++.h>
using namespace std;
 //for printing pascal
vector<vector<int>>generate(int nRows)
{
    vector<vector<int>>r(nRows);
    for(int i=0;i<nRows;i++)
    {
        r[i].resize(i+1);
        r[i][0] = r[i][i] = 1;
        for(int j=1;j<i;j++){
            r[i][j] = r[i-1][j-1]+r[i-1][j];
        }
    }
    return r;
}

//for getting nth row in pascal
void generateNthrow(int n)
{
    int prev = 1;
    cout << prev;
    for(int i=1;i<=n;i++)
    {
        int curr = (prev*(n-i+1))/i;
        cout << "," << curr;
        prev = curr;
    }
}
int main()
{
    int n=5;
    printpascal(n);
    generateNthrow(n);
    return 0;
}
