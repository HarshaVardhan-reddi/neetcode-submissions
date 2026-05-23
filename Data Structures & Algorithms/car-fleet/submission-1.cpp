class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int, int> b){
        return a.first < b.first;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pos_speed;
        int n = position.size();
        stack<double> res;

        if(n == 0) return 0;

        for(int i=0; i < n; i++) pos_speed.push_back({position[i], speed[i]});
        
        sort(pos_speed.begin(), pos_speed.end(), cmp);

        res.push((double)(target - pos_speed[n-1].first) / pos_speed[n-1].second);
        
        for(int i = n-2; i >= 0; i--){
            double top = res.top();
            double currentposttr = (double)(target - pos_speed[i].first) / pos_speed[i].second;
            if(currentposttr > top) res.push(currentposttr);
        }
        return res.size();
    }
};