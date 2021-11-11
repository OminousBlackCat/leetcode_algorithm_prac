#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert(string s, int numRows) {
    vector<char> answer_temp;
    int maxPoint;
    if (numRows > 1) {
        maxPoint = s.length() / (2 * numRows - 2) + 1;
    }
    else {
        return s;
    }


    for (int i = 0; i < numRows; i++) {
        if (i != numRows - 1) {
            for (int j = 0; j <= maxPoint; j++) {
                if (2 * j * numRows - 2 * j + i  < s.length()) {
                    if (i != 0) {
                        if (2 * j * numRows - 2 * j - i > 0) {
                            answer_temp.push_back(s[2 * j * numRows - 2 * j - i]);
                        }
                        answer_temp.push_back(s[2 * j * numRows - 2 * j + i]);
                    }
                    else {
                        answer_temp.push_back(s[2 * j * numRows - 2 * j + i] );
                    }
                }
                else {
                    if (2 * j * numRows - 2 * j - i > 0 && 2 * j * numRows - 2 * j - i < s.length()) {
                        answer_temp.push_back(s[2 * j * numRows - 2 * j - i]);
                    }
                }
            }
        }
        else {
            for (int j = 0; j < maxPoint; j++) {
                if (2 * j * numRows - 2 * j + i  < s.length()) {
                    answer_temp.push_back(s[2 * j * numRows - 2 * j + i]);
                }

            }

        }
    }
    return string(answer_temp.begin(), answer_temp.end());
}



int main()
{
    std::cout << convert("abcde", 4);
}

