#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        int arr[n];
        bool seat[n + 2] = {};
 
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        bool ans = true;
 
        seat[arr[0]] = true;
 
        for (int i = 1; i < n; i++)
        {
            int left = arr[i] - 1;
            int right = arr[i] + 1;
 
            if (seat[left] == false && seat[right] == false)
                ans = false;
 
            seat[arr[i]] = true;
        }
 
        if (ans)
            cout << "YES
";
        else
            cout << "NO
";
    }
}