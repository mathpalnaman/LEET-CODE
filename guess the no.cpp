/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n)
    {
        long long int l=1,h=n,num;
        while(guess(num)!=0)
        {
            num=(l+h)/2;
            if(guess(num)==1)
            {
                l=num+1;
            }
            else if(guess(num)==-1)
            {
                h=num-1;
            }  
        }
        return num; 
    }

};
