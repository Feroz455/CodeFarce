/*
A. Games
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Manao works on a sports TV. He's spent much time watching the football games of some country.
After a while he began to notice different patterns. For example, each team has two sets of uniforms:
home uniform and guest uniform. When a team plays a game at home, the players put on the home uniform.
When a team plays as a guest on somebody else's stadium, the players put on the guest uniform.
The only exception to that rule is: when the home uniform color of the host team matches the guests'
uniform, the host team puts on its guest uniform as well. For each team the color of the home and guest
uniform is different.

There are n teams taking part in the national championship. The championship consists of n·(n - 1) games:
each team invites each other team to its stadium. At this point Manao wondered: how many times during the
championship is a host team going to put on the guest uniform? Note that the order of the games does not
affect this number.

You know the colors of the home and guest uniform for each team. For simplicity, the colors are numbered
by integers in such a way that no two distinct colors have the same number. Help Manao find the answer to his question.

Input
The first line contains an integer n (2 ≤ n ≤ 30). Each of the following n lines contains a pair of distinct
space-separated integers hi, ai (1 ≤ hi, ai ≤ 100) — the colors of the i-th team's home and guest uniforms, respectively.

Output
In a single line print the number of games where the host team is going to play in the guest uniform.

Examples
inputCopy
3
1 2
2 4
3 4
outputCopy
1
inputCopy
4
100 42
42 100
5 42
100 5
outputCopy
5
inputCopy
2
1 2
1 2
outputCopy
0
Note
In the first test case the championship consists of 6 games. The only game with the event in question
is the game between teams 2 and 1 on the stadium of team 2.

In the second test sample the host team will have to wear guest uniform in the games between teams:
1 and 2, 2 and 1, 2 and 3, 3 and 4, 4 and 2 (the host team is written first).
*/
#include <iostream>
using namespace std;
int main()
{
    int a, count = 0;
    cin >> a;
    int x[a], y[a];
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (x[i] == y[j])
            {
                count++;
            }
        }
    }
    cout << count;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 2
