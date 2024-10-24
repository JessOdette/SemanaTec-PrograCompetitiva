#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    int bills[] = {100, 20, 10, 5, 1};
    int numBills = 0;  
    for (int i = 0; i < 5; i++) {
        numBills += amount / bills[i]; 
        amount %= bills[i];  
    }
    cout << numBills << endl;

    return 0;
}