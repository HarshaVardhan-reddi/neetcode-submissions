class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> strgroups;
      vector<vector<string>> res;
      for(auto str:strs){
        string tmpstr = str;
        sort(str.begin(), str.end());
        strgroups[str].push_back(tmpstr);
      }
      for(auto group:strgroups){
        res.push_back(group.second);
      }
      return res;
    }
};