#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        set<char> broken;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s[i+1])i++;
            else {
                broken.insert(s[i]);
            }
        }
        for (set<char>::iterator it = broken.begin(); it != broken.end(); it++) {
            cout << *it;
        }
        cout << endl; 
    }
    return 0;
}