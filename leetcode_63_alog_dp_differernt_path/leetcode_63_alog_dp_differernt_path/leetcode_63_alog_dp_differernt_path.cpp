// leetcode_63_alog_dp_differernt_path.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
    vector<vector<int>> answer = obstacleGrid;
    if (obstacleGrid[0][0] != 1) {
        answer[0][0] = 1;
    }
    else {
        return 0;
    }

    bool is_x_have_obs = false;
    for (int x = 1; x < obstacleGrid[0].size(); x++) {
        if (!is_x_have_obs) {
            if (obstacleGrid[0][x] != 1) {
                answer[0][x] = 1;
            }
            else {
                answer[0][x] = 0;
                is_x_have_obs = true;
            }
        }
        else {
            answer[0][x] = 0;
        }
    }
    bool is_y_have_obs = false;
    for (int y = 1; y < obstacleGrid.size(); y++) {
        if (!is_y_have_obs) {
            if (obstacleGrid[y][0] != 1) {
                answer[y][0] = 1;
            }
            else {
                answer[y][0] = 0;
                is_y_have_obs = true;
            }
        }
        else {
            answer[y][0] = 0;
        }
    }

    for (int x = 1; x < obstacleGrid[0].size(); x++) {
        for (int y = 1; y < obstacleGrid.size(); y++) {
            if (obstacleGrid[y][x] != 1) {
                answer[y][x] = answer[y-1][x] + answer[y][x - 1];
            }
            else {
                answer[y][x] = 0;
            }
        }
    }

    return answer[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1];
}



int main()
{

    vector<vector<int>> a = { {0,0},{1,1},{0,0} };
    std::cout << uniquePathsWithObstacles(a);
}
