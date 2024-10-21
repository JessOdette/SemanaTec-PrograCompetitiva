#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k, vector<int>& results) {
    if (n == k || k == 1) {
        results.push_back(1);
    } else if (n == 1) {
        results.push_back(k);
    } else {
        int max = 2;
        while (true) {
            if (n * max >= k) break;
            max++;
        }
        results.push_back(max);
    }
}

int main() {
    int t;
    cin >> t; 

    vector<int> results; 

    while (t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k, results);  
    }


    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }

    return 0;
}