2 4
3 4
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #2, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
100 42
42 100
5 42
100 5
Output
5
Answer
5
Checker Log
ok answer is 5
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
1 2
1 2
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
4 7
52 55
16 4
55 4
20 99
3 4
7 52
Output
6
Answer
6
Checker Log
ok answer is 6
Test: #5, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
68 42
1 35
25 70
59 79
65 63
46 6
28 82
92 62
43 96
37 28
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #6, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
10 39
89 1
78 58
75 99
36 13
77 50
6 97
79 28
27 52
56 5
93 96
40 21
33 74
26 37
53 59
98 56
61 65
42 57
9 7
25 63
74 34
96 84
95 47
12 23
34 21
71 6
27 13
15 47
64 14
12 77
Output
6
Answer
6
Checker Log
ok answer is 6
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
46 100
87 53
34 84
44 66
23 20
50 34
90 66
17 39
13 22
94 33
92 46
63 78
26 48
44 61
3 19
41 84
62 31
65 89
23 28
58 57
19 85
26 60
75 66
69 67
76 15
64 15
36 72
90 89
42 69
45 35
Output
4
Answer
4
Checker Log
ok answer is 4
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
46 6
6 46
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
29
8 18
33 75
69 22
97 95
1 97
78 10
88 18
13 3
19 64
98 12
79 92
41 72
69 15
98 31
57 74
15 56
36 37
15 66
63 100
16 42
47 56
6 4
73 15
30 24
27 71
12 19
88 69
85 6
50 11
Output
10
Answer
10
Checker Log
ok answer is 10
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
23
43 78
31 28
58 80
66 63
20 4
51 95
40 20
50 14
5 34
36 39
77 42
64 97
62 89
16 56
8 34
58 16
37 35
37 66
8 54
50 36
24 8
68 48
85 33
Output
6
Answer
6
Checker Log
ok answer is 6
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
13
76 58
32 85
99 79
23 58
96 59
72 35
53 43
96 55
41 78
75 10
28 11
72 7
52 73
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #12, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
18
6 90
70 79
26 52
67 81
29 95
41 32
94 88
18 58
59 65
51 56
64 68
34 2
6 98
95 82
34 2
40 98
83 78
29 2
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
18
6 90
100 79
26 100
67 100
29 100
100 32
94 88
18 58
59 65
51 56
64 68
34 2
6 98
95 82
34 2
40 98
83 78
29 100
Output
8
Answer
8
Checker Log
ok answer is 8
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
1 2
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
2 1
Output
450
Answer
450
Checker Log
ok answer is 450
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
100 99
58 59
56 57
54 55
52 53
50 51
48 49
46 47
44 45
42 43
40 41
38 39
36 37
34 35
32 33
30 31
28 29
26 27
24 25
22 23
20 21
18 19
16 17
14 15
12 13
10 11
8 9
6 7
4 5
2 3
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #16, time: 30 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
15
9 3
2 6
7 6
5 10
9 5
8 1
10 5
2 8
4 5
9 8
5 3
3 8
9 8
4 10
8 5
Output
20
Answer
20
Checker Log
ok answer is 20
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
15
2 1
1 2
1 2
1 2
2 1
2 1
2 1
1 2
2 1
2 1
2 1
1 2
2 1
2 1
1 2
Output
108
Answer
108
Checker Log
ok answer is 108
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
2 1
1 2
1 2
1 2
2 1
1 2
1 2
1 2
2 1
2 1
2 1
1 2
1 2
1 2
2 1
2 1
2 1
1 2
2 1
1 2
2 1
2 1
2 1
2 1
1 2
Output
312
Answer
312
Checker Log
ok answer is 312
Test: #19, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
91 57
2 73
54 57
2 57
23 57
2 6
57 54
57 23
91 54
91 23
57 23
91 57
54 2
6 91
57 54
2 57
57 91
73 91
57 23
91 57
2 73
91 2
23 6
2 73
23 6
Output
96
Answer
96
Checker Log
ok answer is 96
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
28
31 66
31 91
91 31
97 66
31 66
31 66
66 91
91 31
97 31
91 97
97 31
66 31
66 97
91 31
31 66
31 66
66 31
31 97
66 97
97 31
31 91
66 91
91 66
31 66
91 66
66 31
66 31
91 97
Output
210
Answer
210
Checker Log
ok answer is 210
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
29
78 27
50 68
24 26
68 43
38 78
26 38
78 28
28 26
27 24
23 38
24 26
24 43
61 50
38 78
27 23
61 26
27 28
43 23
28 78
43 27
43 78
27 61
28 38
61 78
50 26
43 27
26 78
28 50
43 78
Output
73
Answer
73
Checker Log
ok answer is 73
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
29
80 27
69 80
27 80
69 80
80 27
80 27
80 27
80 69
27 69
80 69
80 27
27 69
69 27
80 69
27 69
69 80
27 69
80 69
80 27
69 27
27 69
27 80
80 27
69 80
27 69
80 69
69 80
69 80
27 80
Output
277
Answer
277
Checker Log
ok answer is 277
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
19 71
7 89
89 71
21 7
19 21
7 89
19 71
89 8
89 21
19 8
21 7
8 89
19 89
7 21
19 8
19 7
7 19
8 21
71 21
71 89
7 19
7 19
21 7
21 19
21 19
71 8
21 8
71 19
19 71
8 21
Output
154
Answer
154
Checker Log
ok answer is 154
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
44 17
44 17
44 17
17 44
44 17
44 17
17 44
17 44
17 44
44 17
44 17
44 17
44 17
44 17
17 44
17 44
17 44
44 17
44 17
17 44
44 17
44 17
44 17
17 44
17 44
44 17
17 44
44 17
44 17
44 17
Output
418
Answer
418
Checker Log
ok answer is 418
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
22
78 92
15 92
92 78
78 80
92 16
24 80
92 16
16 92
78 16
24 78
80 78
92 80
16 80
80 78
15 78
92 16
24 15
24 80
80 16
16 80
92 80
24 80
Output
74
Answer
74
Checker Log
ok answer is 74
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
24
9 83
90 31
83 3
83 3
21 31
83 3
32 31
12 21
31 21
90 32
32 21
12 9
12 31
9 83
83 12
32 3
32 83
90 31
9 32
31 21
83 90
32 21
21 3
32 9
Output
59
Answer
59
Checker Log
ok answer is 59
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
67 21
85 39
85 87
21 39
66 85
10 95
10 21
87 85
82 21
67 21
95 10
21 39
82 21
21 66
66 39
95 30
67 85
66 82
85 82
21 66
10 39
67 10
21 85
10 82
85 95
10 85
21 39
85 39
39 10
95 67
Output
100
Answer
100
Checker Log
ok answer is 100
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
8 7
8 7
7 8
7 8
Output
8
Answer
8
Checker Log
ok answer is 8
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
1 2
1 2
1 2
1 2
1 2
2 1
Output
10
Answer
10
Checker Log
ok answer is 10
Test: #30, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
12
1 2
1 2
1 2
1 2
1 2
1 2
2 1
2 1
2 1
2 1
2 1
2 1
Output
72
Answer
72
Checker Log
ok answer is 72
Test: #31, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
1 2
1 2
2 1
2 1
Output
8
Answer
8
Checker Log
ok answer is 8
close
*/