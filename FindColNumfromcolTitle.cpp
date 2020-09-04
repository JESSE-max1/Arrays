#include <bits/stdc++.h>
using namespace std;

int titletonumber(string s)
{
    int ans = 0;
    int k = s.length();
    for(int i=0;i<k;i++){
        ans = ans+pow(26,k-i-1)*(s[i]-'A'+1);
    }
    return ans;
}

int main()
{
    cout << titletonumber("CDA");
}
