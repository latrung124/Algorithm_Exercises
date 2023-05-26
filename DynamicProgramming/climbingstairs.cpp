#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int way_to_first = 1;
        int way_to_second = 2;
        int temp = 0;
        for (int i = 2; i < n; ++i) {
            temp = way_to_second;
            way_to_second = way_to_first + way_to_second;
            way_to_first = temp;
        }
        return way_to_second;
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
    std::cout << s.climbStairs(4) << "\n";
    return 0;
}