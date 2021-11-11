// leetcode_115_numDistinct_dp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//static unsigned int table[1024][1024];
/*
int numDistinct(string s, string t) {
    for (int i = 0; i < t.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            table[i][j] = 0;
        }
    }
    // 初始化表格第一行与第一列
    // 初始化第一行
    for (int j = 0; j < s.size(); j++) {
        if (s[j] == t[0]) {
            if (j != 0) {
                table[0][j] = table[0][j - 1] + 1;
            }
            else
            {
                table[0][j] = 1;
            }

        }
        else {
            if (j != 0) {
                table[0][j] = table[0][j - 1];
            }
            else {
                table[0][j] = 0;
            }

        }
    }
    // 初始化第一列
    // 第一列除了第一个元素可能是1，其他一定是0 不需要初始化
    for (int i = 1; i < t.size(); i++) {
        for (int j = 1; j < s.size(); j++) {
            if (s[j] == t[i]) {
                table[i][j] = table[i - 1][j - 1] + table[i][j - 1];
            }
            else {
                table[i][j] = table[i][j - 1];
            }
        }
    }

    return table[t.size() - 1][s.size() - 1];
}


*/


int main()
{
    string a = "asd";
    std::cout << a.length();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
