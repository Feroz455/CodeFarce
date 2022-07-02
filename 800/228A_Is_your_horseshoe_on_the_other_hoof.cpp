/*
A. Is your horseshoe on the other hoof?
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Valera the Horse is going to the party with friends. He has been following the 
fashion trends for a while, and he knows that it is very popular to wear all 
horseshoes of different color. Valera has got four horseshoes left from the 
last year, but maybe some of them have the same color. In this case he needs 
to go to the store and buy some few more horseshoes, not to lose face in front 
of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera 
has enough money to buy any four of them. However, in order to save the money, 
he would like to spend as little money as possible, so you need to help Valera 
and determine what is the minimum number of horseshoes he needs to buy to wear 
four horseshoes of different colors to a party.

Input
The first line contains four space-separated integers s1, s2, s3, s4 (1 ≤ s1, s2, s3, s4 ≤ 109) — 
the colors of horseshoes Valera has.

Consider all possible colors indexed with integers.

Output
Print a single integer — the minimum number of horseshoes Valera needs to buy.

Examples
inputCopy
1 7 3 3
outputCopy
1
inputCopy
7 7 7 7
outputCopy
3

*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int s[4], ck;
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    sort(s, s + 4);
    for (int i = 1; i < 4; i++)
    {
        if (s[i] == s[i - 1])
            ck++;
    }
    cout << ck;

    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 7 3 3
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #2, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7 7 7 7
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
81170865 673572653 756938629 995577259
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3491663 217797045 522540872 715355328
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #5, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
251590420 586975278 916631563 586975278
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
259504825 377489979 588153796 377489979
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
652588203 931100304 931100304 652588203
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
391958720 651507265 391958720 651507265
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
90793237 90793237 90793237 90793237
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
551651653 551651653 551651653 551651653
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #11, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
156630260 609654355 668943582 973622757
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #12, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
17061017 110313588 434481173 796661222
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
24975422 256716298 337790533 690960249
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
255635360 732742923 798648949 883146723
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
133315691 265159773 734556507 265159773
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
28442865 741657755 978106882 978106882
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
131245479 174845575 497483467 131245479
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
139159884 616215581 958341883 616215581
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
147784432 947653080 947653080 947653080
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
94055790 756126496 756126496 94055790
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
240458500 511952208 240458500 511952208
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
681828506 972810624 972810624 681828506
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #23, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
454961014 454961014 454961014 454961014
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #24, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
915819430 915819430 915819430 915819430
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
671645142 671645142 671645142 671645142
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
132503558 132503558 132503558 132503558
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5 5 999999 6
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #28, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1 2 5
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 1 2 3
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1 3 5
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 1 3 3
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 2 2 1
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3 1 1 1
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #34, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1 2 2 2
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
close
*/