#include<bits/stdc++.h>
#define int long long
using namespace std;
#include <stdint.h>
uint64_t seed;
int get_random(int rand_min, int rand_max) {
    seed ^= seed <<13; seed ^= seed >>7; seed ^= seed <<17;
    return rand_min + (int)(seed % (rand_max - rand_min +1));
}
void ready(int seeds) {
    seed = (uint64_t) seeds;
}

signed main() {
    int n; cin >> n;
    vector<int> v(n+2), sum(n+2), mid(n+2);
    int v_min, v_max, v_seed; cin >> v_min >> v_max >> v_seed;
    ready(v_seed);
    for(int i=1;i<=n;i++) v[i] = get_random(v_min, v_max);
    //for(int i=1;i<=n;i++) cout << v[i] << " "; cout << " ";
    reverse(v.begin(), v.end());
    for(int i=1; i<=n; i++) if (v[i-1]+1<v[i]) v[i]=v[i-1]+1;
    for(int i=1; i<=n; i++) sum[i] = v[i]+sum[i-1];
    int bef = 0;
    for(int i=1; i<=n+1; i++) {
        if (v[i] <= bef) {
            for(int j=i-bef; j<=i-v[i]; j++) mid[j] = bef--;
        }
        bef++;
    }

    int q; cin >> q;
    int l_min, l_max, r_min, r_max, q_seed; cin >> l_min >> l_max >> r_min >> r_max >> q_seed;
    ready(q_seed);
    while(q--) {
        int l, r; l = get_random(l_min, l_max); r = get_random(max(l, r_min), r_max);
        swap(l, r); l=n-l+1; r=n-r+1;
        int ans = 0;
        int k = min(l+mid[l]-1, r);
        ans += (k-l+1)*(k-l+2)/2; 
        ans += sum[r] - sum[k]; 
        cout << ans % 786'433 << '\n';
    }
    return 0;
}