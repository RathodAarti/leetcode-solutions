class Solution {
public:
    bool is_palindrome(string s , int i , int j  ){
        if( j >= s.length() ) return false ;
        while(i < j ){
            if(s[i] != s[j] ) return false ;
            i ++ ; j-- ;
        }
        return true ;
    }
    string longestPalindrome(string s) {
        int n = s.length() ;

        int lower = 1 , upper = n ;
        pair<int,int>ans = {0,1} ;
        while(lower <= upper ){
            int mid = (upper + lower ) /2 ;
            bool found = false ;
            for(int i = 0 ; i < n ; i++ ){
                if(is_palindrome(s,i,i+mid-2) ) {
                    found = true ;
                    ans = {i,mid-1} ;
                    break ;
                }
            }
            for(int i = 0 ; i < n ; i++ ){
                if(is_palindrome(s,i,i+mid-1) ) {
                    found = true ;
                    ans = {i,mid} ;
                    break ;
                }
            }
            if(found ) lower = mid+1 ;
            else upper = mid-1 ;
        }
        return s.substr(ans.first, ans.second);
    }
};
