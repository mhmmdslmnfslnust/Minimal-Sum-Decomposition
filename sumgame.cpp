#include <iostream>
#include <vector>
using namespace std;

vector<int> minimalSumWithSmallestMax(int n) {
    vector<int> result;
    int current = 1;
    int sum = 0;

    // Step 1: Add natural numbers until we can't add next one without exceeding n
    while (sum + current <= n) {
        result.push_back(current);
        sum += current;
        current++;
    }

    // Step 2: Adjust the last number if needed
    int diff = n - sum;
    if (diff > 0) {
        result.back() += diff;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    vector<int> result = minimalSumWithSmallestMax(n);

    cout << "Minimal sum with smallest max: ";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << " + ";
    }
    cout << endl;

    return 0;
}
