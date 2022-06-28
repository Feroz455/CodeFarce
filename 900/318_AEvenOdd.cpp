/*
A. Even Odds
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Being a nonconformist, Volodya is displeased with the current state of things,
particularly with the order of natural numbers (natural number is positive integer number).
He is determined to rearrange them. But there are too many natural numbers, so Volodya
decided to start with the first n. He writes down the following sequence of numbers:
firstly all odd integers from 1 to n (in ascending order), then all even integers from 1
to n (also in ascending order). Help our hero to find out which number will stand at the
position number k.

Input
The only line of input contains integers n and k (1 ≤ k ≤ n ≤ 1012).

Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is
preferred to use the cin, cout streams or the %I64d specifier.

Output
Print the number that will stand at the position number k after Volodya's manipulations.

Examples
inputCopy
10 3
outputCopy
5
inputCopy
7 7
outputCopy
6
Note
In the first sample Volodya's sequence will look like this: {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}.
The third place in the sequence is therefore occupied by the number 5.
*/

#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10 3
Output
5
Answer
5
Checker Log
ok 1 number(s): "5"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7 7
Output
6
Answer
6
Checker Log
ok 1 number(s): "6"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7 1
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7 2
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8 5
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8 3
Output
5
Answer
5
Checker Log
ok 1 number(s): "5"
Test: #7, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8 4
Output
7
Answer
7
Checker Log
ok 1 number(s): "7"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000 500000000001
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999997 499999999999
Output
999999999997
Answer
999999999997
Checker Log
ok 1 number(s): "999999999997"
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999999 999999999999
Output
999999999998
Answer
999999999998
Checker Log
ok 1 number(s): "999999999998"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000 1
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999999 1
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #14, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000 1000000000000
Output
1000000000000
Answer
1000000000000
Checker Log
ok 1 number(s): "1000000000000"
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000 500000000000
Output
999999999999
Answer
999999999999
Checker Log
ok 1 number(s): "999999999999"
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000 499999999999
Output
999999999997
Answer
999999999997
Checker Log
ok 1 number(s): "999999999997"
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999997 499999999998
Output
999999999995
Answer
999999999995
Checker Log
ok 1 number(s): "999999999995"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
619234238 556154835
Output
493075432
Answer
493075432
Checker Log
ok 1 number(s): "493075432"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
38151981 36650624
Output
35149266
Answer
35149266
Checker Log
ok 1 number(s): "35149266"
Test: #20, time: 30 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
680402465 442571217
Output
204739968
Answer
204739968
Checker Log
ok 1 number(s): "204739968"
Test: #21, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
109135284 9408714
Output
18817427
Answer
18817427
Checker Log
ok 1 number(s): "18817427"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
603701841 56038951
Output
112077901
Answer
112077901
Checker Log
ok 1 number(s): "112077901"
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
356764822 321510177
Output
286255532
Answer
286255532
Checker Log
ok 1 number(s): "286255532"
Test: #24, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
284911189 142190783
Output
284381565
Answer
284381565
Checker Log
ok 1 number(s): "284381565"
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
91028405 61435545
Output
31842684
Answer
31842684
Checker Log
ok 1 number(s): "31842684"
*/