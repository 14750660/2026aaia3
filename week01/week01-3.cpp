///week01-3.cpp 學習計畫 Basic 第3週
/// LeetCode 28. Find the Index of the First Occurrence in a String
// 大海撈針(在一大堆稻草堆裡找一根針)
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的程式題目 都可以用 for(迴圈) if(判斷) 函式呼叫
        int N1 = haystack.length(), N2 = needle.length();
        for (int i=0; i<= N1-N2 ; i++) {
            if ( haystack.substr(i,N2) == needle ) return i;
        }
        return -1; // 找不到
    }
};
