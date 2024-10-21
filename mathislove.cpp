#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);  


    for (int i = 0; i < T; i++) {
        long long Y;
        scanf("%lld", &Y);  


        long long interm_rslt = 1 + 8 * Y;
        long long sqrt_disc = sqrt(interm_rslt);

        if (sqrt_disc * sqrt_disc == interm_rslt) {
            long long n = (-1 + sqrt_disc) / 2;
            if (n * (n + 1) / 2 == Y) {
                printf("%lld\n", n);
            } else {
                printf("NAI\n");
            }
        } else {
            printf("NAI\n");
        }
    }

    return 0;
}