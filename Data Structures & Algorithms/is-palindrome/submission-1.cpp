class Solution {
public:
    bool isAlphaNumeric(char c){
      return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }
    char normalize(char c){
      char nc;
      nc = int(c) >= 97 ? c - 32 : c;
      return nc;
    }

    bool isPalindrome(string s) {
      int start = 0, end = s.size() - 1;
      while(start < end){
        
        if(isAlphaNumeric(s[start]) && isAlphaNumeric(s[end]) && normalize(s[start]) != normalize(s[end])) return false;
        else if(!isAlphaNumeric(s[start])) start++;
        else if(!isAlphaNumeric(s[end])) end--;
        else {start++; end--;}
      }
      return true;     
    }
};