// leetcode_9_isPalindrome.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    int x_temp = x;
    if (x < 0) {
        return false;
    }
    if (x == 0) {
        return true;
    }
    bool answer = false;
    long long reverse = 0;

    while (x_temp > 0) {
        reverse = (x_temp % 10) + reverse *10;
        x_temp = x_temp / 10;
    }

    if (reverse == x) {
        answer =  true;
    }
    return answer;
}




int main()
{
    std::cout << isPalindrome(10);
}


