import string

class Solution:
    def isPalindrome(self, s: str) -> bool:
        if not s: return True
        
        allow = set(string.ascii_lowercase + string.digits)
        s = [c for c in s.lower() if c in allow]
        
        i, j = 0, len(s)-1        
        while i < j:
            if s[i] != s[j]: return False
            i += 1
            j -= 1
            
        return True
