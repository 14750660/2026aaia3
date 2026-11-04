// week09-1.cpp 學習計畫 Matrix 第2題
// 矩陣，希望把「兩條對角線」上面的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); // 矩陣的大小
        int ans = 0;
        // 迴圈裡面，要套對角線 方法1: 查兩條對角線
        for (int i=0; i<N; i++) {
            ans += mat[i][i];
        }
        for (int i=0; i<N; i++) {
            ans += mat[N-1-i][i];
        }
        if (N%2==1) ans -= mat[N/2][N/2]; // 奇數的中間，不能重複
        return ans;
    }
};
