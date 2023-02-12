#define ll long long 
class Solution {
public:
    ll findvalue(int a, int b)
    {
        int var1=1;
        int var2=b;
        while(var2>0)
        { 
            var2=var2/10;
            var1=var1*10;
        }
        return (ll)a*var1+(ll)b;
    }
    long long findTheArrayConcVal (vector<int>& nums) {
        ll sum=0, temp; 
        int x=0;
        int y=nums.size()-1;
        while(x<y) 
        { 
            temp=findvalue (nums[x], nums[y]);
            sum+=temp; 
            x++; 
            y--;
        } 
        if(x==y)
        {
            sum +=nums[x];
        }
    return sum;
    }
};
