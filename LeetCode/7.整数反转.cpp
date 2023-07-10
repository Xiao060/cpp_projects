/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include<cmath>

class Solution {
    
    public:
        int reverse(int x) {
            int sym = 1;
            long s = 0;
            int ys;
            if (x < 0){
                sym = -1;
                x = -x;
            }

            while (x){
                ys = x % 10;
                s = s * 10 + ys;
                x = x / 10;
            }
            
            if (s > pow(2, 31)-1)
                return 0;
            else
                return sym * s;
        }
};
// @lc code=end



