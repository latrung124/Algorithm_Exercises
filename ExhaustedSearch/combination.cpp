#include <bits/stdc++.h>

int N, K;
int combination_arr[10000+1];

void Input() {
    std::cin >> N >> K;
}

void Output() {
    for (int i=1; i<=K; ++i) {
        std::cout << combination_arr[i];
    }
    std::cout << "\n";
}
// jmax: N-K+i,
// jmin: arr[i-1]+1
void Combination(int i) {
    for (int j=combination_arr[i-1]+1; j<=N-K+i; ++j) {
        combination_arr[i] = j;
        if (i == K) {
            Output();
        } else {
            Combination(i+1);
        }
    }
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    if (freopen("/home/avn/cpp_project/Algorithm_Exercises/input.txt", "r", stdin) == nullptr) {
        std::cout << "failed" << std::endl;
        return 0;
    }
    freopen("/home/avn/cpp_project/Algorithm_Exercises/output.txt", "w", stdout);
    Input();
    Combination(1);
    return 0;
}