class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = INT_MIN, kmin = INT_MAX;
        for(auto pile:piles){
            maxpile = max(maxpile, pile);
        }
        int lft = 1, rt = maxpile;
        while(lft <= rt){
            int mid = (lft + rt) / 2, totalhrs = 0;
            for(auto pile:piles){
                totalhrs += (pile + mid - 1) / mid;
            }
            if(totalhrs > h){
                lft = mid + 1;
            }else{
                kmin = min(kmin, mid);
                rt = mid - 1;
            }
        }
        return kmin;
    }
};