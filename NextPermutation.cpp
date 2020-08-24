#include <bits/stdc++.h>
using namespace std;

void nextpermutation(vector<int>&nums)
{
    int n = nums.size(),k,l;
    for(k = n-2;k>=0;k--){
        if(nums[k]<nums[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(nums.begin(),nums.end());
    }
    else{
        for(l=n-1;l>k;l--){
            if(nums[l] > nums[k]){
                break;
            }
        }
        swap(nums[k],nums[l]);
        reverse(nums.begin()+k+1,nums.end());
    }
}

int main()
{
    std::vector<int>v = {1 ,3 ,5 ,4, 2};
    nextpermutation(v);
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;
}
