// leetcode_32_longestParentheses_stack.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int longestValidPatentheses(string s) {
    vector<int> stack;
    vector<int> produce;
    int answer = 0;
    int previous_success = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            stack.push_back(i);         
        }
        else{
            if (stack.size() <= 0) {
                previous_success = i + 1;
            }
            else {
                produce.push_back(stack[stack.size() - 1]);
                produce.push_back(i);
                stack.pop_back();
                if (stack.size() <= 0) {
                    answer = max(answer, i - previous_success + 1);
                }
                else {
                    answer = max(answer, i - stack[stack.size() - 1]);
                }
            }
        }
    }

    return answer;
}

int main()
{
    std::cout << longestValidPatentheses(")(())))(())())");
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
