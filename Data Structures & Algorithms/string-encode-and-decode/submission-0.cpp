class Solution {
public:
  bool isNumeric(char c){
    return c >= 48 && c <= 57;
  }
  string encode(vector<string>& strs) {
    int size = strs.size();
    string res = "";
    for(int i = 0; i < size; i++){
      res += to_string(strs[i].size()) + "#";
      res += strs[i];
    }
    return res;
  }

  vector<string> decode(string s) {
    vector<string> res;
    int nextlength = 0, i = 0;
    while(i < s.size()){
      if(isNumeric(s[i])){
        nextlength = nextlength * 10 + (s[i] - '0');
        i++;
      } else if(s[i] == '#'){
        i++;
        res.push_back(s.substr(i, nextlength));
        i = i+nextlength;
        nextlength = 0;
      }else{
        i++;
      }
    }
    return res;
  }
};