class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int maxlen = 0, start=0;
    unordered_map<char, int> char_index;
    for(int i=0; i < s.size(); i++){
      if(char_index.find(s[i]) != char_index.end() && char_index[s[i]] >= start){
        start = char_index[s[i]] + 1;
      }
      char_index[s[i]] = i;
      maxlen = max(maxlen, (i - start) + 1);
    }
    return maxlen;
  }
};