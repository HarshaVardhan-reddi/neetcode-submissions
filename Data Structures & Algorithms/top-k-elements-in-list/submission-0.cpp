class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        vector<int> res;
        unordered_map<int, int> freq;
        for(auto ele:nums) freq[ele]++;
        for(auto numfreq: freq){
            pair<int, int> p;
            p.first = numfreq.second;
            p.second = numfreq.first;
            pq.push(p);
            if(pq.size() > k) pq.pop();
        }
        while(!pq.empty()){
            pair<int, int> p = pq.top();
            res.push_back(p.second);
            pq.pop();
        }
        return res;
    }
};
