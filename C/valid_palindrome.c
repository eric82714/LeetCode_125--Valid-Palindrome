char * toLowerCase(char * str) {
    for(int i = 0; i < strlen(str); i++) { 
        if (*(str+i) >= 'A' && *(str+i) <= 'Z') *(str+i) += 32;  
    }
    return (str);
}

bool isPalindrome(char * s){
    s = toLowerCase(s);
        
    int i = 0, j = strlen(s)-1;
    while(i < j) {
        while(i < j && !isalnum(s[i])) ++i;
        while(i < j && !isalnum(s[j])) --j;
        if(i < j && s[i] != s[j]) return false;
        i++, j--;
    }
    return true;
}
