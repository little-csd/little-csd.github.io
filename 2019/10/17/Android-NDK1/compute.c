#include "compute.h"
int compute(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans += n;
    }
    return ans;
}