#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, s = 0;
        cin >> n >> p;
        if (n < p)
            cout << "NO" << endl;
        else
        {
            if (n % p == 0)

            {
                cout << "YES" << endl;

                for (int i = 0; i < p; i++)
                {
                    cout << n / p << " ";
                }
                cout << endl;
            }
            else if (n % 2 == 1 && p % 2 == 0)
                cout << "NO" << endl;
            else if (n % 2 == 0 && p % 2 == 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i <= p - 2; i++)
                {
                    cout << "1"<< " ";
                }
                cout << abs(n - p + 1) << endl;
            }
            else if (n % 2 == 1 && p % 2 == 1)
            {
                cout << "YES" << endl;
                for (int i = 0; i <= p - 2; i++)
                {
                    cout << "1" << " ";
                }
                cout << abs(n - p + 1) << endl;
            }
            else if (n % 2 == 0 && p % 2 == 1 && n >= 2 * p)
            {
                cout << "YES" << endl;
                for (int i = 0; i <= p - 2; i++)
                {
                    cout << "2" << " ";
                }
                cout << abs((n - (2 * p) + 2)) << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}