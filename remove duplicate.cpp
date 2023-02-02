class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for (int n : nums) 
        {
            if (j-1<0 || nums[j-1]!=n) nums[j++]=n;
        }
        return j;
    }
};
