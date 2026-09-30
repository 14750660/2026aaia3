///week04-2good.cpp 這程式是對的,用進階c++迴圈
///但在codeBlacks 出錯, warning, range-based for only available with.....
///2011年之後 只有在 -std=c++11 或 -std=gnu++11 才能用
///所以 需要改一下設定 getting compiler
///選第2個 使用c++11 ISO 國際標準的C++, 也就是-std C++11
/// 上面是 week04 的小考題目 SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    for (int i=0; i<20; i++) {
        cin >> now;
        if (now==0) break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for (int num : a) {
        if (num==now) ans++;
    }
    printf("%d\n", ans);
}

