/*
A. Puzzles
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The end of the school year is near and Ms. Manana, the teacher, will soon have to say goodbye
to a yet another class. She decided to prepare a goodbye present for her n students and give
each of them a jigsaw puzzle (which, as wikipedia states, is a tiling puzzle that requires the
assembly of numerous small, often oddly shaped, interlocking and tessellating pieces).

The shop assistant told the teacher that there are m puzzles in the shop, but they might differ
in difficulty and size. Specifically, the first jigsaw puzzle consists of f1 pieces, the second
one consists of f2 pieces and so on.

Ms. Manana doesn't want to upset the children, so she decided that the difference between the numbers
of pieces in her presents must be as small as possible. Let A be the number of pieces in the largest
puzzle that the teacher buys and B be the number of pieces in the smallest such puzzle. She wants to
choose such n puzzles that A - B is minimum possible. Help the teacher and find the least possible
value of A - B.

Input
The first line contains space-separated integers n and m (2 ≤ n ≤ m ≤ 50). The second line contains
m space-separated integers f1, f2, ..., fm (4 ≤ fi ≤ 1000) — the quantities of pieces in the puzzles
sold in the shop.

Output
Print a single integer — the least possible difference the teacher can obtain.

Examples
inputCopy
4 6
10 12 10 7 5 22
outputCopy
5
Note
Sample 1. The class has 4 students. The shop sells 6 puzzles. If Ms. Manana buys the first four
puzzles consisting of 10, 12, 10 and 7 pieces correspondingly, then the difference between the
sizes of the largest and the smallest puzzle will be equal to 5. It is impossible to obtain a
smaller difference. Note that the teacher can also buy puzzles 1, 3, 4 and 5 to obtain the difference 5.
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int n, m, puzzle[100], dif, start;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> puzzle[i];
    }
    sort(puzzle, puzzle + m);

    dif = puzzle[n - 1] - puzzle[0];

    for (int i = 1; (i + n) <= m; i++)
    {
        // cout << puzzle[i + n - 1] << " - " << puzzle[i] << "\n";
        if (dif >= puzzle[i + n - 1] - puzzle[i])
        {
            dif = puzzle[i + n - 1] - puzzle[i];
            // cout << dif << " ";
        }
    }
    cout << dif;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4 6
10 12 10 7 5 22
Output
5
Answer
5
Checker Log
ok answer is '5'
Test: #2, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 2
4 4
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 10
4 5 6 7 8 9 10 11 12 12
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4 5
818 136 713 59 946
Output
759
Answer
759
Checker Log
ok answer is '759'
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3 20
446 852 783 313 549 965 40 88 86 617 479 118 768 34 47 826 366 957 463 903
Output
13
Answer
13
Checker Log
ok answer is '13'
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 25
782 633 152 416 432 825 115 97 386 357 836 310 530 413 354 373 847 882 913 682 729 582 671 674 94
Output
3
Answer
3
Checker Log
ok answer is '3'
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4 25
226 790 628 528 114 64 239 279 619 39 894 763 763 847 525 93 882 697 999 643 650 244 159 884 190
Output
31
Answer
31
Checker Log
ok answer is '31'
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 50
971 889 628 39 253 157 925 694 129 516 660 272 738 319 611 816 142 717 514 392 41 105 132 676 958 118 306 768 600 685 103 857 704 346 857 309 23 718 618 161 176 379 846 834 640 468 952 878 164 997
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25 50
582 146 750 905 313 509 402 21 488 512 32 898 282 64 579 869 37 996 377 929 975 697 666 837 311 205 116 992 533 298 648 268 54 479 792 595 152 69 267 417 184 433 894 603 988 712 24 414 301 176
Output
412
Answer
412
Checker Log
ok answer is '412'
Test: #10, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
49 50
58 820 826 960 271 294 473 102 925 318 729 672 244 914 796 646 868 6 893 882 726 203 528 498 271 195 355 459 721 680 547 147 631 116 169 804 145 996 133 559 110 257 771 476 576 251 607 314 427 886
Output
938
Answer
938
Checker Log
ok answer is '938'
Test: #11, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50 50
374 573 323 744 190 806 485 247 628 336 491 606 702 321 991 678 337 579 86 240 993 208 668 686 855 205 363 177 719 249 896 919 782 434 59 647 787 996 286 216 636 212 546 903 958 559 544 126 608 993
Output
937
Answer
937
Checker Log
ok answer is '937'
Test: #12, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6 50
6 8 7 8 5 4 4 5 7 8 6 5 7 4 7 7 7 8 6 4 6 6 8 8 7 7 8 7 5 8 5 4 4 7 8 4 4 6 6 6 8 7 4 7 6 6 5 8 4 7
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
37 50
14 5 11 17 8 20 19 16 20 11 17 20 16 9 14 14 13 18 11 20 8 8 8 5 19 17 6 18 10 20 9 7 12 6 14 17 4 4 10 13 7 4 11 6 20 19 12 12 15 19
Output
12
Answer
12
Checker Log
ok answer is '12'
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40 50
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
Output
0
Answer
0
Checker Log
ok answer is '0'
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40 50
17 20 43 26 41 37 14 8 30 35 30 24 43 8 42 9 41 50 41 35 27 32 35 43 28 36 31 16 5 7 23 16 14 29 8 39 12 16 36 18 49 39 33 37 38 6 6 27 23 17
Output
31
Answer
31
Checker Log
ok answer is '31'
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 2
1000 4
Output
996
Answer
996
Checker Log
ok answer is '996'
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2 3
4 502 1000
Output
498
Answer
498
Checker Log
ok answer is '498'
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3 3
4 1000 4
Output
996
Answer
996
Checker Log
ok answer is '996'
*/