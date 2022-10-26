#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#define ll long long
#define lli long long int
#define ld long double
#define ull unsigned long long
#define ulli unsigned long long int
#define PI 3.1415926535897932384626433832795

#define sp ' '
#define pb push_back
#define ppb pop_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>

#define gcd(a, b) __gcd(a, b);
#define precision(a, b) cout << fixed << setprecision(a) << b << endl
#define incfor(a, b) for (int i = a; i < b; i++)
#define decfor(a, b) for (int i = a; i > b; i--)
#define nincfor(a, b) for (int j = a; j < b; j++)
#define ndecfor(a, b) for (int j = a; j > b; j--)
#define output(n) incfor(0, n) cout << a[i] << sp;
#define input(n) incfor(0, n) cin >> a[i];

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n, sq, flag = 0, aa;
    float sqf;
    cin >> n;
    int a[n], mark[n] = {0};
    incfor(0, n)
        a[i] = i;
    decfor(n - 1, -1)
    {
        sqf = sqrt(a[i] + i);
        sq = ceil(sqf);
        if (sq == sqf)
            mark[i] = 1;
        else
        {
            sqf = sqrt(a[i]);
            sq = ceil(sqf);
            aa = sq * sq - a[i];
            if (mark[aa] == 0 and mark[a[i]] == 0)
            {
                swap(a[i], a[aa]);
                mark[aa] = 1, mark[a[i]] = 1;
            }
            else
                flag = 1;
        }
        if (flag == 1)
        {
            cout << -1 << endl;
            break;
        }
    }
    if (flag == 0)
    {
        output(n);
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout<<"Case "<<t<<": ";
        solve();
    }
    return 0;
}
/**
 *    author:  lifelessnoob
 **/