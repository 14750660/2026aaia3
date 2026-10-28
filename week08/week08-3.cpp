//week08-3.cpp 學習計畫 Matix 第3題 螺旋矩陣印出來 Medium題
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int M = matrix.size(), N = matrix[0].size();
        int left = 0, right = N - 1, up = 0, down = M - 1;
        while (ans.size() < M * N) {
            // 向右移動
            for (int j = left; j <= right && ans.size() < M * N; j++) {
                ans.push_back(matrix[up][j]);
            }
            up++;

            // 向下移動
            for (int i = up; i <= down && ans.size() < M * N; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // 向左移動
            for (int j = right; j >= left && ans.size() < M * N; j--) {
                ans.push_back(matrix[down][j]);
            }
            down--;

            // 向上移動
            for (int i = down; i >= up && ans.size() < M * N; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
