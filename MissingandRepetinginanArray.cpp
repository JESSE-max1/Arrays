#include <bits/stdc++.h>
using namespace std;

vector<int>RepeatedNumber(const vector<int>&arr)
{
    long long int n = arr.size();
    long long int sum_n = (n*(n+1))/2;
    long long int sum_nsq = (n*(n+1)*(2*n+1))/6;
    long long int missing_number =0,reapiting_num = 0;

    for(int i=0;i<n;i++)
    {
        sum_n -= (long long int)(arr[i]);
        sum_nsq -= (long long int)(arr[i])*(long long int)(arr[i]);
    }

    missing_number = (sum_n + sum_nsq/sum_n)/2;
    reapiting_num = missing_number-sum_n;
    vector<int>ans;
    ans.push_back(missing_number);
    ans.push_back(reapiting_num);
    return ans;
}

int main()
{
    std::vector<int>v = {4,3,6,2,1,6,7};
    vector<int>res = RepeatedNumber(v);
    for(int x:res){
        cout << x << " ";
    }
    cout <<endl;
}
