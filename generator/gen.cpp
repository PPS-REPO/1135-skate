#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    // Usage: gen N Q minV maxV minL maxL minR maxR
    registerGen(argc, argv, 1);

    int n, a, b, c;
    int q, t, y, u, i, o;
    int n = opt<int>(1);
    int a = opt<int>(2);
    int b = opt<int>(3);
    int c = opt<int>(4);
    int q = opt<int>(5);
    int t = opt<int>(6);
    int y = opt<int>(7);
    int u = opt<int>(8);
    int i = opt<int>(9);
    int o = opt<int>(10);
    cout << n << '\n';
    cout << a << " " << b << " " << c << '\n';
    cout << q << '\n';
    cout << t << " " << y << " " << u << " " << i << " " << o << '\n';
    
    return 0;
}
