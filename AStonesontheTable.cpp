/*
A. Stones on the Table
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

Input
The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

Output
Print a single integer — the answer to the problem.

Examples
inputCopy
3
RRG
outputCopy
1
inputCopy
5
RRRRR
outputCopy
4
inputCopy
4
BRBG
outputCopy
0

*/
#include <iostream>
using namespace std;
int main()
{
    int x, check = 0;
    cin >> x;
    char str[50], c;
    for (int i = 0; i < x; i++)
    {
        cin >> str[i];
    }

    for (int i = 1; i < x; i++)
    {
        c = str[i - 1];
        if (c == str[i])
        {
            check++;
        }
    }
    cout << check ;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
RRG
Output
1
Answer
1
Checker Log
ok answer is '1'
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
RRRRR
Output
4
Answer
4
Checker Log
ok answer is '4'
Test: #3, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
BRBG
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
B
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
BG
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
BGB
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
RBBR
Output
1
Answer
1
Checker Log
ok answer is '1'
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
RGGBG
Output
1
Answer
1
Checker Log
ok answer is '1'
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
GGBRBRGGRB
Output
2
Answer
2
Checker Log
ok answer is '2'
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
GRBGGRBRGRBGGBBBBBGGGBBBBRBRGBRRBRGBBBRBBRRGBGGGRB
Output
18
Answer
18
Checker Log
ok answer is '18'
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
15
BRRBRGGBBRRRRGR
Output
6
Answer
6
Checker Log
ok answer is '6'
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
RRGBBRBRGRGBBGGRGRRR
Output
6
Answer
6
Checker Log
ok answer is '6'
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
BBGBGRBGGBRRBGRRBGGBBRBRB
Output
6
Answer
6
Checker Log
ok answer is '6'
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
GRGGGBGGRGBGGRGRBGBGBRRRRRRGRB
Output
9
Answer
9
Checker Log
ok answer is '9'
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
35
GBBGBRGBBGGRBBGBRRGGRRRRRRRBRBBRRGB
Output
14
Answer
14
Checker Log
ok answer is '14'
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40
GBBRRGBGGGRGGGRRRRBRBGGBBGGGBGBBBBBRGGGG
Output
20
Answer
20
Checker Log
ok answer is '20'
Test: #17, time: 30 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
45
GGGBBRBBRRGRBBGGBGRBRGGBRBRGBRRGBGRRBGRGRBRRG
Output
11
Answer
11
Checker Log
ok answer is '11'
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
RBGGBGGRBGRBBBGBBGRBBBGGGRBBBGBBBGRGGBGGBRBGBGRRGG
Output
17
Answer
17
Checker Log
ok answer is '17'
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
GGGBBRGGGGGRRGGRBGGRGBBRBRRBGRGBBBGBRBGRGBBGRGGBRB
Output
16
Answer
16
Checker Log
ok answer is '16'
Test: #20, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
GBGRGRRBRRRRRGGBBGBRRRBBBRBBBRRGRBBRGBRBGGRGRBBGGG
Output
19
Answer
19
Checker Log
ok answer is '19'
Test: #21, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
GRRBRBRBGR
Output
1
Answer
1
Checker Log
ok answer is '1'
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
BRBGBGRRBR
Output
1
Answer
1
Checker Log
ok answer is '1'
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
GBGBGGRRRRGRBBGRGRGR
Output
5
Answer
5
Checker Log
ok answer is '5'
Test: #24, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
RRGGRBBGBBRBGRRBRRBG
Output
6
Answer
6
Checker Log
ok answer is '6'
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
BGBRGBBBGRGBBRGBGRBBBRGGRRGRRB
Output
8
Answer
8
Checker Log
ok answer is '8'
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
BBBBGGBRBGBBGBGBGBGGGRGRRGGBBB
Output
11
Answer
11
Checker Log
ok answer is '11'
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40
GBRRGRBGBRRGBRGGGBRGBGBRGBBRRGRGGBBGBGBB
Output
9
Answer
9
Checker Log
ok answer is '9'
Test: #28, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40
BRGRGGRGGRBBRRRBRBBGGGRRGBGBBGRBBRGBRRGG
Output
13
Answer
13
Checker Log
ok answer is '13'
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
RBGBGGRRGGRGGBGBGRRBGGBGBRRBBGBBGBBBGBBRBBRBRBRGRG
Output
13
Answer
13
Checker Log
ok answer is '13'
Test: #30, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
RBRRGBGRRRBGRRBGRRGRBBRBBRRBRGGBRBRRBGGRBGGBRBRGRB
Output
12
Answer
12
Checker Log
ok answer is '12'
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
BB
Output
1
Answer
1
Checker Log
ok answer is '1'
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
Output
49
Answer
49
Checker Log
ok answer is '49'
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
RRRRRRRRGRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
Output
47
Answer
47
Checker Log
ok answer is '47'
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
RRRRRRRRRRRRGGRRRRRRRRRBRRRRRRRRRRRRRRBBRRRRRRRRRR
Output
43
Answer
43
Checker Log
ok answer is '43'
*/