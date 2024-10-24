#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin >> test;  

    while (test--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        string c = "";  
        int countA = 0;
        int countB = 0; 
        int indexA = 0;
        int indexB = 0;
    

        while (indexA < n && indexB < m) {
            if ((a[indexA] < b[indexB] && countA < k) || countB == k) {
                c += a[indexA++];
                countA++;
                countB = 0;  
            } else {
                c += b[indexB++];
                countB++;
                countA = 0;  
            }
        }
        cout << c << endl;
    }

    return 0;
}