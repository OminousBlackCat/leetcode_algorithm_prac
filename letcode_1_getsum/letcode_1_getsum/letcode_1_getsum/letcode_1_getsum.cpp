#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;



vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> temp = nums;
	sort(temp.begin(), temp.end());
	vector<int> answer;
	vector<int> answer_index;

	int end_index = 0;
	for (int i = temp.size()-1; i >= 0; i--) {
		bool end_flag = false;
		for (int j = i; j >= end_index; j--) {
			if (temp[i] + temp[j] < target) {
				end_index = j;
				break;
			}
			if (temp[i] + temp[j] == target) {
				answer.push_back(temp[i]);
				answer.push_back(temp[j]);
				end_flag = true;
				break;
			}

		}
		if (end_flag) {
			break;
		}
	}

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == answer[0] || nums[i] == answer[1]) {
			answer_index.push_back(i);
		}
	}

	
	return answer_index;
}

int main() {
	vector<int> test;
	test.push_back(3);
	test.push_back(3);
	vector<int> answer =  twoSum(test, 6);
	cout << endl;
}

