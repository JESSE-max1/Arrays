class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums[high]){
                if(target > nums[mid] || target <= nums[high])
                    low = mid+1;
                else
                    high = mid;
            }else{
                if(target >nums[mid] && target <= nums[high])
                    low = mid+1;
                else
                    high =mid;
            }
        }
        if((low == high) && target != nums[low]) return -1;
        return low;

    }
};
