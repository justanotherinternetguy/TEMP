/*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define all(x) x.begin(), x.end()

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef map<string, int> msp;
typedef map<int, int> mii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007



#define WI(x); printf("%d\n", x)
#define WS(x); cout << x << "\n"
#define WL(x); printf("%ld\n", x)
#define WF(x); printf("%f\n", x)
#define WC(x); printf("%c\n", x)
#define BR(); cout << "\n"

#define SCI(t) scanf("%d", &t)
#define SCF(t) scanf("%f", &t)
#define SCS(t) getline(cin, t)
#define SCC(t) scanf("%c", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld",&t)


#define FOR(i,a,b) for (int i = a; i <= b; i++)
#define FLP(i,a,b) for (int i = a; i < b; i++)


mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

/*******************************************************************************/

void solve(int a, int b, int c, int x, int y) {
    if (a >= x && b >= y) {
        WS("YES");
    }
    
    else {
        int tempA = a-x;
        int tempB = b-y;
        int tempSum = tempA + tempB;
        
        if (tempSum <= c) {
            WS("YES");
        }
        else {
            WS("NO");
        }
    }
}



int main() {
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int rounds;
    SCI(rounds);
    int a, b, c, x, y;
    

    FOR (i, 1, rounds) {
        SCI(a);
        SCI(b);
        SCI(c);
        SCI(x);
        SCI(y);
        solve(a, b, c, x, y);
    }

	return 0;
}
