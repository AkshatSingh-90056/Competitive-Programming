#include <bits/stdc++.h>
using namespace std;
 
int Notelock(int k, string s)
{
    int n = s.size();
 
    int ptr = -k;
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
 
            if (i - ptr >= k)
            {
                count++;
            }
 
            ptr = i;
        }
    }
 
    return count;
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        cout << Notelock(k, s) << "
";
    }
 
    return 0;
}