class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long  bait=x;
        //reversing the number
        long long rev=0;
        while(bait!=0){
            int digit=bait%10;
            rev = rev * 10 + digit;
            bait/=10 ;
        }
        return (rev==x);
    }
};