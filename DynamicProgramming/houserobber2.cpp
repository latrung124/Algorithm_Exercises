#include <bits/stdc++.h>

using namespace std;

std::vector<int> nums_ = {};

class Solution {
public:
    int rob(vector<int>& nums) {
        int rob_houses_1 = 0;
        int rob_houses_2 = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            int temp_rob_houses_1 = std::max(rob_houses_1, rob_houses_2);
            int temp_rob_house_2 = rob_houses_1 + nums[i];
            rob_houses_1 = temp_rob_houses_1;
            rob_houses_2 = temp_rob_house_2;
        }
        int max_rob_first_house = std::max(rob_houses_1, rob_houses_2);
        //ignore the first house
        rob_houses_1 = 0;
        rob_houses_2 = 0;
        for (int i = 1; i < nums.size(); ++i) {
            int temp_rob_houses_1 = std::max(rob_houses_1, rob_houses_2);
            int temp_rob_houses_2 = rob_houses_1 + nums[i];
            rob_houses_1 = temp_rob_houses_1;
            rob_houses_2 = temp_rob_houses_2;
        }
        int max_rob_last_house = std::max(rob_houses_1, rob_houses_2);
        return std::max(max_rob_first_house, max_rob_last_house);
    }
};

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    if (freopen("/home/avn/cpp_project/Algorithm_Exercises/input.txt", "r", stdin) == nullptr) {
        std::cout << "failed" << std::endl;
        return 0;
    }
    freopen("/home/avn/cpp_project/Algorithm_Exercises/output.txt", "w", stdout);
    Solution s;
    std::vector<int> nums = {1,2,3};
    std::cout << s.rob(nums) << "\n";
    return 0;
}