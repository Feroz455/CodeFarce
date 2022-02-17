/*
A. Beautiful Matrix
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.

Examples
inputCopy
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
outputCopy
3
inputCopy
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
outputCopy
1
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int arr[5][5], check = 0, a = 0, b = 0, i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(2 - a) + abs(2 - b) << "\n";
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 1
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #5, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 1 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
1 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 1 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
1 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 1 0
0 0 0 0 0
0 0 0 0 0
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
1 0 0 0 0
0 0 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #20, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 1 0
0 0 0 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #21, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
1 0 0 0 0
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #24, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 1 0
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
*/
