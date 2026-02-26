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
        string s;
        cin >> s;         
        int cnt = count(s.begin(),s.end(),'0');  
        int cnt2 = s.size() - cnt;                 
        cout << min(cnt,cnt2)*2 + (cnt != cnt2) << endl;
    }
    return 0;
}