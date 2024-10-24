#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int len = 1;  
    int actualizado = 1;  

    for (int i = 1; i < size; i++) {
    
        if (arr[i] > arr[i - 1]) {
            actualizado++;
        } else {
            len = max(len, actualizado);
            actualizado = 1;
        }
    }

    len = max(len, actualizado);

    cout << len << endl;

    return 0;
}