#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;  

    while (test--) {
        int candies;
        cin >> candies;

        int count1 = 0;  
        int count2 = 0;  

        for (int i = 0; i < candies; i++) {
            int weights;
            cin >> weights;
            if (weights == 1) {
                count1++;
            } else if (weights == 2) {
                count2++;
            }
        }

        int sumWeights = count1 * 1 + count2 * 2;

        if (sumWeights % 2 != 0) {
            cout << "NO" << endl;
        } else {
            if (count1 % 2 != 0 || (count1 == 0 && count2 % 2 != 0)){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}