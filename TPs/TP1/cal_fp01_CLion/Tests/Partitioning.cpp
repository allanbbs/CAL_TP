/*
 * Partioning.cpp
 */

#include "Partitioning.h"
#include <iostream>
#include <vector>

using namespace std;

int s_recursive(int n, int k) {
    if (k == 1 || k == n)
        return 1;
    return s_recursive(n - 1, k - 1) + k * s_recursive(n - 1, k);
}

int s_dynamic(int n, int k) {
    vector<int> f_d(n - k + 1, 1);
    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= (n - k); j++) {
            f_d[j] += i * f_d[j - 1];
        }
    }
    return f_d[n - k];
}


int b_recursive(int n) {
    return 1;

}

vector<int> b_d(1000);

int b_dynamic(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += s_dynamic(n, i);
    }
    return res;
}

int fib(int x) {
    vector<int> f(x + 1);
    f[0] = 0;
    f[1] = 1;
    int p, p1 = 1, p2 = 0;
    for (int i = 2; i <= x; i++) {
        f[i] = f[i - 1] = f[i - 2];
    }
    return f[x];
}



