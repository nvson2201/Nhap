#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9 + 7;
const int FFTMOD = 119 << 23 | 1;
const int INF = (int) 2e9 + 22011995;
const ll LINF = (ll) 9e18 + 22011995;
const ld PI = acos((ld) -1);
const ld EPS = 1e-6;

inline ll gcd(ll a, ll b) {
    ll r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

inline ll fpow(ll n, ll k, int p = MOD) {
    ll r = 1;
    for (; k; k >>= 1) {
        if (k & 1) r = r * n % p;
        n = n * n % p;
    }
    return r;
}

template<class T>
inline int chkmin(T &a, const T &val) { return val < a ? a = val, 1 : 0; }

template<class T>
inline int chkmax(T &a, const T &val) { return a < val ? a = val, 1 : 0; }

inline ull isqrt(ull k) {
    ull r = sqrt(k) + 1;
    while (r * r > k) r--;
    return r;
}

inline ll icbrt(ll k) {
    ll r = cbrt(k) + 1;
    while (r * r * r > k) r--;
    return r;
}

inline void addmod(int &a, int val, int p = MOD) { if ((a = (a + val)) >= p) a -= p; }

inline void submod(int &a, int val, int p = MOD) { if ((a = (a - val)) < 0) a += p; }

inline int mult(int a, int b, int p = MOD) { return (ll) a * b % p; }

inline int inv(int a, int p = MOD) { return fpow(a, p - 2, p); }

inline int sign(ld x) { return x < -EPS ? -1 : x > +EPS; }

inline int sign(ld x, ld y) { return sign(x - y); }

mt19937 mt(chrono::high_resolution_clock::now().time_since_epoch().count());

inline int mrand() { return abs((int) mt()); }

inline int mrand(int k) { return abs((int) mt()) % k; }

void __print(int x) { cerr << x; }

void __print(long x) { cerr << x; }

void __print(long long x) { cerr << x; }

void __print(unsigned x) { cerr << x; }

void __print(unsigned long x) { cerr << x; }

void __print(unsigned long long x) { cerr << x; }

void __print(float x) { cerr << x; }

void __print(double x) { cerr << x; }

void __print(long double x) { cerr << x; }

void __print(char x) { cerr << '\'' << x << '\''; }

void __print(const char *x) { cerr << '\"' << x << '\"'; }

void __print(const string &x) { cerr << '\"' << x << '\"'; }

void __print(bool x) { cerr << (x ? "true" : "false"); }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}

template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i: x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}

void _print() { cerr << "]\n"; }

template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define db(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define db(x...)
#endif

struct Tree_t {
    vector<int> events;
    vector<int> sta; // start mapping
    vector<int> lev; // depth
    vector<int> tin; // time in
    vector<int> tou; // time out
    vector<int> idx; // index
    vector<vector<int>> par; // parent
    int timer;
    vector<vector<int>> f;
    vector<int> mlg;

    void dfs(int u, int p, const vector<vector<int>> &adj) {
        idx[tin[u] = timer++] = u;
        sta[u] = events.size();
        events.push_back(tin[u]);
        for (int i = 1; i < (int) par.size(); i++) {
            par[i][u] = par[i - 1][par[i - 1][u]];
        }
        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];
            if (v != p) {
                lev[v] = lev[u] + 1;
                par[0][v] = u;
                dfs(v, u, adj);
                events.push_back(tin[u]);
            }
        }
        tou[u] = timer - 1;
    }

    void build(const vector<vector<int>> &adj, int rt = 0) {
        events.clear();
        sta.resize(adj.size());
        lev.resize(adj.size());
        tin.resize(adj.size());
        tou.resize(adj.size());
        idx.resize(adj.size());
        par.resize(__lg(adj.size()) + 1);
        for (int i = 0; i < (int) par.size(); i++) {
            par[i].resize(adj.size());
            par[i][rt] = rt;
        }
        timer = lev[rt] = 0, dfs(rt, -1, adj);
        int logn = __lg(events.size()) + 1;
        f.resize(logn);
        for (int i = 0; i < logn; i++) {
            f[i].resize(events.size());
        }
        for (int i = 0; i < events.size(); i++) {
            f[0][i] = events[i];
        }
        for (int i = 1; i < logn; i++) {
            for (int j = 0; j + (1 << i - 1) < events.size(); j++) {
                f[i][j] = min(f[i - 1][j], f[i - 1][j + (1 << i - 1)]);
            }
        }
        mlg.resize(events.size());
        for (int i = 1; i < mlg.size(); i++) {
            mlg[i] = __lg(i);
        }
    }

    int rmq(int u, int v) {
        int l = u == v ? 0 : mlg[v - u];
        return min(f[l][u], f[l][v - (1 << l) + 1]);
    }

    int lca(int u, int v) {
        if (sta[u] > sta[v]) swap(u, v);
        return idx[rmq(sta[u], sta[v])];
    }
};

int main() {
    Tree_t myTree;
    vector<vector<int>> adjMatrix(3);
    adjMatrix[1].emplace_back(0);
    adjMatrix[0].emplace_back(1);
    adjMatrix[0].emplace_back(2);
    adjMatrix[2].emplace_back(0);
    db(adjMatrix);
    myTree.build(adjMatrix, 1);
    db(myTree.lca(0, 1));
    return 0;
}