class Solution {
public:
    string toLowerCase(string str) {
        for(char & c : str) if (c >= 'A' && c <= 'Z') c += 32;        
        return (str);
    }
    
    bool isPalindrome(string s) {
        s = toLowerCase(s);
        
        int i = 0, j = s.size()-1;
        while(i < j) {
            while(i < j and not isalnum(s[i])) ++i;
            while(i < j and not isalnum(s[j])) --j;
            if(i < j and s[i] != s[j]) return false;
            i++, j--;
        }
        return true;
    }
};
