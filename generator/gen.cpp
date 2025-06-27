#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    // Usage: gen N a b c Q t y u i o
    registerGen(argc, argv, 1);

    int N       = opt<int>(1);
    int a       = opt<int>(2);
    int b       = opt<int>(3);
    int c       = opt<int>(4);
    int Q       = opt<int>(5);
    int t       = opt<int>(6);
    int y       = opt<int>(7);
    int u       = opt<int>(8);
    int i_val   = opt<int>(9);  // 변수명 i 대신 i_val 사용
    int o_val   = opt<int>(10); // 변수명 o 대신 o_val 사용

    cout << N << '\n';
    cout << a << ' ' << b << ' ' << c << '\n';
    cout << Q << '\n';
    cout << t << ' ' << y << ' ' << u << ' ' << i_val << ' ' << o_val << '\n';

    return 0;
}
