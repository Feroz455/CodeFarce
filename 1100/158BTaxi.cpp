/*
B. Taxi
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
inputCopy
5
1 2 4 3 3
outputCopy
4
inputCopy
8
2 3 4 4 2 1 3 1
outputCopy
5
Note
In the first test we can sort the children into four cars like this:

the third group (consisting of four children),
the fourth group (consisting of three children),
the fifth group (consisting of three children),
the first and the second group (consisting of one and two children, correspondingly).
There are other ways to sort the groups into four cars.
*/
#include <iostream>
using namespace std;
int count[5];
int main()
{
    int n, s, total;
    cin >> n;
    while (n--)
    {
        cin >> s;
        count[s] += 1;
    }
    total = count[4] + count[3] + count[2] / 2;
    count[1] = count[1] - count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] =count[1] - 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    cout << total;
    return 0;
}
/*
78
2 2 2 2 3 3 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 2 2 3 2 2 2 2 2 2 2 1 1 2 2 2 2 2 2 2 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2

→Judgement Protocol
Test: #1, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
1 2 4 3 3
Output
4
Answer
4
Checker Log
ok answer is 4
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
2 3 4 4 2 1 3 1
Output
5
Answer
5
Checker Log
ok answer is 5
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
4 4 4 4 4
Output
5
Answer
5
Checker Log
ok answer is 5
Test: #4, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
12
1 1 1 1 1 1 1 1 1 1 1 1
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2 1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
3 2 1 3
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
2 4 1 3
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
2
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
3
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
4
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
1 1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2 2
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
3 3
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #15, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
4 4
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2 1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
3 1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
4 1
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2 3
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
4 2
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
4 3
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
2 2 1 1
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
3 1 3 1
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #24, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
1 4 1 4
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #25, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
2 2 3 3
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
2 4 4 2
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #27, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
3 3 4 4
Output
4
Answer
4
Checker Log
ok answer is 4
Test: #28, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 1 2
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 3 1
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4 1 1
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
3 2 2
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
2 4 2
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
3 4 3
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #34, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
2 2 1
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 3 3
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4 4 1
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
3 3 2
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4 2 4
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #39, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4 3 4
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #40, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4 3 2
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
3 1 4
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #42, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
Input
3
2 1 4
Output
3
Answer
2
Checker Log
wrong answer expected 2, found 3
*/