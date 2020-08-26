class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int max = 0;
     int sum = 0;
     for (int i=0; i<nums.size(); i++)
     {
         if(nums[i] == 1)
            sum++;
         else
            sum = 0;
         if(max<sum)
            max=sum;
     }
    return max;
}
};
