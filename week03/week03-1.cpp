//week03-1.cpp 學習計畫 Basic 第8題
// LeetCode 1822. Sign of the Product of an Array
// 給你C++ 的陣列 nums,請你把所有數乘起來 正的1 負的-1 剩下都是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N = nums.size();
        int neg = 0;
        for (int num : nums) {
            if (num==0) return 0;
            if (num<0) neg++;
        }
        if (neg % 2 == 0) return 1;
        return -1;
        // int ans = 1;
        //for (int i=0; i<N; i++) {
        //    ans = ans * nums[i];
        //}
        //if (ans>0) return 1;
        //if (ans<0)return -1;
        //return 0;

    }
};
