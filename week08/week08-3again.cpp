//week08-3_again.cpp 學習計畫Matrix第3題 重寫一次
//LeetCode 54. Spiral Matrix 螺旋矩陣,繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        int M = matrix.size(), N = matrix[0].size();
        vector<int> ans;
        int left = 0, right = N - 1, up = 0, down = M - 1;
        while (ans.size() < M * N) {
            for (int j = left; j <= right && ans.size() < M * N; j++) {
                ans.push_back(matrix[up][j]);
            }
            up++;
            for (int i = up; i <= down && ans.size() < M * N; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (left <= right) {
                for (int j = right; j >= left && ans.size() < M * N; j--) {
                    ans.push_back(matrix[down][j]);
                }
                down--;
            }
            // 往上（需要檢查 up <= down）
            if (up <= down) {
                for (int i = down; i >= up && ans.size() < M * N; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
