#include <bits/stdc++.h>
using namespace std;

int findduplicate(vector<int>&nums)
{

    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);
    fast = nums[0];
    while(slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{
    std::vector<int>v = {1,3,5,4,2};
    int res = findduplicate(v);
    cout << res;
}
