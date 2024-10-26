#include <iostream>
#include <vector>
using namespace std;

int main() {
    int home, jump;
    cin >> home >> jump;

    vector<int> arr;
    for (int i = 0; i < home; i++) {
        int s;
        cin >> s;
        arr.push_back(s);
    }

    int position = 0; 
    int saltos = 0;    

    while (position < home - 1) {
        int nextPosition = position;

        for (int i = 1; i <= jump; i++) {
            if (position + i < home && arr[position + i] == 1) {
                nextPosition = position + i;
            }
        }

        if (nextPosition == position) {
            cout << -1 << endl;
            return 0;
        }

        position = nextPosition;
        saltos++;
    }
    cout << saltos;

    return 0;
}