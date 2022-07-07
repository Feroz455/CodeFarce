/*
A. Arrival of the General
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.

Input
The first input line contains the only integer n (2 ≤ n ≤ 100) which represents the number of soldiers in the line. The second line contains integers a1, a2, ..., an (1 ≤ ai ≤ 100) the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers a1, a2, ..., an are not necessarily different.

Output
Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like.

Examples
inputCopy
4
33 44 11 22
outputCopy
2
inputCopy
7
10 10 58 31 63 40 76
outputCopy
10
Note
In the first sample the colonel will need to swap the first and second soldier and then the third and fourth soldier. That will take 2 seconds. The resulting position of the soldiers is (44, 33, 22, 11).

In the second sample the colonel may swap the soldiers in the following sequence:

(10, 10, 58, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 76, 40)
(10, 58, 10, 31, 76, 63, 40)
(10, 58, 31, 10, 76, 63, 40)
(10, 58, 31, 76, 10, 63, 40)
(10, 58, 31, 76, 63, 10, 40)
(10, 58, 76, 31, 63, 10, 40)
(10, 76, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 40, 10)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int m = 0; m < n; m++)
    {
        cin >> arr[m];
    }

    int min_no = arr[0];
    int indexmin = 0;
    for (int m = 1; m < n; m++)
    {

        if (min_no >= arr[m])
        {
            min_no = arr[m];
            indexmin = m;
        }
    }
    int min_moves = 0;
    for (int i = indexmin; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        min_moves++;
    }
    int max_no = arr[n - 1];
    int indexmax = 0;
    for (int m = n - 2; m >= 0; m--)
    {

        if (max_no <= arr[m])
        {
            max_no = arr[m];
            indexmax = m;
        }
    }
    for (int i = indexmax; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
        min_moves++;
    }
    cout << min_moves << endl;

    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
33 44 11 22
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
10 10 58 31 63 40 76
Output
10
Answer
10
Checker Log
ok answer is 10
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
88 89
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
100 95 100 100 88
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
48 48 48 48 45 45 45
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
68 47 67 29 63 71 71 65 54 56
Output
10
Answer
10
Checker Log
ok answer is 10
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
15
77 68 96 60 92 75 61 60 66 79 80 65 60 95 92
Output
4
Answer
4
Checker Log
ok answer is 4
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 2 1
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
30 30 30 14 30 14 30 30 30 14 30 14 14 30 14 14 30 14 14 14
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
35
37 41 46 39 47 39 44 47 44 42 44 43 47 39 46 39 38 42 39 37 40 44 41 42 41 42 39 42 36 36 42 36 42 42 42
Output
7
Answer
7
Checker Log
ok answer is 7
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40
99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 98 99 99 99 99 99 99 99 99 100 99 99 99 99 99 99
Output
47
Answer
47
Checker Log
ok answer is 47
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
48 52 44 54 53 56 62 49 39 41 53 39 40 64 53 50 62 48 40 52 51 48 40 52 61 62 62 61 48 64 55 57 56 40 48 58 41 60 60 56 64 50 64 45 48 45 46 63 59 57
Output
50
Answer
50
Checker Log
ok answer is 50
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
57
7 24 17 19 6 19 10 11 12 22 14 5 5 11 13 10 24 19 24 24 24 11 21 20 4 14 24 24 18 13 24 3 20 3 3 3 3 9 3 9 22 22 16 3 3 3 15 11 3 3 8 17 10 13 3 14 13
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #14, time: 30 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
65
58 50 35 44 35 37 36 58 38 36 58 56 56 49 48 56 58 43 40 44 52 44 58 58 57 50 43 35 55 39 38 49 53 56 50 42 41 56 34 57 49 38 34 51 56 38 58 40 53 46 48 34 38 43 49 49 58 56 41 43 44 34 38 48 36
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #15, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
69
70 48 49 48 49 71 48 53 55 69 48 53 54 58 53 63 48 48 69 67 72 75 71 75 74 74 57 63 65 60 48 48 65 48 48 51 50 49 62 53 76 68 76 56 76 76 64 76 76 57 61 76 73 51 59 76 65 50 69 50 76 67 76 63 62 74 74 58 73
Output
73
Answer
73
Checker Log
ok answer is 73
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
75
70 65 64 71 71 64 71 64 68 71 65 64 65 68 71 66 66 69 68 63 69 65 71 69 68 68 71 67 71 65 65 65 71 71 65 69 63 66 62 67 64 63 62 64 67 65 62 69 62 64 69 62 67 64 67 70 64 63 64 64 69 62 62 64 70 62 62 68 67 69 62 64 66 70 68
Output
7
Answer
7
Checker Log
ok answer is 7
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
84
92 95 84 85 94 80 90 86 80 92 95 84 86 83 86 83 93 91 95 92 84 88 82 84 84 84 80 94 93 80 94 80 95 83 85 80 95 95 80 84 86 92 83 81 90 87 81 89 92 93 80 87 90 85 93 85 93 94 93 89 94 83 93 91 80 83 90 94 95 80 95 92 85 84 93 94 94 82 91 95 95 89 85 94
Output
15
Answer
15
Checker Log
ok answer is 15
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
90
86 87 72 77 82 71 75 78 61 67 79 90 64 94 94 74 85 87 73 76 71 71 60 69 77 73 76 80 82 57 62 57 57 83 76 72 75 87 72 94 77 85 59 82 86 69 62 80 95 73 83 94 79 85 91 68 85 74 93 95 68 75 89 93 83 78 95 78 83 77 81 85 66 92 63 65 75 78 67 91 77 74 59 86 77 76 90 67 70 64
Output
104
Answer
104
Checker Log
ok answer is 104
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
91
94 98 96 94 95 98 98 95 98 94 94 98 95 95 99 97 97 94 95 98 94 98 96 98 96 98 97 95 94 94 94 97 94 96 98 98 98 94 96 95 94 95 97 97 97 98 94 98 96 95 98 96 96 98 94 97 96 98 97 95 97 98 94 95 94 94 97 94 96 97 97 93 94 95 95 94 96 98 97 96 94 98 98 96 96 96 96 96 94 96 97
Output
33
Answer
33
Checker Log
ok answer is 33
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
92
44 28 32 29 41 41 36 39 40 39 41 35 41 28 35 27 41 34 28 38 43 43 41 38 27 26 28 36 30 29 39 32 35 35 32 30 39 30 37 27 41 41 28 30 43 31 35 33 36 28 44 40 41 35 31 42 37 38 37 34 39 40 27 40 33 33 44 43 34 33 34 34 35 38 38 37 30 39 35 41 45 42 41 32 33 33 31 30 43 41 43 43
Output
145
Answer
145
Checker Log
ok answer is 145
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
93
46 32 52 36 39 30 57 63 63 30 32 44 27 59 46 38 40 45 44 62 35 36 51 48 39 58 36 51 51 51 48 58 59 36 29 35 31 49 64 60 34 38 42 56 33 42 52 31 63 34 45 51 35 45 33 53 33 62 31 38 66 29 51 54 28 61 32 45 57 41 36 34 47 36 31 28 67 48 52 46 32 40 64 58 27 53 43 57 34 66 43 39 26
Output
76
Answer
76
Checker Log
ok answer is 76
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
94
56 55 54 31 32 42 46 29 24 54 40 40 20 45 35 56 32 33 51 39 26 56 21 56 51 27 29 39 56 52 54 43 43 55 48 51 44 49 52 49 23 19 19 28 20 26 45 33 35 51 42 36 25 25 38 23 21 35 54 50 41 20 37 28 42 20 22 43 37 34 55 21 24 38 19 41 45 34 19 33 44 54 38 31 23 53 35 32 47 40 39 31 20 34
Output
15
Answer
15
Checker Log
ok answer is 15
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
95
57 71 70 77 64 64 76 81 81 58 63 75 81 77 71 71 71 60 70 70 69 67 62 64 78 64 69 62 76 76 57 70 68 77 70 68 73 77 79 73 60 57 69 60 74 65 58 75 75 74 73 73 65 75 72 57 81 62 62 70 67 58 76 57 79 81 68 64 58 77 70 59 79 64 80 58 71 59 81 71 80 64 78 80 78 65 70 68 78 80 57 63 64 76 81
Output
11
Answer
11
Checker Log
ok answer is 11
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
96
96 95 95 95 96 97 95 97 96 95 98 96 97 95 98 96 98 96 98 96 98 95 96 95 95 95 97 97 95 95 98 98 95 96 96 95 97 96 98 96 95 97 97 95 97 97 95 94 96 96 97 96 97 97 96 94 94 97 95 95 95 96 95 96 95 97 97 95 97 96 95 94 97 97 97 96 97 95 96 94 94 95 97 94 94 97 97 97 95 97 97 95 94 96 95 95
Output
13
Answer
13
Checker Log
ok answer is 13
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
97
14 15 12 12 13 15 12 15 12 12 12 12 12 14 15 15 13 12 15 15 12 12 12 13 14 15 15 13 14 15 14 14 14 14 12 13 12 13 13 12 15 12 13 13 15 12 15 13 12 13 13 13 14 13 12 15 14 13 14 15 13 14 14 13 14 12 15 12 14 12 13 14 15 14 13 15 13 12 15 15 15 13 15 15 13 14 16 16 16 13 15 13 15 14 15 15 15
Output
104
Answer
104
Checker Log
ok answer is 104
Test: #26, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98
37 69 35 70 58 69 36 47 41 63 60 54 49 35 55 50 35 53 52 43 35 41 40 49 38 35 48 70 42 35 35 65 56 54 44 59 59 48 51 49 59 67 35 60 69 35 58 50 35 44 48 69 41 58 44 45 35 47 70 61 49 47 37 39 35 51 44 70 72 65 36 41 63 63 48 66 45 50 50 71 37 52 72 67 72 39 72 39 36 64 48 72 69 49 45 72 72 67
Output
100
Answer
100
Checker Log
ok answer is 100
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
31 31 16 15 19 31 19 22 29 27 12 22 28 30 25 33 26 25 19 22 34 21 17 33 31 22 16 26 22 30 31 17 13 33 13 17 28 25 18 33 27 22 31 22 13 27 20 22 23 15 24 32 29 13 16 20 32 33 14 33 19 27 16 28 25 17 17 28 18 26 32 33 19 23 30 13 14 23 24 28 14 28 22 20 30 14 24 23 17 29 18 28 29 21 28 18 16 24 32
Output
107
Answer
107
Checker Log
ok answer is 107
Test: #28, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
37 54 39 29 32 49 21 13 34 21 16 42 34 27 16 26 7 34 51 9 11 27 16 40 36 7 48 52 30 42 42 52 51 11 32 26 6 7 28 54 48 51 6 54 42 20 51 48 46 4 4 31 47 6 9 16 8 23 36 50 49 30 47 37 45 24 48 26 8 50 18 24 27 13 39 7 37 34 5 43 42 19 34 23 52 38 35 6 29 11 53 49 21 29 36 22 45 33 51 22
Output
50
Answer
50
Checker Log
ok answer is 50
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
41 5 20 23 5 47 28 28 64 5 12 14 34 56 22 48 6 52 39 55 62 40 24 54 39 28 56 27 35 51 14 24 38 10 55 20 39 62 52 2 30 55 49 48 15 23 59 44 31 28 66 29 62 59 31 13 28 12 50 45 41 47 29 27 64 66 14 39 62 22 44 63 24 5 63 17 42 7 25 41 49 33 31 51 63 3 37 66 19 9 2 40 16 45 56 21 34 29 39 61
Output
59
Answer
59
Checker Log
ok answer is 59
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95 95
Output
99
Answer
99
Checker Log
ok answer is 99
Test: #31, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 81 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
2 1 2
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
100 99
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #34, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
Output
197
Answer
197
Checker Log
ok answer is 197
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87 87
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #36, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
100 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
1 1
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #38, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
2 2 2
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 3 2
Output
2
Answer
2
Checker Log
ok answer is 2
*/