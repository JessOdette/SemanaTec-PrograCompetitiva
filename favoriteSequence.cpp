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

        int initial = 0;
        int final = n-1;

        while (initial <= final) {
            if (initial <= final) {
                cout << a[initial];
                initial++;
            }
            if (initial <= final) {
                cout << a[final];
                final--;
            }
        }


    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
  }
}