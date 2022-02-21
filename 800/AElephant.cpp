/*
A. Elephant
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

Examples
inputCopy
5
outputCopy
1
inputCopy
12
outputCopy
3
Note
In the first sample the elephant needs to make one step of length 5 to reach the point x.

In the second sample the elephant can get to point x if he moves by 3, 5 and 4. There are other ways to get the optimal answer but the elephant cannot reach x in less than three moves.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, x, result, check;
    a = x = result = check = 0;
    cin >> x;
    for (int i = 5; i > 0; i--)
    {
        if (x >= i)
        {
            result += (x / i);
            x = (x % i);
        }
    }
    cout << result;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
12
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999
Output
200000
Answer
200000
Checker Log
ok 1 number(s): "200000"
Test: #4, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
41
Output
9
Answer
9
Checker Log
ok 1 number(s): "9"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000
Output
200000
Answer
200000
Checker Log
ok 1 number(s): "200000"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #10, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
534204
Output
106841
Answer
106841
Checker Log
ok 1 number(s): "106841"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
469569
Output
93914
Answer
93914
Checker Log
ok 1 number(s): "93914"
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
502877
Output
100576
Answer
100576
Checker Log
ok 1 number(s): "100576"
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
942212
Output
188443
Answer
188443
Checker Log
ok 1 number(s): "188443"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
97
Output
20
Answer
20
Checker Log
ok 1 number(s): "20"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
53
Output
11
Answer
11
Checker Log
ok 1 number(s): "11"
Test: #16, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
89
Output
18
Answer
18
Checker Log
ok 1 number(s): "18"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
574
Output
115
Answer
115
Checker Log
ok 1 number(s): "115"
Test: #18, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
716
Output
144
Answer
144
Checker Log
ok 1 number(s): "144"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
729
Output
146
Answer
146
Checker Log
ok 1 number(s): "146"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8901
Output
1781
Answer
1781
Checker Log
ok 1 number(s): "1781"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3645
Output
729
Answer
729
Checker Log
ok 1 number(s): "729"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4426
Output
886
Answer
886
Checker Log
ok 1 number(s): "886"
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
46573
Output
9315
Answer
9315
Checker Log
ok 1 number(s): "9315"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
86380
Output
17276
Answer
17276
Checker Log
ok 1 number(s): "17276"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
94190
Output
18838
Answer
18838
Checker Log
ok 1 number(s): "18838"
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999990
Output
199998
Answer
199998
Checker Log
ok 1 number(s): "199998"
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999991
Output
199999
Answer
199999
Checker Log
ok 1 number(s): "199999"
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999992
Output
199999
Answer
199999
Checker Log
ok 1 number(s): "199999"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999993
Output
199999
Answer
199999
Checker Log
ok 1 number(s): "199999"
Test: #30, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999994
Output
199999
Answer
199999
Checker Log
ok 1 number(s): "199999"
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999995
Output
199999
Answer
199999
Checker Log
ok 1 number(s): "199999"
Test: #32, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999996
Output
200000
Answer
200000
Checker Log
ok 1 number(s): "200000"
Test: #33, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999997
Output
200000
Answer
200000
Checker Log
ok 1 number(s): "200000"
Test: #34, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999998
Output
200000
Answer
200000
Checker Log
ok 1 number(s): "200000"
*/