/*
A. Helpful Maths
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.

Examples
inputCopy
3+2+1
outputCopy
1+2+3
inputCopy
1+1+3+1+3
outputCopy
1+1+1+3+3
inputCopy
2
outputCopy
2
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    str.erase(std::remove(str.begin(), str.end(), '+'), str.end());
    sort(str.begin(), str.end());
    for(int  i = 0; i < str.size(); i++)
    {
        if(i == str.size()-1)
        {
            cout << str[i];
        }
        else
        cout << str[i] << "+";
    }
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3+2+1
Output
1+2+3
Answer
1+2+3
Checker Log
ok "1+2+3"
Test: #2, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1+1+3+1+3
Output
1+1+1+3+3
Answer
1+1+1+3+3
Checker Log
ok "1+1+1+3+3"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
Output
2
Answer
2
Checker Log
ok "2"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+2+1+1+3
Output
1+1+2+2+3
Answer
1+1+2+2+3
Checker Log
ok "1+1+2+2+3"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+1+2+2+2+3+1+3+1+2
Output
1+1+1+2+2+2+2+2+3+3
Answer
1+1+1+2+2+2+2+2+3+3
Checker Log
ok "1+1+1+2+2+2+2+2+3+3"
Test: #6, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1+2+1+2+2+2+2+1+3+3
Output
1+1+1+2+2+2+2+2+3+3
Answer
1+1+1+2+2+2+2+2+3+3
Checker Log
ok "1+1+1+2+2+2+2+2+3+3"
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+3+3+1+2+2+2+1+1+2+1+3+2+2+3+3+2+2+3+3+3+1+1+1+3+3+3+2+1+3+2+3+2+1+1+3+3+3+1+2+2+1+2+2+1+2+1+3+1+1
Output
1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3
Answer
1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3
Checker Log
ok "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+...3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
Output
1
Answer
1
Checker Log
ok "1"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+1+2+2+1+3+2+3+1+1+2+1+2+2+3+1+1+3+3+3+2+2+3+2+2+2+1+2+1+2+3+2+2+2+1+3+1+3+3+3+1+2+1+2+2+2+2+3+1+1
Output
1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3
Answer
1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3
Checker Log
ok "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+...2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+2+1+1+1+3+1+1+3+3+2+3+1+3+1+1+3+1+1+2+2+2+2+1+2+1+2+1+1+1+3+1+3+2+3+2+3+3+1+1+1+2+3+2+1+3+1+3+2+2
Output
1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3
Answer
1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3
Checker Log
ok "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+...2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3+2+3+3+2+2+1+2+1+2+3+1+2+3+2+3+2+1+2+2+1+1+2+2+3+2+1+3+1+1+3+2+2+2+2+3+3+2+2+3+3+1+1+2+3+3+2+3+3+3
Output
1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3
Answer
1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3
Checker Log
ok "1+1+1+1+1+1+1+1+1+1+1+2+2+2+2+...3+3+3+3+3+3+3+3+3+3+3+3+3+3+3+3"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
Output
3
Answer
3
Checker Log
ok "3"
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1+1
Output
1+1
Answer
1+1
Checker Log
ok "1+1"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1+2
Output
1+2
Answer
1+2
Checker Log
ok "1+2"
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1+3
Output
1+3
Answer
1+3
Checker Log
ok "1+3"
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+1
Output
1+2
Answer
1+2
Checker Log
ok "1+2"
Test: #17, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+2
Output
2+2
Answer
2+2
Checker Log
ok "2+2"
Test: #18, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2+3
Output
2+3
Answer
2+3
Checker Log
ok "2+3"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3+1
Output
1+3
Answer
1+3
Checker Log
ok "1+3"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3+2
Output
2+3
Answer
2+3
Checker Log
ok "2+3"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3+3
Output
3+3
Answer
3+3
Checker Log
ok "3+3"
*/