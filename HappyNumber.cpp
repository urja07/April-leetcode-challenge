class Solution {
public:
    int ssum(int n)
    {   int squaresum=0,rem=0;
        while(n!=0){
            rem=n%10;
            squaresum=squaresum+rem*rem;
            n=n/10;
        }
     return squaresum;
    }
    bool isHappy(int n) {
        int slow,fast;
        slow=fast=n;
        do
        {
            slow=ssum(slow);
            fast=ssum(ssum(fast));
        }while(slow!=fast);
        if(slow==1)
            return true;
        return false;
    }
};
