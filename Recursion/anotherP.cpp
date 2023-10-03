#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N;
    vector<int> nums(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    cin >> K;

    int operations = 0;
    for (int i = 0; i < N; i += K) {
        int subArrayMax = *max_element(nums.begin() + i, nums.begin() + min(i + K, N));
        for (int j = i; j < min(i + K, N); j++) {
            nums[j] = subArrayMax;
        }
        operations++;
    }

    cout << operations << endl;

    return 0;
}
