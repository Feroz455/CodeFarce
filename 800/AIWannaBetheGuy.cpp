/*
A. I Wanna Be the Guy
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

Input
The first line contains a single integer n (1 ≤  n ≤ 100).

The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). These integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. It's assumed that levels are numbered from 1 to n.

Output
If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).

Examples
inputCopy
4
3 1 2 3
2 2 4
outputCopy
I become the guy.
inputCopy
4
3 1 2 3
2 2 3
outputCopy
Oh, my keyboard!
Note
In the first sample, Little X can pass levels [1 2 3], and Little Y can pass level [2 4], so they can pass all the levels both.

In the second sample, no one can pass level 4.\

By FirozMahmud, contest: Codeforces Round #268 (Div. 2), problem: (A) I Wanna Be the Guy, Accepted, #, Copy
*/

#include <iostream>
#include <algorithm>
using namespace std;
int n, p, q, a, b, d[100];
int main() {
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        d[a - 1] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> b;
        d[b - 1] = 1;
    }
    if ( * min_element(d, d + n) == 1) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
3 1 2 3
2 2 4
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #2, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
3 1 2 3
2 2 3
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
5 8 6 1 5 4
6 1 3 2 9 4 6
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #4, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
8 8 10 7 3 1 4 2 6
8 9 5 10 3 7 2 4 8
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
9 6 1 8 3 9 7 5 10 4
7 1 3 2 7 6 9 5
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #6, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
75 83 69 73 30 76 37 48 14 41 42 21 35 15 50 61 86 85 46 3 31 13 78 10 2 44 80 95 56 82 38 75 77 4 99 9 84 53 12 11 36 74 39 72 43 89 57 28 54 1 51 66 27 22 93 59 68 88 91 29 7 20 63 8 52 23 64 58 100 79 65 49 96 71 33 45
83 50 89 73 34 28 99 67 77 44 19 60 68 42 8 27 94 85 14 39 17 78 24 21 29 63 92 32 86 22 71 81 31 82 65 48 80 59 98 3 70 55 37 12 15 72 47 9 11 33 16 7 91 74 13 64 38 84 6 61 93 90 45 69 1 54 52 100 57 10 35 49 53 75 76 43 62 5 4 18 36 96 79 23
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
97 91 25 24 38 11 82 47 31 43 41 29 65 34 7 75 67 61 52 97 13 37 19 27 77 15 28 14 83 95 45 74 50 10 6 93 76 35 80 40 88 42 26 86 89 4 55 18 60 63 49 9 58 62 66 32 90 70 54 22 36 12 68 17 81 30 48 78 73 51 72 92 5 8 44 99 64 59 96 57 71 94 56 98 21 39 1 53 33 23 3 85 20 16 69 87 84 46
93 72 88 30 31 24 64 23 46 15 44 73 83 59 97 61 29 93 49 37 43 55 8 19 17 3 76 4 100 22 60 40 75 66 80 69 13 1 62 21 27 67 33 39 57 58 99 47 74 56 92 86 87 63 9 90 7 71 2 54 52 94 81 91 82 10 84 42 14 78 5 50 35 70 26 6...
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
94 34 66 1 54 31 94 82 83 38 23 25 59 87 9 20 84 56 60 78 6 48 74 7 61 85 3 24 43 49 37 62 4 71 53 16 10 18 42 5 58 97 92 29 44 90 91 32 67 13 76 69 17 100 39 93 12 19 8 2 46 79 41 63 72 86 26 89 73 15 50 77 33 45 28 21 36 95 64 22 81 14 30 80 98 99 75 70 96 47 35 11 68 88 52
97 30 42 38 82 21 60 10 49 33 72 52 43 84 65 89 37 71 64 54 77 6 87 93 25 73 1 57 96 92 12 88 3 11 41 75 48 59 5 78 23 15 45 76 46 63 83 62 26 53 100 44 61 32 7 16 55 81 13 68 14 91 94 70 99 47 74 86 18 22 27 35 58 67 24 69 29 8...
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #9, time: 15 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
92 25 16 74 50 97 42 89 47 19 41 6 63 33 65 82 79 55 92 38 5 1 34 83 60 56 10 87 30 59 18 35 46 77 91 80 78 67 9 8 100 69 2 75 94 58 99 93 62 24 37 17 68 39 88 11 81 44 90 72 71 96 48 36 13 95 54 98 23 57 85 26 12 40 73 3 15 84 20 29 45 70 43 7 52 14 64 28 21 27 4 22 66
92 31 64 86 68 46 91 70 62 34 33 30 17 45 100 40 73 77 99 55 29 22 82 63 37 60 81 74 8 78 95 65 42 15 1 98 59 50 47 9 87 85 18 7 39 71 88 4 54 28 75 51 26 2 58 89 90 57 24 36 72 56 23 69 41 43 48 14 97 19 79 10 93 53 76 20 66 38 12 25...
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
94 29 3 26 58 80 52 60 100 85 47 7 93 8 18 55 48 51 46 81 42 4 13 10 49 63 1 11 72 21 36 89 84 70 78 41 53 75 12 69 68 30 6 9 79 15 90 61 65 56 67 33 19 54 22 76 43 57 27 17 88 28 24 45 39 77 87 83 86 99 40 62 71 38 5 82 66 73 44 2 64 94 16 98 32 92 25 31 20 97 34 35 96 37 14
93 30 4 82 96 15 1 88 16 32 26 8 45 36 54 78 62 38 51 21 64 7 56 27 66 70 2 20 44 18 24 28 14 94 31 49 11 23 53 48 22 95 25 92 80 6 59 67 74 55 75 89 50 9 13 93 87 65 63 86 42 90 29 77 85 97 68 43 17 40 33 91 35 52 57 71 5 37 3 ...
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1 1
1 1
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
0
1 1
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #13, time: 15 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1 1
0
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
0
0
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #15, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
100 22 27 26 18 100 6 83 39 58 78 28 33 74 43 46 7 2 48 87 31 30 95 84 61 62 14 19 81 64 36 32 15 60 93 54 52 1 94 16 37 44 63 35 67 79 42 72 68 56 25 20 9 57 97 73 51 86 85 98 91 17 34 75 12 50 38 66 65 55 99 29 47 10 23 49 13 11 69 70 3 77 4 8 40 92 76 45 90 82 96 21 5 41 80 71 88 59 53 24 89
100 96 82 44 36 92 48 34 86 80 98 20 32 38 72 22 42 17 12 97 85 25 90 57 66 29 14 63 9 30 93 100 24 8 52 87 11 4 47 81 10 70 75 95 60 68 28 31 39 1 16 91 18 50 61 13 15 7 19 88 74 56 40 99 58 77 49 69 78 67 51...
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0
0
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
44 71 70 55 49 43 16 53 7 95 58 56 38 76 67 94 20 73 29 90 25 30 8 84 5 14 77 52 99 91 66 24 39 37 22 44 78 12 63 59 32 51 15 82 34
56 17 10 96 80 69 13 81 31 57 4 48 68 89 50 45 3 33 36 2 72 100 64 87 21 75 54 74 92 65 23 40 97 61 18 28 98 93 35 83 9 79 46 27 41 62 88 6 47 60 86 26 42 85 19 1 11
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
78 63 59 39 11 58 4 2 80 69 22 95 90 26 65 16 30 100 66 99 67 79 54 12 23 28 45 56 70 74 60 82 73 91 68 43 92 75 51 21 17 97 86 44 62 47 85 78 72 64 50 81 71 5 57 13 31 76 87 9 49 96 25 42 19 35 88 53 7 83 38 27 29 41 89 93 10 84 18
78 1 16 53 72 99 9 36 59 49 75 77 94 79 35 4 92 42 82 83 76 97 20 68 55 47 65 50 14 30 13 67 98 8 7 40 64 32 87 10 33 90 93 18 26 71 17 46 24 28 89 58 37 91 39 34 25 48 84 31 96 95 80 88 3 51 62 52 85 61 12 15 27 6 45 38 2 22 60
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
94 25 38 53 62 90 3 54 21 22 11 47 99 95 19 4 96 24 9 52 91 60 34 77 20 61 50 70 13 83 12 92 67 18 93 82 55 75 23 71 73 44 16 100 1 66 6 43 65 26 79 30 28 10 89 56 84 37 86 58 74 51 42 45 69 8 57 98 5 76 59 64 17 49 2 81 31 33 32 35 27 72 68 29 94 78 87 7 36 46 80 48 40 85 39
92 82 38 57 2 12 85 93 55 39 61 99 43 10 40 46 97 23 19 98 22 44 18 66 69 91 74 17 24 30 27 72 36 87 100 76 14 86 67 35 3 75 34 56 94 25 9 90 64 8 49 96 79 63 54 95 41 21 62 45 89 53 6 65 50 73 48 60 84 5 92 13 52 29 71 78 77 1 ...
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #20, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2 2 1
0
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
1 2
2 1 2
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
80
57 40 1 47 36 69 24 76 5 72 26 4 29 62 6 60 3 70 8 64 18 37 16 14 13 21 25 7 66 68 44 74 61 39 38 33 15 63 34 65 10 23 56 51 80 58 49 75 71 12 50 57 2 30 54 27 17 52
61 22 67 15 28 41 26 1 80 44 3 38 18 37 79 57 11 7 65 34 9 36 40 5 48 29 64 31 51 63 27 4 50 13 24 32 58 23 19 46 8 73 39 2 21 56 77 53 59 78 43 12 55 45 30 74 33 68 42 47 17 54
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
78 87 96 18 73 32 38 44 29 64 40 70 47 91 60 69 24 1 5 34 92 94 99 22 83 65 14 68 15 20 74 31 39 100 42 4 97 46 25 6 8 56 79 9 71 35 54 19 59 93 58 62 10 85 57 45 33 7 86 81 30 98 26 61 84 41 23 28 88 36 66 51 80 53 37 63 43 95 75
76 81 53 15 26 37 31 62 24 87 41 39 75 86 46 76 34 4 51 5 45 65 67 48 68 23 71 27 94 47 16 17 9 96 84 89 88 100 18 52 69 42 6 92 7 64 49 12 98 28 21 99 25 55 44 40 82 19 36 30 77 90 14 43 50 3 13 95 78 35 20 54 58 11 2 1 33
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #24, time: 15 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
77 55 26 98 13 91 78 60 23 76 12 11 36 62 84 80 18 1 68 92 81 67 19 4 2 10 17 77 96 63 15 69 46 97 82 42 83 59 50 72 14 40 89 9 52 29 56 31 74 39 45 85 22 99 44 65 95 6 90 38 54 32 49 34 3 70 75 33 94 53 21 71 5 66 73 41 100 24
69 76 93 5 24 57 59 6 81 4 30 12 44 15 67 45 73 3 16 8 47 95 20 64 68 85 54 17 90 86 66 58 13 37 42 51 35 32 1 28 43 80 7 14 48 19 62 55 2 91 25 49 27 26 38 79 89 99 22 60 75 53 88 82 34 21 87 71 72 61
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
74 96 32 63 12 69 72 99 15 22 1 41 79 77 71 31 20 28 75 73 85 37 38 59 42 100 86 89 55 87 68 4 24 57 52 8 92 27 56 98 95 58 34 9 45 14 11 36 66 76 61 19 25 23 78 49 90 26 80 43 70 13 65 10 5 74 81 21 44 60 97 3 47 93 6
64 68 21 27 16 91 23 22 33 12 71 88 90 50 62 43 28 29 57 59 5 74 10 95 35 1 67 93 36 32 86 40 6 64 78 46 89 15 84 53 18 30 17 85 2 3 47 92 25 48 76 51 20 82 52 83 99 63 80 11 94 54 39 7 58
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
75 11 98 44 47 88 94 23 78 59 70 2 43 39 34 63 71 19 42 61 30 74 14 77 97 53 92 60 67 36 37 13 6 86 62 46 41 3 25 93 7 12 27 48 55 49 31 35 51 10 57 54 95 82 28 90 73 26 17 50 81 56 20 87 40 85 72 64 99 29 91 5 80 18 24 52
72 93 59 5 88 47 9 58 48 1 43 50 100 87 61 91 45 98 99 56 25 84 53 73 78 54 63 38 37 2 77 95 89 85 4 90 10 33 12 22 74 32 34 70 71 52 96 57 15 66 31 27 75 8 21 39 62 44 67 94 81 68 14 19 36 28 11 79 16 65 46 83 76
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #27, time: 0 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 2
2 2 3
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
1 2
3 1 3 4
Output
I become the guy.
Answer
I become the guy.
Checker Log
ok single line: 'I become the guy.'
Test: #29, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
2 1 2
3 4 5 6
Output
Oh, my keyboard!
Answer
Oh, my keyboard!
Checker Log
ok single line: 'Oh, my keyboard!'

*/