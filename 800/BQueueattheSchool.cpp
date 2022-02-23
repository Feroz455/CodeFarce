/*
B. Queue at the School
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.

Input
The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".

Output
Print string a, which describes the arrangement after t seconds. If the i-th position has a boy after the needed time, then the i-th character a must equal "B", otherwise it must equal "G".

Examples
inputCopy
5 1
BGGBG
outputCopy
GBGGB
inputCopy
5 2
BGGBG
outputCopy
GGBGB
inputCopy
4 1
GGGB
outputCopy
GGGB

*/
#include <iostream>
using namespace std;
void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    char str[1000];
    int student, time, check = 0;
    cin >> student >> time;
    for (int i = 0; i < student; i++)
    {
        cin >> str[i];
    }

    while (time)
    {
        for (int i = 0; i < student; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                swap(str[i], str[i + 1]);
                i++;
            }
        }
        time--;
    }
    for (int i = 0; i < student; i++)
    {
        cout <<  str[i];
    }
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5 1
BGGBG
Output
GBGGB
Answer
GBGGB
Checker Log
ok "GBGGB"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5 2
BGGBG
Output
GGBGB
Answer
GGBGB
Checker Log
ok "GGBGB"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4 1
GGGB
Output
GGGB
Answer
GGGB
Checker Log
ok "GGGB"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 1
BB
Output
BB
Answer
BB
Checker Log
ok "BB"
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 1
BG
Output
GB
Answer
GB
Checker Log
ok "GB"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6 2
BBGBBG
Output
GBBGBB
Answer
GBBGBB
Checker Log
ok "GBBGBB"
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8 3
BBGBGBGB
Output
GGBGBBBB
Answer
GGBGBBBB
Checker Log
ok "GGBGBBBB"
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10 3
BBGBBBBBBG
Output
GBBBBBGBBB
Answer
GBBBBBGBBB
Checker Log
ok "GBBBBBGBBB"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
22 7
GBGGBGGGGGBBBGGBGBGBBB
Output
GGGGGGGGBGGBGGBBBBBBBB
Answer
GGGGGGGGBGGBGGBBBBBBBB
Checker Log
ok "GGGGGGGGBGGBGGBBBBBBBB"
Test: #10, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 4
GBBGBBBGGGGGBBGGBBBBGGGBBBGBBBGGBGGBGBBBGGBGGBGGBG
Output
GGBGBGBGBGBGGGBBGBGBGBGBBBGBGBGBGBGBGBGBGBGBGGBGBB
Answer
GGBGBGBGBGBGGGBBGBGBGBGBBBGBGBGBGBGBGBGBGBGBGGBGBB
Checker Log
ok "GGBGBGBGBGBGGGBBGBGBGBGBBBGBGBGBGBGBGBGBGBGBGGBGBB"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 8
GGGGBGGBGGGBGBBBGGGGGGGGBBGBGBGBBGGBGGBGGGGGGGGBBG
Output
GGGGGGGGGGGGBGGBGBGBGBGBGGGGGGBGBGBGBGBGBGGBGGBGBB
Answer
GGGGGGGGGGGGBGGBGBGBGBGBGGGGGGBGBGBGBGBGBGGBGGBGBB
Checker Log
ok "GGGGGGGGGGGGBGGBGBGBGBGBGGGGGGBGBGBGBGBGBGGBGGBGBB"
Test: #12, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 30
BGGGGGGBGGBGBGGGGBGBBGBBBGGBBBGBGBGGGGGBGBBGBGBGGG
Output
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBB
Answer
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBBBBB"
Test: #13, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20 20
BBGGBGGGGBBBGBBGGGBB
Output
GGGGGGGGGGBBBBBBBBBB
Answer
GGGGGGGGGGBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGBBBBBBBBBB"
Test: #14, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
27 6
GBGBGBGGGGGGBGGBGGBBGBBBGBB
Output
GGGGGGGBGBGBGGGGGBGBBBBBBBB
Answer
GGGGGGGBGBGBGGGGGBGBBBBBBBB
Checker Log
ok "GGGGGGGBGBGBGGGGGBGBBBBBBBB"
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
46 11
BGGGGGBGBGGBGGGBBGBBGBBGGBBGBBGBGGGGGGGBGBGBGB
Output
GGGGGGGGGGGBGGGGGBBGBGBGBGBGBGBGBGBGBGBGBBBBBB
Answer
GGGGGGGGGGGBGGGGGBBGBGBGBGBGBGBGBGBGBGBGBBBBBB
Checker Log
ok "GGGGGGGGGGGBGGGGGBBGBGBGBGBGBGBGBGBGBGBGBBBBBB"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 6
BGGBBBBGGBBBBBBGGBGBGBBBBGBBBBBBGBBBBBBBBBBBBBBBBB
Output
GGGGBBBBBGBGBGBGBBBGBBBBBBGBBBBBBBBBBBBBBBBBBBBBBB
Answer
GGGGBBBBBGBGBGBGBBBGBBBBBBGBBBBBBBBBBBBBBBBBBBBBBB
Checker Log
ok "GGGGBBBBBGBGBGBGBBBGBBBBBBGBBBBBBBBBBBBBBBBBBBBBBB"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 10
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Output
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Answer
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Checker Log
ok "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 8
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
Output
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
Answer
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
Checker Log
ok "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 10
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGB
Output
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGBBBBBBBBBBB
Answer
BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGBBBBBBBBBBB
Checker Log
ok "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGBBBBBBBBBBB"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 13
GGGBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
Output
GGGGGGGGGGGGGGGGBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
Answer
GGGGGGGGGGGGGGGGBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
Checker Log
ok "GGGGGGGGGGGGGGGGBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG"
Test: #21, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1
B
Output
B
Answer
B
Checker Log
ok "B"
Test: #22, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1
G
Output
G
Answer
G
Checker Log
ok "G"
Test: #23, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 50
B
Output
B
Answer
B
Checker Log
ok "B"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 50
G
Output
G
Answer
G
Checker Log
ok "G"
Test: #25, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 50
BBBBBBBBGGBBBBBBGBBBBBBBBBBBGBBBBBBBBBBBBBBGBBBBBB
Output
GGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Answer
GGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Checker Log
ok "GGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 50
GGBBGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBGGGGGGBG
Output
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBB
Answer
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBB
Checker Log
ok "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBB"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6 3
GGBBBG
Output
GGGBBB
Answer
GGGBBB
Checker Log
ok "GGGBBB"
Test: #28, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26 3
GBBGBBBBBGGGBGBGGGBGBGGBBG
Output
GGBBBBGBGBGBGGGBGBGGGBGBBB
Answer
GGBBBBGBGBGBGGGBGBGGGBGBBB
Checker Log
ok "GGBBBBGBGBGBGGGBGBGGGBGBBB"
Test: #29, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
46 3
GGBBGGGGBBGBGBBBBBGGGBGGGBBGGGBBBGGBGGBBBGBGBB
Output
GGGGBGBGGGBBBBBGBGBGBGGGBGGBGBGBGBGBGBGBGBBBBB
Answer
GGGGBGBGGGBBBBBGBGBGBGGGBGGBGBGBGBGBGBGBGBBBBB
Checker Log
ok "GGGGBGBGGGBBBBBGBGBGBGGGBGGBGBGBGBGBGBGBGBBBBB"
Test: #30, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
44 8
BGBBBBBBBBBGGBBGBGBGGBBBBBGBBGBBBBBBBBBGBBGB
Output
GBBGBGBGBGBGBGBBBBGBBGBBBBBBBBBGBBGBBBBBBBBB
Answer
GBBGBGBGBGBGBGBBBBGBBGBBBBBBBBBGBBGBBBBBBBBB
Checker Log
ok "GBBGBGBGBGBGBGBBBBGBBGBBBBBBBBBGBBGBBBBBBBBB"
Test: #31, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20 20
BBGGBGGGGBBBGBBGGGBB
Output
GGGGGGGGGGBBBBBBBBBB
Answer
GGGGGGGGGGBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGBBBBBBBBBB"
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30 25
BGGBBGBGGBGBGBBGBGGGGBGBGGBBBB
Output
GGGGGGGGGGGGGGGBBBBBBBBBBBBBBB
Answer
GGGGGGGGGGGGGGGBBBBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGGGGGGBBBBBBBBBBBBBBB"
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
17 42
BBGBGBGGGGGGBBGGG
Output
GGGGGGGGGGGBBBBBB
Answer
GGGGGGGGGGGBBBBBB
Checker Log
ok "GGGGGGGGGGGBBBBBB"
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30 50
BGGBBGGGGGGGGBBGGGBBGGBBBGBBGG
Output
GGGGGGGGGGGGGGGGGGBBBBBBBBBBBB
Answer
GGGGGGGGGGGGGGGGGGBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGGGGGGGGGBBBBBBBBBBBB"
Test: #35, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
31 33
BBGGBBGGBGBBBBGGBGBBBGBGGBBGBBB
Output
GGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB
Answer
GGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGGGBBBBBBBBBBBBBBBBBBB"
Test: #36, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 2
BG
Output
GB
Answer
GB
Checker Log
ok "GB"
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8 8
GGGBGGBB
Output
GGGGGBBB
Answer
GGGGGBBB
Checker Log
ok "GGGGGBBB"
Test: #38, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
34 34
BGGBBBBGGBBGBGGGGGGBBGGGGGBGGBGGGB
Output
GGGGGGGGGGGGGGGGGGGGGBBBBBBBBBBBBB
Answer
GGGGGGGGGGGGGGGGGGGGGBBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGGGGGGGGGGGGBBBBBBBBBBBBB"
Test: #39, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
34 20
BBBBGBGGGBGGGBGBGGBBBBGGBBGGGBGBBG
Output
GGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBB
Answer
GGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGGGGGGGGBBBBBBBBBBBBBBBBB"
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 50
BBGBBBBBBBBBBBBGBBBGBBBBBBBGBBBBBBGBBBGBBGBBGBBBGG
Output
GGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Answer
GGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
Checker Log
ok "GGGGGGGGGGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10 10
GGGGGGGGGG
Output
GGGGGGGGGG
Answer
GGGGGGGGGG
Checker Log
ok "GGGGGGGGGG"
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10 10
BBBBBBBBBB
Output
BBBBBBBBBB
Answer
BBBBBBBBBB
Checker Log
ok "BBBBBBBBBB"
Test: #43, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10 10
BGBGBGBGBG
Output
GGGGGBBBBB
Answer
GGGGGBBBBB
Checker Log
ok "GGGGGBBBBB"
Test: #44, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1
B
Output
B
Answer
B
Checker Log
ok "B"
*/