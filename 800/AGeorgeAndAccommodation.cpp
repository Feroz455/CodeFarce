/*
A. George and Accommodation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both George and Alex.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of rooms.

The i-th of the next n lines contains two integers pi and qi (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in the i-th room and the room's capacity.

Output
Print a single integer — the number of rooms where George and Alex can move in.

Examples
inputCopy
3
1 1
2 2
3 3
outputCopy
0
inputCopy
3
1 10
0 10
10 10
outputCopy
2
*/
#include <iostream>
using namespace std;
class room
{
    int n, ck;
    int p, q;

public:
    room()
    {
    }
    room(int N, int CK = 0)
    {
        n = N;
        ck = CK;
    }
    void check()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> p >> q;
            if (p + 2 <= q)
            {
                ck++;
            }
        }
        cout << ck;
    }
};
int main()
{
    int N;
    cin >> N;
    room R(N);
    R.check();
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 1
2 2
3 3
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 10
0 10
10 10
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
36 67
61 69
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
21 71
10 88
43 62
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 2
2 3
3 4
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 10
0 20
0 30
0 40
0 50
0 60
0 70
0 80
0 90
0 100
Output
10
Answer
10
Checker Log
ok 1 number(s): "10"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
13
14 16
30 31
45 46
19 20
15 17
66 67
75 76
95 97
29 30
37 38
0 2
36 37
8 9
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
19
66 67
97 98
89 91
67 69
67 68
18 20
72 74
28 30
91 92
27 28
75 77
17 18
74 75
28 30
16 18
90 92
9 11
22 24
52 54
Output
12
Answer
12
Checker Log
ok 1 number(s): "12"
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
15
55 57
95 97
57 59
34 36
50 52
96 98
39 40
13 15
13 14
74 76
47 48
56 58
24 25
11 13
67 68
Output
10
Answer
10
Checker Log
ok 1 number(s): "10"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
17
68 69
47 48
30 31
52 54
41 43
33 35
38 40
56 58
45 46
92 93
73 74
61 63
65 66
37 39
67 68
77 78
28 30
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
14
64 66
43 44
10 12
76 77
11 12
25 27
87 88
62 64
39 41
58 60
10 11
28 29
57 58
12 14
Output
7
Answer
7
Checker Log
ok 1 number(s): "7"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
38
74 76
52 54
78 80
48 49
40 41
64 65
28 30
6 8
49 51
68 70
44 45
57 59
24 25
46 48
49 51
4 6
63 64
76 78
57 59
18 20
63 64
71 73
88 90
21 22
89 90
65 66
89 91
96 98
42 44
1 1
74 76
72 74
39 40
75 76
29 30
48 49
87 89
27 28
Output
22
Answer
22
Checker Log
ok 1 number(s): "22"
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 100
0 ...
Output
100
Answer
100
Checker Log
ok 1 number(s): "100"
Test: #15, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
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
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
68
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
0 2
Output
68
Answer
68
Checker Log
ok 1 number(s): "68"
Test: #17, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
0 1
1 5
2 4
3 5
4 6
5 6
6 8
Output
5
Answer
5
Checker Log
ok 1 number(s): "5"
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
0 0
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #19, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
100 100
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
81
0 73
1 2
2 31
3 51
4 15
5 53
6 47
7 13
8 65
9 86
10 18
11 78
12 25
13 13
14 48
15 61
16 49
17 23
18 46
19 24
20 67
21 36
22 23
23 63
24 80
25 42
26 92
27 93
28 80
29 47
30 63
31 92
32 34
33 64
34 100
35 54
36 100
37 46
38 84
39 77
40 87
41 100
42 100
43 100
44 82
45 53
46 100
47 100
48 88
49 100
50 63
51 99
52 95
53 98
54 76
55 100
56 57
57 89
58 100
59 100
60 65
61 91
62 100
63 95
64 99
65 80
66 100
67 93
68 91
69 83
70 100
71 100
...
Output
76
Answer
76
Checker Log
ok 1 number(s): "76"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
44
0 8
1 11
2 19
3 5
4 29
5 45
6 6
7 40
8 19
9 22
10 18
11 26
12 46
13 13
14 27
15 48
16 25
17 20
18 29
19 27
20 45
21 39
22 29
23 39
24 42
25 37
26 52
27 36
28 43
29 35
30 38
31 70
32 47
33 38
34 61
35 71
36 51
37 71
38 59
39 77
40 70
41 80
42 77
43 73
Output
42
Answer
42
Checker Log
ok 1 number(s): "42"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 3
2 7
8 9
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
75
0 5
1 57
2 47
3 41
4 31
5 68
6 53
7 33
8 15
9 42
10 52
11 11
12 59
13 64
14 53
15 68
16 66
17 24
18 51
19 75
20 80
21 77
22 84
23 30
24 52
25 42
26 94
27 27
28 73
29 71
30 38
31 70
32 89
33 33
34 75
35 73
36 36
37 79
38 46
39 99
40 100
41 72
42 85
43 76
44 50
45 58
46 99
47 78
48 76
49 81
50 100
51 56
52 74
53 81
54 100
55 100
56 100
57 71
58 92
59 64
60 100
61 100
62 62
63 81
64 90
65 71
66 77
67 85
68 100
69 87
70 100
71 84
72 10...
Output
70
Answer
70
Checker Log
ok 1 number(s): "70"
Test: #24, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
53
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 10
10 11
11 12
12 13
13 14
14 15
15 16
16 17
17 18
18 19
19 20
20 21
21 22
22 23
23 24
24 25
25 26
26 27
27 28
28 29
29 30
30 31
31 32
32 33
33 34
34 35
35 36
36 37
37 38
38 39
39 40
40 41
41 42
42 43
43 44
44 45
45 46
46 47
47 48
48 49
49 50
50 51
51 52
52 53
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
55
0 0
1 1
2 2
3 3
4 4
5 5
6 6
7 7
8 8
9 9
10 10
11 11
12 12
13 13
14 14
15 15
16 16
17 17
18 18
19 19
20 20
21 21
22 22
23 23
24 24
25 25
26 26
27 27
28 28
29 29
30 30
31 31
32 32
33 33
34 34
35 35
36 36
37 37
38 38
39 39
40 40
41 41
42 42
43 43
44 44
45 45
46 46
47 47
48 48
49 49
50 50
51 51
52 52
53 53
54 54
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #26, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
51
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 62
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 73
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 55
55 82
55 68
55 70
55 63
55 55
55 55
55 55
55 75
55 75
55 55
55 55
55 55
55 55
55 55
55 55
55 73
55 55
55 82
55 99
55 60
Output
12
Answer
12
Checker Log
ok 1 number(s): "12"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
14
1 1
1 1
1 55
1 16
1 1
1 1
1 55
1 62
1 53
1 26
1 1
1 36
1 2
1 3
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
*/