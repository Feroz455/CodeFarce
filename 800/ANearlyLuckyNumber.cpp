/*
A. Nearly Lucky Number
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
40047
outputCopy
NO
inputCopy
7747774
outputCopy
YES
inputCopy
1000000000000000000
outputCopy
NO
Note
In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

In the third sample there are no lucky digits, so the answer is "NO".
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int check = 0;
    char c;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        c = str[i];
        if (c == '4' || c == '7')
        {
            check++;
        }
    }
    if (check == 4|| check == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
/*→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40047
Output
NO
Answer
NO
Checker Log
ok NO
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7747774
Output
YES
Answer
YES
Checker Log
ok YES
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000000000000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
Output
NO
Answer
NO
Checker Log
ok NO
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
Output
NO
Answer
NO
Checker Log
ok NO
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
474404774
Output
NO
Answer
NO
Checker Log
ok NO
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4744000695826
Output
YES
Answer
YES
Checker Log
ok YES
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000000004744744
Output
YES
Answer
YES
Checker Log
ok YES
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
446486416781684178
Output
YES
Answer
YES
Checker Log
ok YES
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999
Output
NO
Answer
NO
Checker Log
ok NO
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7777
Output
YES
Answer
YES
Checker Log
ok YES
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
87414417444
Output
NO
Answer
NO
Checker Log
ok NO
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
111222333444555667
Output
YES
Answer
YES
Checker Log
ok YES
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
NO
Answer
NO
Checker Log
ok NO
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4700
Output
NO
Answer
NO
Checker Log
ok NO
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3794555488744477
Output
NO
Answer
NO
Checker Log
ok NO
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
444444444444444444
Output
NO
Answer
NO
Checker Log
ok NO
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
474447447774444774
Output
NO
Answer
NO
Checker Log
ok NO
Test: #19, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
777777777777777
Output
NO
Answer
NO
Checker Log
ok NO
Test: #20, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
34777745021000000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #21, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
963
Output
NO
Answer
NO
Checker Log
ok NO
Test: #22, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
855474448854788540
Output
NO
Answer
NO
Checker Log
ok NO
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999999999999994744
Output
YES
Answer
YES
Checker Log
ok YES
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
400000000474
Output
YES
Answer
YES
Checker Log
ok YES
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
123456789123456789
Output
YES
Answer
YES
Checker Log
ok YES
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
740577777584945874
Output
NO
Answer
NO
Checker Log
ok NO
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7777777
Output
YES
Answer
YES
Checker Log
ok YES
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4444000111222333
Output
YES
Answer
YES
Checker Log
ok YES
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9847745885202111
Output
YES
Answer
YES
Checker Log
ok YES
Test: #30, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
123456000000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4744447444444
Output
NO
Answer
NO
Checker Log
ok NO
Test: #32, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7477
Output
YES
Answer
YES
Checker Log
ok YES
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4747477
Output
YES
Answer
YES
Checker Log
ok YES
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
777777777444444444
Output
NO
Answer
NO
Checker Log
ok NO
*/