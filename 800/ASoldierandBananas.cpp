/*
A. Soldier and Bananas
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

Examples
inputCopy
3 17 4
outputCopy
13
*/
#include <iostream>
using namespace std;
int main()
{
    long k, n, w, sum = 0;

    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum += long(i * k);
    }
    if (sum > n)
    {
        cout << abs(sum - n);
    }
    else
        cout << 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3 17 4
Output
13
Answer
13
Checker Log
ok 1 number(s): "13"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 2 1
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1 1
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #4, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 5 6
Output
16
Answer
16
Checker Log
ok 1 number(s): "16"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1000000000 1
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000 0 1000
Output
500500000
Answer
500500000
Checker Log
ok 1 number(s): "500500000"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
859 453892 543
Output
126416972
Answer
126416972
Checker Log
ok 1 number(s): "126416972"
Test: #8, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000 1000000000 1000
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000 500500000 1000
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000 500500001 1000
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000 500499999 1000
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
634 87973 214
Output
14497197
Answer
14497197
Checker Log
ok 1 number(s): "14497197"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
432 10000 241
Output
12587552
Answer
12587552
Checker Log
ok 1 number(s): "12587552"
Test: #14, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
111 111111111 111
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20 43 3
Output
77
Answer
77
Checker Log
ok 1 number(s): "77"
*/