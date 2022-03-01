/*
A. Beautiful Year
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year
after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is 
strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. 
It is guaranteed that the answer exists.

Examples
inputCopy
1987
outputCopy
2013
inputCopy
2013
outputCopy
2014

*/
#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1987
Output
2013
Answer
2013
Checker Log
ok 1 number(s): "2013"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2013
Output
2014
Answer
2014
Checker Log
ok 1 number(s): "2014"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
Output
1023
Answer
1023
Checker Log
ok 1 number(s): "1023"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1001
Output
1023
Answer
1023
Checker Log
ok 1 number(s): "1023"
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1234
Output
1235
Answer
1235
Checker Log
ok 1 number(s): "1235"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5555
Output
5601
Answer
5601
Checker Log
ok 1 number(s): "5601"
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9000
Output
9012
Answer
9012
Checker Log
ok 1 number(s): "9012"
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1111
Output
1203
Answer
1203
Checker Log
ok 1 number(s): "1203"
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8999
Output
9012
Answer
9012
Checker Log
ok 1 number(s): "9012"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4572
Output
4573
Answer
4573
Checker Log
ok 1 number(s): "4573"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6666
Output
6701
Answer
6701
Checker Log
ok 1 number(s): "6701"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2001
Output
2013
Answer
2013
Checker Log
ok 1 number(s): "2013"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3000
Output
3012
Answer
3012
Checker Log
ok 1 number(s): "3012"
Test: #14, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7712
Output
7801
Answer
7801
Checker Log
ok 1 number(s): "7801"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8088
Output
8091
Answer
8091
Checker Log
ok 1 number(s): "8091"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1594
Output
1596
Answer
1596
Checker Log
ok 1 number(s): "1596"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6016
Output
6017
Answer
6017
Checker Log
ok 1 number(s): "6017"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8800
Output
8901
Answer
8901
Checker Log
ok 1 number(s): "8901"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3331
Output
3401
Answer
3401
Checker Log
ok 1 number(s): "3401"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5090
Output
5091
Answer
5091
Checker Log
ok 1 number(s): "5091"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2342
Output
2345
Answer
2345
Checker Log
ok 1 number(s): "2345"
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2334
Output
2340
Answer
2340
Checker Log
ok 1 number(s): "2340"
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1123
Output
1203
Answer
1203
Checker Log
ok 1 number(s): "1203"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8989
Output
9012
Answer
9012
Checker Log
ok 1 number(s): "9012"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8977
Output
9012
Answer
9012
Checker Log
ok 1 number(s): "9012"
Test: #26, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6869
Output
6870
Answer
6870
Checker Log
ok 1 number(s): "6870"
Test: #27, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8999
Output
9012
Answer
9012
Checker Log
ok 1 number(s): "9012"
*/