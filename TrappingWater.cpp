class Solution {
public:
    int trap(int A[], int n) {
        int left=0; int right=n-1;
        int res=0;
        int maxleft=0, maxright=0;
        while(left<=right){
            if(A[left]<=A[right]){
                if(A[left]>=maxleft) maxleft=A[left];
                else res+=maxleft-A[left];
                left++;
            }
            else{
                if(A[right]>=maxright) maxright= A[right];
                else res+=maxright-A[right];
                right--;
            }
        }
        return res;
    }
};

//
class Solution {
public:
    int trap(vector<int>& height) {
        if (not height.size()) return 0;
        int l = 0;
        int r = height.size() - 1;
        int left_max = 0, right_max = 0;
        int ret = 0;

        while ( l < r ) {
            if (height[l] < height[r]) {            // right will trap
                left_max = max(left_max, height[l]);
                ret += left_max - height[l];
                l++;
            }
            else {                                  // left will trap
                right_max = max(right_max, height[r]);
                ret += right_max - height[r];
                r--;
            }
        }
        return ret;
    }
};
