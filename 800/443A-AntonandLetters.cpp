/*
A. Anton and Letters
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

Input
The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

Output
Print a single number — the number of distinct letters in Anton's set.

Examples
inputCopy
{a, b, c}
outputCopy
3
inputCopy
{b, a, b, a}
outputCopy
2
inputCopy
{}
outputCopy
0
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i = 0, result = 1;
    char arr[1000], temp;
    cin >> temp;
    while (temp != '}')
    {

        cin >> temp;
        if ((temp == ',') || (temp == '}') || temp == ' ')
            continue;
        else
        {
            arr[i] = temp;
            i++;
        }
    }
    if (i == 0)
    {
        cout << 0;
        return 0;
    }
    sort(arr, arr + i);
    for (int j = 1; j < i; j++)
    {
        if (arr[j - 1] != arr[j])
            result++;
    }
    cout << result;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, b, c}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{b, a, b, a}
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{}
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, a, c, b, b, b, c, c, c, c}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, c, b, b}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, b}
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a}
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{b, a, b, a, b, c, c, b, c, b}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{e, g, c, e}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #10, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a}
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, a, b}
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{w, t, r, y, s, l, r, g, k, o, p, l, y, l, m, m, l, e, r, k, l, x, b, p, x, y, q, e, n, a, b, k, q, y, x, m, z, n, g, w, l, g, d, k, v, f, w, c, n, c, i, f, r, q, i, z, m, l, g, m, v, z, r, o, s, a, s, r, g, z, f, j, a, f, z, d, d, w, o, b, l, u, q, n, n, p, s, w, v, h, q, s, j, n, p, q, l, b, m, e, d, d, g, t, j, n, g, w, b, g, t, q, t, a, p, h, d, b, s, d, m, s, w, o, g, y, w, v, r, j, x, w, f, t, g, s, u, c, y, i, u, d, z, j, d, w, d, b, p, v, n, s, d, g, e, m, s, j, n, z, w, z, x, e, v, g, r, d, e, n, ...
Output
26
Answer
26
Checker Log
ok 1 number(s): "26"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, b, b, b, a, b, a, a, a, a, a, a, b, a, b, a, a, a, a, a, b, a, b, a}
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{j, u, a, c, f, w, e, w, x, t, h, p, v, n, i, l, x, n, i, b, u, c, a, a}
Output
16
Answer
16
Checker Log
ok 1 number(s): "16"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{x, i, w, c, p, e, h, z, k, i}
Output
9
Answer
9
Checker Log
ok 1 number(s): "9"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{t, k, o, x, r, d, q, j, k, e, z, w, y, r, z, s, s, e, s, b, k, i}
Output
15
Answer
15
Checker Log
ok 1 number(s): "15"
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, ...
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{c, f, d, i, a, g, a, d, f, e, k, i, k, h, h, e, g, b, h, j, c, g, k, i, c, h, k, a, f, g, f, c, d, b, a, d, i, a, a, k, a, c, j, k, i, i, e, j, i, i, a, e, f, f, d, c, k, k, h, a, k, i, d, h, g, e, b, c, g, j, i, j, j, i, c, d, i, i, i, f, b, g, e, b, c, e, a, b, g, g, a, f, i, c, e, d, f, d, k, b, i, g, e, k, c, h, k, h, g, j, e, g, c, c, e, a, b, e, h, g, f, i, k, a, k, f, k, c, g, e, i, b, c, c, a, i, g, a, c, h, g, j, a, c, h, e, k, c, a, k, j, g, c, h, j, g, f, c, k, k, e, j, i, h, j, k, f, b, k, k, ...
Output
11
Answer
11
Checker Log
ok 1 number(s): "11"
Test: #19, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{y}
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{x}
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #21, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{b, z, a, z}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{z}
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #23, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, z}
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, b, z}
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, ...
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{s, q, z, r, t, a, b, h, j, i, o, z, r, q}
Output
11
Answer
11
Checker Log
ok 1 number(s): "11"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, ...
Output
26
Answer
26
Checker Log
ok 1 number(s): "26"
*/