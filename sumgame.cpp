#include <iostream>
#include <cmath>
using namespace std;

void minimalDistinctSummands(long long n) {
    long long k = static_cast<long long>((sqrt(1.0 + 8.0 * n) - 1.0) / 2.0);
    long long S = k * (k + 1) / 2;
    long long delta = S - n;

    bool first = true;
    for (long long i = 1; i <= k; ++i) {
        if (i == delta) continue;  // skip delta to ensure correct sum
        if (!first) cout << " + ";
        cout << i;
        first = false;
    }
    cout << "\n";
}

int main() {
    long long n;
    cout << "Enter a natural number: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "Please enter a valid positive integer.\n";
        return 1;
    }

    cout << "Minimal sum with smallest max: ";
    minimalDistinctSummands(n);
    return 0;
}
