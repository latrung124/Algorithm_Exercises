#include <bits/stdc++.h>

int N;
int permutation_arr[10000+1];

void Input() {
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        permutation_arr[i] = i+1;
    }
}

void Output() {
    for (int i=0; i<N; ++i) {
        std::cout << permutation_arr[i];
    }
    std::cout << "\n";
}

void Permutation_Solve() {
    do {
        Output();
    } while(std::next_permutation(permutation_arr, permutation_arr+N));
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
    Permutation_Solve();
    return 0;
}