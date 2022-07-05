/*
A. Expression
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions.
On the last class the teacher wrote three positive integers a, b, c on the blackboard. The task was
to insert signs of operations '+' and '*', and probably brackets between the numbers so that the
value of the resulting expression is as large as possible. Let's consider an example: assume that
the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
Note that you can insert operation signs only between a and b, and between b and c, that is, you cannot
swap integers. For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9.

Your task is: given a, b and c print the maximum value that you can get.

Input
The input contains three integers a, b and c, each on a single line (1 ≤ a, b, c ≤ 10).

Output
Print the maximum value of the expression that you can obtain.

Examples
inputCopy
1
2
3
outputCopy
9
inputCopy
2
10
3
outputCopy
60
*/
#include <iostream>
int Array[10];
using namespace std;
int main()
{
    int a, b, c, value[10], result;
    cin >> a >> b >> c;
    value[0] = a + b * c;
    value[1] = a * (b + c);
    value[2] = a * b * c;
    value[3] = (a + b) * c;
    value[4] = (a + b + c);
    result = value[0];
    for (int i = 1; i <= 4; i++)
    {
        // cout << value[i] << endl;

        if (result < value[i])
            result = value[i];
    }
    cout << result;

    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
2
3
Output
9
Answer
9
Checker Log
ok 1 number(s): "9"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
10
3
Output
60
Answer
60
Checker Log
ok 1 number(s): "60"
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1
1
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
2
1
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #5, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
10
10
Output
1000
Answer
1000
Checker Log
ok 1 number(s): "1000"
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
1
3
Output
20
Answer
20
Checker Log
ok 1 number(s): "20"
Test: #7, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1
5
Output
20
Answer
20
Checker Log
ok 1 number(s): "20"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
7
1
Output
48
Answer
48
Checker Log
ok 1 number(s): "48"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
8
3
Output
27
Answer
27
Checker Log
ok 1 number(s): "27"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
7
2
Output
126
Answer
126
Checker Log
ok 1 number(s): "126"
Test: #11, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1
10
Output
20
Answer
20
Checker Log
ok 1 number(s): "20"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
1
1
Output
18
Answer
18
Checker Log
ok 1 number(s): "18"
Test: #13, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
5
6
Output
300
Answer
300
Checker Log
ok 1 number(s): "300"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
9
7
Output
504
Answer
504
Checker Log
ok 1 number(s): "504"
Test: #15, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
2
10
Output
80
Answer
80
Checker Log
ok 1 number(s): "80"
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
8
3
Output
48
Answer
48
Checker Log
ok 1 number(s): "48"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
5
7
Output
105
Answer
105
Checker Log
ok 1 number(s): "105"
Test: #18, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
10
1
Output
12
Answer
12
Checker Log
ok 1 number(s): "12"
Test: #19, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2
2
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
Test: #20, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
6
1
Output
35
Answer
35
Checker Log
ok 1 number(s): "35"
Test: #21, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
1
1
Output
20
Answer
20
Checker Log
ok 1 number(s): "20"
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
6
1
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
9
1
Output
11
Answer
11
Checker Log
ok 1 number(s): "11"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
1
2
Output
6
Answer
6
Checker Log
ok 1 number(s): "6"
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
6
1
Output
14
Answer
14
Checker Log
ok 1 number(s): "14"
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
2
1
Output
27
Answer
27
Checker Log
ok 1 number(s): "27"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
9
2
Output
20
Answer
20
Checker Log
ok 1 number(s): "20"
Test: #28, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
3
1
Output
5
Answer
5
Checker Log
ok 1 number(s): "5"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
1
1
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
*/