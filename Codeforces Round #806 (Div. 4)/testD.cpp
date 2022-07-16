/*
D. Double Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given n strings s1,s2,…,sn of length at most 8.

For each string si, determine if there exist two strings sj and sk such that si=sj+sk. That is, si is the concatenation of sj and sk. Note that j can be equal to k.

Recall that the concatenation of strings s and t is s+t=s1s2…spt1t2…tq, where p and q are the lengths of strings s and t respectively. For example, concatenation of "code" and "forces" is "codeforces".

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains a single integer n (1≤n≤105) — the number of strings.

Then n lines follow, the i-th of which contains non-empty string si of length at most 8, consisting of lowercase English letters. Among the given n strings, there may be equal (duplicates).

The sum of n over all test cases doesn't exceed 105.

Output
For each test case, output a binary string of length n. The i-th bit should be 1 if there exist two strings sj and sk where si=sj+sk, and 0 otherwise. Note that j can be equal to k.

Example
inputCopy
3
5
abab
ab
abc
abacb
c
3
x
xx
xxx
8
codeforc
es
codes
cod
forc
forces
e
code
outputCopy
10100
011
10100101
Note
In the first test case, we have the following:

s1=s2+s2, since abab=ab+ab. Remember that j can be equal to k.
s2 is not the concatenation of any two strings in the list.
s3=s2+s5, since abc=ab+c.
s4 is not the concatenation of any two strings in the list.
s5 is not the concatenation of any two strings in the list.
Since only s1 and s3 satisfy the conditions, only the first and third bits in the answer should be 1, so the answer is 10100.
*/
#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> nums(n);
    unordered_set<string> s;
    loop(i, 0, n)
    {
        cin >> nums[i];
        s.insert(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i].size() == 1)
        {
            cout << "0";
            continue;
        }
        bool yes = true;
        for (int j = 0; j < nums[i].size(); j++)
        {
            string l = nums[i].substr(0, j);
            string r = nums[i].substr(j, nums[i].size());
            // cout << l << " : " << r << endl;
            if (s.count(l) && s.count(r))
            {
                cout << "1";
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "0";
    }
    cout << "\n";
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
5
abab
ab
abc
abacb
c
3
x
xx
xxx
8
codeforc
es
codes
cod
forc
forces
e
code
Output
10100
011
10100101
Checker Log
ok 3 tokens
*/