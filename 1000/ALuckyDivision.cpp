/*
A. Lucky Division
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
47
outputCopy
YES
inputCopy
16
outputCopy
YES
inputCopy
78
outputCopy
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.
*//*
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string x;
    cin >> x;
    char ch;
    int count = 0, temp = 0;
    stringstream stringToNumber(x);
    stringToNumber >> temp;
    for (int i = 0; i < x.size(); i++)
    {
        ch = x[i];
        if (ch == '4' || ch == '7')
            count++;
    }
    if (count == x.size() || temp % 4 == 0 || temp % 7 == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}*/
#include <iostream>
using namespace std;
int a;
int main() {
    cin >> a;
    if (a % 4 == 0 || a % 7 == 0 || a % 44 == 0 || a % 47 == 0 || a % 74 == 0 || a % 77 == 0 || a % 444 == 0 || a % 447 == 0 || a % 474 == 0 || a % 477 == 0 || a % 744 == 0 || a % 747 == 0 || a % 774 == 0 || a % 777 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
47
Output
YES
Answer
YES
Checker Log
ok YES
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
16
Output
YES
Answer
YES
Checker Log
ok YES
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
78
Output
NO
Answer
NO
Checker Log
ok NO
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
48
Output
YES
Answer
YES
Checker Log
ok YES
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
Output
YES
Answer
YES
Checker Log
ok YES
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
107
Output
NO
Answer
NO
Checker Log
ok NO
Test: #7, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
77
Output
YES
Answer
YES
Checker Log
ok YES
Test: #8, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
477
Output
YES
Answer
YES
Checker Log
ok YES
Test: #9, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
480
Output
YES
Answer
YES
Checker Log
ok YES
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
NO
Answer
NO
Checker Log
ok NO
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
Output
NO
Answer
NO
Checker Log
ok NO
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
Output
YES
Answer
YES
Checker Log
ok YES
Test: #13, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
49
Output
YES
Answer
YES
Checker Log
ok YES
Test: #14, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
56
Output
YES
Answer
YES
Checker Log
ok YES
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
124
Output
YES
Answer
YES
Checker Log
ok YES
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
Output
YES
Answer
YES
Checker Log
ok YES
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
Output
NO
Answer
NO
Checker Log
ok NO
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
298
Output
NO
Answer
NO
Checker Log
ok NO
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
274
Output
NO
Answer
NO
Checker Log
ok NO
Test: #20, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
998
Output
NO
Answer
NO
Checker Log
ok NO
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
42
Output
YES
Answer
YES
Checker Log
ok YES
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
788
Output
YES
Answer
YES
Checker Log
ok YES
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
70
Output
YES
Answer
YES
Checker Log
ok YES
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
444
Output
YES
Answer
YES
Checker Log
ok YES
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
777
Output
YES
Answer
YES
Checker Log
ok YES
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
799
Output
YES
Answer
YES
Checker Log
ok YES
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
Output
NO
Answer
NO
Checker Log
ok NO
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
882
Output
YES
Answer
YES
Checker Log
ok YES
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
88
Output
YES
Answer
YES
Checker Log
ok YES
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
11
Output
NO
Answer
NO
Checker Log
ok NO
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
Output
NO
Answer
NO
Checker Log
ok NO
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
Output
YES
Answer
YES
Checker Log
ok YES
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
Output
YES
Answer
YES
Checker Log
ok YES
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
94
Output
YES
Answer
YES
Checker Log
ok YES
Test: #35, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
477
Output
YES
Answer
YES
Checker Log
ok YES
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
141
Output
YES
Answer
YES
Checker Log
ok YES
*/