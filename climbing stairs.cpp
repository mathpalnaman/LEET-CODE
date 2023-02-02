class Solution {
public:
    int climbStairs(int n) {
        int ans=1, x=1;
        while (--n) 
        {
            ans+=x;
            x=ans-x;
        }
        return ans;
    }
};
