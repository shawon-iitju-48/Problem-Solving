#include <bits/stdc++.h>

using namespace std;

signed main(signed argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    srand(atoi(argv[1]));
    int t = 1;
    srand(time(0));
    cout << t << endl;
    while (t--)
    {
        int lower = -3000, upper = 3000;
        int count = (rand() % (10 - 5 + 1)) + 5;
        cout << count << endl;
        for (int i = 0; i < count; i++)
        {
            int num = (rand() % (upper - lower + 1)) + lower;
            printf("%d ", num);
        }
    }
    // generate test cases with same format as given in problem
}