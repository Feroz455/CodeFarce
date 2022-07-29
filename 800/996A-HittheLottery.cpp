/*
A. Hit the Lottery
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Allen has a LOT of money. He has n dollars in the bank. For security reasons,
he wants to withdraw it in cash (we will not disclose the reasons here).
The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number
of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n (1≤n≤109).

Output
Output the minimum number of bills that Allen could receive.

Examples
inputCopy
125
outputCopy
3
inputCopy
43
outputCopy
5
inputCopy
1000000000
outputCopy
10000000
Note
In the first sample case, Allen can withdraw this with a 100 dollar bill, a 20 dollar bill,
and a 5 dollar bill. There is no way for Allen to receive 125 dollars in one or two bills.

In the second sample case, Allen can withdraw two 20 dollar bills and three 1 dollar bills.

In the third sample case, Allen can withdraw 100000000 (ten million!) 100 dollar bills.
*/
#include <iostream>
using namespace std;
int main()
{
    int Arr[5] = {1, 5, 10, 20, 100};
    int count = 0;
    int value;
    cin >> value;

    for (int i = 4; i >= 0; i--)
    {
        if (value >= Arr[i])
        {
            count += (value / Arr[i]);
            value = value % Arr[i];
        }
    }
    cout << count << endl;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
125
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
43
Output
5
Answer
5
Checker Log
ok 1 number(s): "5"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000
Output
10000000
Answer
10000000
Checker Log
ok 1 number(s): "10000000"
Test: #4, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #7, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
74
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
31
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
59
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
Test: #10, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
79
Output
9
Answer
9
Checker Log
ok 1 number(s): "9"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #12, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
55
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
719
Output
13
Answer
13
Checker Log
ok 1 number(s): "13"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
847
Output
13
Answer
13
Checker Log
ok 1 number(s): "13"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
225
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4704
Output
51
Answer
51
Checker Log
ok 1 number(s): "51"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1132
Output
15
Answer
15
Checker Log
ok 1 number(s): "15"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7811
Output
80
Answer
80
Checker Log
ok 1 number(s): "80"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7981
Output
84
Answer
84
Checker Log
ok 1 number(s): "84"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
82655
Output
830
Answer
830
Checker Log
ok 1 number(s): "830"
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6364
Output
70
Answer
70
Checker Log
ok 1 number(s): "70"
Test: #23, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
74611
Output
748
Answer
748
Checker Log
ok 1 number(s): "748"
Test: #24, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
45391
Output
459
Answer
459
Checker Log
ok 1 number(s): "459"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
620448
Output
6210
Answer
6210
Checker Log
ok 1 number(s): "6210"
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
265145
Output
2654
Answer
2654
Checker Log
ok 1 number(s): "2654"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
671704
Output
6721
Answer
6721
Checker Log
ok 1 number(s): "6721"
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
365173
Output
3658
Answer
3658
Checker Log
ok 1 number(s): "3658"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7130872
Output
71314
Answer
71314
Checker Log
ok 1 number(s): "71314"
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9628747
Output
96292
Answer
96292
Checker Log
ok 1 number(s): "96292"
Test: #31, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8898399
Output
88993
Answer
88993
Checker Log
ok 1 number(s): "88993"
Test: #32, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9497953
Output
94985
Answer
94985
Checker Log
ok 1 number(s): "94985"
Test: #33, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
19070947
Output
190714
Answer
190714
Checker Log
ok 1 number(s): "190714"
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20185520
Output
201856
Answer
201856
Checker Log
ok 1 number(s): "201856"
Test: #35, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
91402248
Output
914028
Answer
914028
Checker Log
ok 1 number(s): "914028"
Test: #36, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
27035533
Output
270360
Answer
270360
Checker Log
ok 1 number(s): "270360"
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
22717528
Output
227180
Answer
227180
Checker Log
ok 1 number(s): "227180"
Test: #38, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
24403439
Output
244041
Answer
244041
Checker Log
ok 1 number(s): "244041"
Test: #39, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
163565555
Output
1635659
Answer
1635659
Checker Log
ok 1 number(s): "1635659"
Test: #40, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
152541908
Output
1525423
Answer
1525423
Checker Log
ok 1 number(s): "1525423"
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
668439837
Output
6684403
Answer
6684403
Checker Log
ok 1 number(s): "6684403"
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #43, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999
Output
10000009
Answer
10000009
Checker Log
ok 1 number(s): "10000009"
Test: #44, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #45, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #46, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #47, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99999999
Output
1000009
Answer
1000009
Checker Log
ok 1 number(s): "1000009"
Test: #48, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000001
Output
10001
Answer
10001
Checker Log
ok 1 number(s): "10001"
Test: #49, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2521
Output
27
Answer
27
Checker Log
ok 1 number(s): "27"
*/