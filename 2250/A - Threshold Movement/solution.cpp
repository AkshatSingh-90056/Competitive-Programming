#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        int maxEven = INT_MIN;
        int minOdd = INT_MAX;
 
        for (int i = 1; i <= n; i++)
        {
            int currentElement;
            cin >> currentElement;
 
            if (i % 2 != 0)
                minOdd = min(minOdd, currentElement);
            else
                maxEven = max(maxEven, currentElement);
        }
 
        if (n % 2 != 0)
            cout << "NO
";
        else if (maxEven + 1 < minOdd) 
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}