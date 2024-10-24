#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    int testCases;
    cin >> testCases;

    while(testCases--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int max = *max_element(arr.begin(), arr.end());
        int min = *min_element(arr.begin(), arr.end());


        int distAtrasMax = max - arr.back();
        int distAdelanteMax = max - arr.front();
        int distAtrasMin = min - arr.back();
        int distAdelanteMin = min - arr.front();

        if (distAtrasMax < distAdelanteMax) { 
            v.erase
        }

    }






    return 0;
}