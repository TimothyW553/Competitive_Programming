#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back
#define FILL(a, b) memset(a, b, sizeof(a))

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

ll gcd(ll a, ll b){return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
ll mul(ll a,ll b, ll M){if(b==0)return 0;ll t=mul(a,b/2,M);if(b&1)return (t+t+a)%M;return (t+t)%M;}
ll fpow(ll a, ll b, ll M){if(b==0)return 1;ll t=fpow(a,b/2,M);if(b&1)return mul(mul(t,t,M),a,M)%M;return mul(t,t,M)%M;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}

int __attribute__((optimize("-O3"))) main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    ll n; cin >> n;
    string ans = "Greater than 9";
    if(n == 1) {
        ans = "one";
    } else if(n == 2) {
        ans = "two";
    } else if(n == 3) {
        ans = "three";
    } else if(n == 4) {
        ans = "four";
    } else if(n == 5) {
        ans = "five";
    } else if(n == 6) {
        ans = "six";
    } else if(n == 7) {
        ans = "seven";
    } else if(n == 8) {
        ans = "eight";
    } else if(n == 9) {
        ans = "nine";
    }
    cout << ans << "\n";
    return 0;
}
