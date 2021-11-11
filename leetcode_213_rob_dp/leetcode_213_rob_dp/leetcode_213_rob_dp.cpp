// leetcode_213_rob_dp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;


int rob_temp(vector<int>& nums) {
    vector<int> answer = nums;
    if (nums.size() <= 1) {
        return answer[0];
    }
    else {
        if (nums[1] < nums[0]) {
            answer[1] = nums[0];
        }
    }

    if (nums.size() > 2) {
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] + answer[i - 2] >= answer[i - 1]) {
                answer[i] = nums[i] + answer[i - 2];
            }
            else {
                answer[i] = answer[i - 1];
            }
        }
    }

    return answer[nums.size() - 1];
}


int rob(vector<int>& nums) {
    vector<int>::const_iterator start = nums.begin();
    vector<int>::const_iterator beforeEnd = nums.end() - 1;
    vector<int>::const_iterator next = nums.begin() + 1;
    vector<int>::const_iterator ending = nums.end();

    if (nums.size() == 1) {
        return nums[0];
    }
    else {
        vector<int> temp_A(start, beforeEnd);
        vector<int> temp_B(next, ending);
        return rob_temp(temp_A) >= rob_temp(temp_B) ? rob_temp(temp_A) : rob_temp(temp_B);
    }
    return nums[0];
}






int main()
{
    vector<int> a = { 1,2,3 };
    std::cout << rob(a);
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
