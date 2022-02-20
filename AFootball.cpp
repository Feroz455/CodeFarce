/*
A. Football
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

Input
The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

Output
Print "YES" if the situation is dangerous. Otherwise, print "NO".

Examples
inputCopy
001001
outputCopy
NO
inputCopy
1000000001
outputCopy
YES
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int check = 0, i = 1, j, num;
    char c1, c2;
    cin >> str;
    num = str.size();
    while (num >= 0)
    {
        c1 = str[i - 1];
        c2 = str[i];
        if (c1 == c2)
        {
            check++;
            if (check >= 6)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            check = 0;
        }
        i += 1;
        num--;
     }
     cout << "NO";
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
001001
Output
NO
Answer
NO
Checker Log
ok NO
Test: #2, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000001
Output
YES
Answer
YES
Checker Log
ok YES
Test: #3, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
00100110111111101
Output
YES
Answer
YES
Checker Log
ok YES
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
11110111111111111
Output
YES
Answer
YES
Checker Log
ok YES
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
01
Output
NO
Answer
NO
Checker Log
ok NO
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10100101
Output
NO
Answer
NO
Checker Log
ok NO
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1010010100000000010
Output
YES
Answer
YES
Checker Log
ok YES
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
101010101
Output
NO
Answer
NO
Checker Log
ok NO
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
000000000100000000000110101100000
Output
YES
Answer
YES
Checker Log
ok YES
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100001000000110101100000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100001000011010110000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
010
Output
NO
Answer
NO
Checker Log
ok NO
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10101011111111111111111111111100
Output
YES
Answer
YES
Checker Log
ok YES
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1001101100
Output
NO
Answer
NO
Checker Log
ok NO
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1001101010
Output
NO
Answer
NO
Checker Log
ok NO
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1111100111
Output
NO
Answer
NO
Checker Log
ok NO
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
00110110001110001111
Output
NO
Answer
NO
Checker Log
ok NO
Test: #18, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
11110001001111110001
Output
NO
Answer
NO
Checker Log
ok NO
Test: #19, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10001111001011111101
Output
NO
Answer
NO
Checker Log
ok NO
Test: #20, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000010100000001000110001010100001001001010011
Output
YES
Answer
YES
Checker Log
ok YES
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
01111011111010111100101100001011001010111110000010
Output
NO
Answer
NO
Checker Log
ok NO
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
00100000100100101110011001011011101110110110010100
Output
NO
Answer
NO
Checker Log
ok NO
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10110100110001001011110101110010100010000000000100101010111110111110100011
Output
YES
Answer
YES
Checker Log
ok YES
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
00011101010101111001011011001101101011111101000010100000111000011100101011
Output
NO
Answer
NO
Checker Log
ok NO
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
01110000110100110101110100111000101101011101011110110100100111100001110111
Output
NO
Answer
NO
Checker Log
ok NO
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
11110110011000100111100111101101011111110100010101011011111101110110110111
Output
YES
Answer
YES
Checker Log
ok YES
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100100010101110010001011001110100011100010011110100101100011010001001010001001101111001100
Output
NO
Answer
NO
Checker Log
ok NO
Test: #28, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
111110010001011010010011111100110110001111000010100011011100111101111101110010101111011110000001010
Output
NO
Answer
NO
Checker Log
ok NO
Test: #29, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
111110111100010100000100001010111011101011000111011011011010110010100010000101011111000011010011110
Output
NO
Answer
NO
Checker Log
ok NO
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1011110110111010110111111010010010100011111011110000011000110010011110111010110100011010100010111000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0010100111100010110110000011100111110100111110001010000100111111111010111100101101010101001011010110
Output
YES
Answer
YES
Checker Log
ok YES
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1111010100010100101011101100101101110011000010100010000001111100010011100101010001101111000001011000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0101100011001110001110100111100011010101011000000000110110010010111100101111010111100011101100100101
Output
YES
Answer
YES
Checker Log
ok YES
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0001101110011101110000000010011111101001101111100001001010110000110001100000010001111011011110001101
Output
YES
Answer
YES
Checker Log
ok YES
Test: #35, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000010000100000100010000100001000010000100001000010000100001000010000100001000010000100001000010000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #36, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000
Output
YES
Answer
YES
Checker Log
ok YES
Test: #37, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001
Output
YES
Answer
YES
Checker Log
ok YES
Test: #38, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1111111111111111111111111111111111111111011111111111111111111111111111111111111111111111111111111111
Output
YES
Answer
YES
Checker Log
ok YES
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10100101000
Output
NO
Answer
NO
Checker Log
ok NO
Test: #40, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
11110111011101
Output
NO
Answer
NO
Checker Log
ok NO
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000000
Output
YES
Answer
YES
Checker Log
ok YES
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
00000001
Output
YES
Answer
YES
Checker Log
ok YES
Test: #43, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
01111111
Output
YES
Answer
YES
Checker Log
ok YES
Test: #44, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
11111110
Output
YES
Answer
YES
Checker Log
ok YES
*/