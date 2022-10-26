#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#define ll long long
#define lli long long int
#define ull unsigned long long
#define PI 3.1415926535897932384626433832795
#define sp ' '
#define mem(a, value) memset(a, value, sizeof(a))
#define precision(a, b) cout << fixed << setprecision(a) << b << endl
#define incfor(a, b) for (int i = a; i < b; i++)
#define decfor(a, b) for (int i = a; i > b; i--)
#define nincfor(a, b) for (int j = a; j < b; j++)
#define ndecfor(a, b) for (int j = a; j > b; j--)
#define input(a, n) incfor(0, n) cin >> a[i];
#define output(a, n) incfor(0, n) cout << a[i] << sp;

void solve()
{
    ll n, rem, koto, cnt = 0, flag = 0, age;
    cin >> n;
    ll a[n];
    input(a, n);
    koto = pow(2, n);
    rem = a[0] % koto;
    incfor(1, n)
    {
        ll mul = a[i] * rem;
        rem = mul % koto;
    }
    while (rem != 0)
    {
        ll div = koto / rem;
        if(rem==1 and div>n)
        {
            flag=1;
            break;
        }
        if (div > n or age == div)
        {
            rem=rem*n;
        }
        if (div > 1)
            cnt++;
        age = div;
        rem = koto % rem;
    }
    if (rem == 1)
        cout << -1 << endl;
    else
        cout << cnt << endl;
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
 *    author:  shawon
 **/