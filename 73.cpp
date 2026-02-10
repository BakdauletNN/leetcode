class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int row = m.size();
        int col = m[0].size();
        bool rowzero = false;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (m[i][j] == 0) {
                    m[0][j] = 0;
                    if (i > 0) {
                        m[i][0] = 0;
                    } else {
                        rowzero = true;
                    }
                }
            }
        }
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (m[0][j] == 0 || m[i][0] == 0) {
                    m[i][j] = 0;
                }
            }
        }
        if (m[0][0] == 0) {
            for (int i = 0; i < row; i++) {
                m[i][0] = 0;
            }
        }
        if (rowzero) {
            for (int j = 0; j < col; j++) {
                m[0][j] = 0;
            }
        }
    }
};
