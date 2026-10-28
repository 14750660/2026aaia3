//week08-1.cpp 學習計畫 Matrix 第1題 最有錢的
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (vector<int> a : accounts ) {
            int now = 0;
            for ( int num : a ) {
                now += num;
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
