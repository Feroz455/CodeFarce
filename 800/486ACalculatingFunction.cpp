/*
A. Calculating Function
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Examples
inputCopy
4
outputCopy
2
inputCopy
5
outputCopy
-3
Note
f(4) =  - 1 + 2 - 3 + 4 = 2

f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3


*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    if (n % 2 == 0)
        a = n / 2;
    else
        a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
Output
-3
Answer
-3
Checker Log
ok 1 number(s): "-3"
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000
Output
500000000
Answer
500000000
Checker Log
ok 1 number(s): "500000000"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000001
Output
-500000001
Answer
-500000001
Checker Log
ok 1 number(s): "-500000001"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000000
Output
500000000000000
Answer
500000000000000
Checker Log
ok 1 number(s): "500000000000000"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
Output
50
Answer
50
Checker Log
ok 1 number(s): "50"
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
101
Output
-51
Answer
-51
Checker Log
ok 1 number(s): "-51"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
102
Output
51
Answer
51
Checker Log
ok 1 number(s): "51"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
103
Output
-52
Answer
-52
Checker Log
ok 1 number(s): "-52"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
104
Output
52
Answer
52
Checker Log
ok 1 number(s): "52"
Test: #11, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
105
Output
-53
Answer
-53
Checker Log
ok 1 number(s): "-53"
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
106
Output
53
Answer
53
Checker Log
ok 1 number(s): "53"
Test: #13, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
107
Output
-54
Answer
-54
Checker Log
ok 1 number(s): "-54"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
108
Output
54
Answer
54
Checker Log
ok 1 number(s): "54"
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
109
Output
-55
Answer
-55
Checker Log
ok 1 number(s): "-55"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
208170109961052
Output
104085054980526
Answer
104085054980526
Checker Log
ok 1 number(s): "104085054980526"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
46017661651072
Output
23008830825536
Answer
23008830825536
Checker Log
ok 1 number(s): "23008830825536"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4018154546667
Output
-2009077273334
Answer
-2009077273334
Checker Log
ok 1 number(s): "-2009077273334"
Test: #19, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
288565475053
Output
-144282737527
Answer
-144282737527
Checker Log
ok 1 number(s): "-144282737527"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3052460231
Output
-1526230116
Answer
-1526230116
Checker Log
ok 1 number(s): "-1526230116"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
29906716
Output
14953358
Answer
14953358
Checker Log
ok 1 number(s): "14953358"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
87897701693326
Output
43948850846663
Answer
43948850846663
Checker Log
ok 1 number(s): "43948850846663"
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8240
Output
4120
Answer
4120
Checker Log
ok 1 number(s): "4120"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
577935
Output
-288968
Answer
-288968
Checker Log
ok 1 number(s): "-288968"
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
62
Output
31
Answer
31
Checker Log
ok 1 number(s): "31"
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
-1
Answer
-1
Checker Log
ok 1 number(s): "-1"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9999999999999
Output
-5000000000000
Answer
-5000000000000
Checker Log
ok 1 number(s): "-5000000000000"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000
Output
500000000000
Answer
500000000000
Checker Log
ok 1 number(s): "500000000000"
Test: #30, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99999999999999
Output
-50000000000000
Answer
-50000000000000
Checker Log
ok 1 number(s): "-50000000000000"
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999999999
Output
-500000000000000
Answer
-500000000000000
Checker Log
ok 1 number(s): "-500000000000000"
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
42191359342
Output
21095679671
Answer
21095679671
Checker Log
ok 1 number(s): "21095679671"
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000000000000
Output
50000000000000
Answer
50000000000000
Checker Log
ok 1 number(s): "50000000000000"
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
145645214654154
Output
72822607327077
Answer
72822607327077
Checker Log
ok 1 number(s): "72822607327077"
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4294967296
Output
2147483648
Answer
2147483648
Checker Log
ok 1 number(s): "2147483648"
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3037000499
Output
-1518500250
Answer
-1518500250
Checker Log
ok 1 number(s): "-1518500250"
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000000000001
Output
-5000000000001
Answer
-5000000000001
Checker Log
ok 1 number(s): "-5000000000001"
Test: #38, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000017040846
Output
50000008520423
Answer
50000008520423
Checker Log
ok 1 number(s): "50000008520423"
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98979894985999
Output
-49489947493000
Answer
-49489947493000
Checker Log
ok 1 number(s): "-49489947493000"
*/