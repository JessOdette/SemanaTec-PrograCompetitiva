#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++) {
        b.push_back({a[i], i});
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        a[i] = b[i].first;
    }
}