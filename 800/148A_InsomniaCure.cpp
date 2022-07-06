/*
A. Insomnia cure
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
«One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep,
and she got bored of counting lambs when she was nine.

However, just counting dragons was boring as well, so she entertained herself at best she could.
Tonight she imagined that all dragons were here to steal her, and she was fighting them off.
Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail
shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally,
she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

Input
Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

Output
Output the number of damaged dragons.

Examples
inputCopy
1
2
3
4
12
outputCopy
12
inputCopy
2
3
4
5
24
outputCopy
17
Note
In the first case every first dragon got punched with a frying pan. Some of the dragons
suffered from other reasons as well, but the pan alone would be enough.

In the second case dragons 1, 7, 11, 13, 17, 19 and 23 escaped unharmed.
*/
#include <iostream>
using namespace std;
#include <algorithm>
int Array[1000000];
int main()
{
    int A[4];
    int count = 0;
    int d;
    for (int j = 0; j < 4; j++)
        cin >> A[j];
    sort(A, A + 4);
    cin >> d;
    if (A[0] == 1)
    {
        cout << d;
        return 0;
    }

    for (int i = 2; i <= d; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i % A[j] == 0)
            {
                Array[i] = 1;
            }
        }
    }
    for (int i = 1; i <= d; i++)
    {
        if (Array[i] == 0)
            count++;
    }
    cout << d - count;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 30 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
2
3
4
12
Output
12
Answer
12
Checker Log
ok answer is 12
Test: #2, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
3
4
5
24
Output
17
Answer
17
Checker Log
ok answer is 17
Test: #3, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1
1
1
100000
Output
100000
Answer
100000
Checker Log
ok answer is 100000
Test: #4, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
9
8
7
6
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #5, time: 30 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
4
4
3
65437
Output
32718
Answer
32718
Checker Log
ok answer is 32718
Test: #6, time: 0 ms., memory: 3904 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
4
1
10
59392
Output
59392
Answer
59392
Checker Log
ok answer is 59392
Test: #7, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
1
8
7
44835
Output
44835
Answer
44835
Checker Log
ok answer is 44835
Test: #8, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
1
7
2
62982
Output
62982
Answer
62982
Checker Log
ok answer is 62982
Test: #9, time: 30 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
7
4
9
56937
Output
35246
Answer
35246
Checker Log
ok answer is 35246
Test: #10, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
9
8
1
75083
Output
75083
Answer
75083
Checker Log
ok answer is 75083
Test: #11, time: 30 ms., memory: 3904 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
7
7
6
69038
Output
24656
Answer
24656
Checker Log
ok answer is 24656
Test: #12, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
4
2
3
54481
Output
36320
Answer
36320
Checker Log
ok answer is 36320
Test: #13, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
4
9
8
72628
Output
28244
Answer
28244
Checker Log
ok answer is 28244
Test: #14, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
7
8
10
42357
Output
16540
Answer
16540
Checker Log
ok answer is 16540
Test: #15, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
6
4
3
60504
Output
36302
Answer
36302
Checker Log
ok answer is 36302
Test: #16, time: 30 ms., memory: 3908 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
2
3
8
21754
Output
15539
Answer
15539
Checker Log
ok answer is 15539
Test: #17, time: 0 ms., memory: 3924 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
2
10
4
39901
Output
39901
Answer
39901
Checker Log
ok answer is 39901
Test: #18, time: 30 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4
7
1
58048
Output
58048
Answer
58048
Checker Log
ok answer is 58048
Test: #19, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
10
4
6
52003
Output
21956
Answer
21956
Checker Log
ok answer is 21956
Test: #20, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
10
9
3
70149
Output
32736
Answer
32736
Checker Log
ok answer is 32736
Test: #21, time: 0 ms., memory: 3908 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
5
5
10
55592
Output
11118
Answer
11118
Checker Log
ok answer is 11118
Test: #22, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
5
2
6
49547
Output
49547
Answer
49547
Checker Log
ok answer is 49547
Test: #23, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
7
7
7
84046
Output
36019
Answer
36019
Checker Log
ok answer is 36019
Test: #24, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
2
1
8
63537
Output
63537
Answer
63537
Checker Log
ok answer is 63537
Test: #25, time: 30 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
2
10
5
81684
Output
53678
Answer
53678
Checker Log
ok answer is 53678
Test: #26, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
1
6
8
99831
Output
99831
Answer
99831
Checker Log
ok answer is 99831
Test: #27, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
9
3
3
61082
Output
20360
Answer
20360
Checker Log
ok answer is 20360
Test: #28, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
5
8
9
79228
Output
29931
Answer
29931
Checker Log
ok answer is 29931
Test: #29, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
5
5
6
89535
Output
89535
Answer
89535
Checker Log
ok answer is 89535
Test: #30, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
5
2
1
7682
Output
7682
Answer
7682
Checker Log
ok answer is 7682
Test: #31, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
4
8
8
25829
Output
9224
Answer
9224
Checker Log
ok answer is 9224
Test: #32, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
4
3
3
87079
Output
43539
Answer
43539
Checker Log
ok answer is 43539
Test: #33, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
8
4
9
5226
Output
2438
Answer
2438
Checker Log
ok answer is 2438
Test: #34, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
9
6
6
1070
Output
415
Answer
415
Checker Log
ok answer is 415
Test: #35, time: 0 ms., memory: 3912 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
10
10
10
100000
Output
10000
Answer
10000
Checker Log
ok answer is 10000
Test: #36, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1
1
1
1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #37, time: 0 ms., memory: 3908 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
10
10
10
1
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #38, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
10
1
10
10
Output
10
Answer
10
Checker Log
ok answer is 10
Test: #39, time: 0 ms., memory: 3916 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
10
1
10
100
Output
100
Answer
100
Checker Log
ok answer is 100
Test: #40, time: 0 ms., memory: 3920 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2
2
2
1
Output
0
Answer
0
Checker Log
ok answer is 0
*/