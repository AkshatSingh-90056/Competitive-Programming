#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
 
        int ptrS1 = 0;
        int ptrS2 = 0;
        int common = 0;
 
        int sizeS1 = s1.size();
        int sizeS2 = s2.size();
 
        while (ptrS1 < sizeS1 &&
               ptrS2 < sizeS2 &&
               s1[ptrS1] == s2[ptrS2])
        {
            common++;
            ptrS1++;
            ptrS2++;
        }
 
        int answer;
 
        if (common == 0)
            answer = sizeS1 + sizeS2;
        else
            answer = sizeS1 + sizeS2 - common + 1;
 
        cout << answer << '
';
    }
 
    return 0;
}