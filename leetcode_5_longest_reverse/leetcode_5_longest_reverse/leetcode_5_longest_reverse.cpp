
#include <iostream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

string get_reverse(string s) {
    int length = s.length();
    for (int i = 0; i < length / 2; i++) {
        swap(s[i], s[length - i - 1]);
    }
    return s;
}


string longestPalindrome(string s) {
    int longest = 1;
    string answer = s.substr(0, 1);

    for (int i = 0; i < s.length(); i++) {
        for (int j = s.length() - 1; j >= i; j--) {
            if (s[i] == s[j]) {
                int n = 0;
                bool flag = true;
                while (i + n < j - n) {
                    if (s[i + n] != s[j - n]) {
                        flag = false;
                        break;
                    }
                    n++;
                }
                if (flag) {
                    if (j - i + 1 > longest) {
                        longest = j - i + 1;
                        answer = s.substr(i, j - i + 1);
                    }
                }
            }
        }
    }
    return answer;
}


string longestPalindrome2(string s) {
    int longest = 1;
    string answer = s.substr(0, 1);

    for (int i = 0; i < s.length(); i++) {
        int j = 0;
        while (0) {

        }
    }

    return answer;
}





int main()
{
    string a = "123";
    cout << a.length() << endl;
    cout << a.size() << endl;
}

