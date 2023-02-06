class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum=0;
        while(k--)
        {
            sort(gifts.begin(),gifts.end());
            gifts[gifts.size()-1]=floor(sqrt(gifts[gifts.size()-1]));
        }
               
        for(int i=0;i<gifts.size();i++) 
        {
            sum+=gifts[i];
        }
        return sum;
        
    }
};
