class Solution {
public:
    int reverse(int x) {
      int Revans=0;

      while(x!=0){
        int LastDigit=x%10;
        if(Revans > INT_MAX/10 || Revans < INT_MIN/10) return 0;
         Revans=Revans*10+LastDigit;
         x=x/10;
      }

      return Revans;
    }
};
