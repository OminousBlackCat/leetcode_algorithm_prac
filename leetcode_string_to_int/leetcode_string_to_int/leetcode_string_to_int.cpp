// leetcode_string_to_int.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <math.h>
#include <cstdint>

using namespace std;

int myAtoi(string s) {
    long long answer = 0;
    bool negtiveFlag = true;

    // currnet read state;
    //if state = 0 represent that need to read number or sign
    //if state = 1 represent that reading number
    int currentState = 0;


    for (int i = 0; i < s.length(); i++) {
        if (currentState == 0) {
            if (s[i] == ' ') {
                continue;
            }
            else if (s[i] == '-') {
                currentState = 1;
                negtiveFlag = !negtiveFlag;
            }
            else if (s[i] == '+') {
                currentState = 1;
                negtiveFlag = negtiveFlag;
            }
            else if (s[i] > 47 && s[i] < 58) {
                currentState = 1;
                answer += s[i] - 48;
            }
            else {
                break;
            }
        }
        else if (currentState == 1) {
            if (s[i] > 47 && s[i] < 58) {
                answer = answer*10;
                answer += s[i] - 48;
                if (answer > 2147483647) {
                    if (negtiveFlag) {
                        answer = 2147483647;
                    }
                    else {
                        answer = -2147483648;
                    }
                    break;
                }
            }
            else{
                break;
            }
        }
    }

    return negtiveFlag?(int)answer:-(int)answer;
}





int main()
{
    std::cout << myAtoi("-11234444444444444444");
}

