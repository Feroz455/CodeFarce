/*
B. Drinks
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Vasya loves orange juice very much. That's why any food and drink in his kitchen
necessarily contains orange juice. There are n drinks in his fridge, the volume fraction
of orange juice in the i-th drink equals pi percent.

One day Vasya decided to make himself an orange cocktail. He took equal proportions of
each of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.

Find the volume fraction of orange juice in the final drink.

Input
The first input line contains a single integer n (1 ≤ n ≤ 100) — the number of orange-containing
drinks in Vasya's fridge. The second line contains n integers pi (0 ≤ pi ≤ 100) — the volume
fraction of orange juice in the i-th drink, in percent. The numbers are separated by a space.

Output
Print the volume fraction in percent of orange juice in Vasya's cocktail. The answer will be
considered correct if the absolute or relative error does not exceed 10  - 4.

Examples
inputCopy
3
50 50 100
outputCopy
66.666666666667
inputCopy
4
0 25 50 75
outputCopy
37.500000000000
Note
Note to the first sample: let's assume that Vasya takes x milliliters of each drink from the
fridge. Then the volume of pure juice in the cocktail will equal  milliliters. The total cocktail's
volume equals 3·x milliliters, so the volume fraction of the juice in the cocktail equals , that is,
66.(6) percent.


*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int check = 0;
    double n, temp = 0;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }

    cout << setprecision(12) << sum / n;
    return 0;
}
/*
By FirozMahmud, contest: Codeforces Round #126 (Div. 2), problem: (B) Drinks, Accepted, #, Copy
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int check = 0;
    double n, temp = 0;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
 
    cout << setprecision(12) << sum / n;
    return 0;
}
→Judgement Protocol
Test: #1, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
50 50 100
Output
66.6666666667
Answer
66.666666666667
Checker Log
ok found '66.66667', expected '66.66667', error '0.00000'
Test: #2, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
0 25 50 75
Output
37.5
Answer
37.500000000000
Checker Log
ok found '37.50000', expected '37.50000', error '0.00000'
Test: #3, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 1 8
Output
3
Answer
3.000000000000
Checker Log
ok found '3.00000', expected '3.00000', error '0.00000'
Test: #4, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
96 89 93 95 70
Output
88.6
Answer
88.600000000000
Checker Log
ok found '88.60000', expected '88.60000', error '0.00000'
Test: #5, time: 30 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
62 41 78 4 38 39 75
Output
48.1428571429
Answer
48.142857142857
Checker Log
ok found '48.14286', expected '48.14286', error '0.00000'
Test: #6, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
13
2 22 7 0 1 17 3 17 11 2 21 26 22
Output
11.6153846154
Answer
11.615384615385
Checker Log
ok found '11.61538', expected '11.61538', error '0.00000'
Test: #7, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
21
5 4 11 7 0 5 45 21 0 14 51 6 0 16 10 19 8 9 7 12 18
Output
12.7619047619
Answer
12.761904761905
Checker Log
ok found '12.76190', expected '12.76190', error '0.00000'
Test: #8, time: 0 ms., memory: 136 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
95 70 93 74 94 70 91 70 39 79 80 57 87 75 37 93 48 67 51 90 85 26 23 64 66 84
Output
69.5384615385
Answer
69.538461538462
Checker Log
ok found '69.53846', expected '69.53846', error '0.00000'
Test: #9, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
29
84 99 72 96 83 92 95 98 97 93 76 84 99 93 81 76 93 99 99 100 95 100 96 95 97 100 71 98 94
Output
91.5517241379
Answer
91.551724137931
Checker Log
ok found '91.55172', expected '91.55172', error '0.00000'
Test: #10, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
33
100 99 100 100 99 99 99 100 100 100 99 99 99 100 100 100 100 99 100 99 100 100 97 100 100 100 100 100 100 100 98 98 100
Output
99.5151515152
Answer
99.515151515152
Checker Log
ok found '99.51515', expected '99.51515', error '0.00000'
Test: #11, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
34
14 9 10 5 4 26 18 23 0 1 0 20 18 15 2 2 3 5 14 1 9 4 2 15 7 1 7 19 10 0 0 11 0 2
Output
8.14705882353
Answer
8.147058823529
Checker Log
ok found '8.14706', expected '8.14706', error '0.00000'
Test: #12, time: 30 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
38
99 98 100 100 99 92 99 99 98 84 88 94 86 99 93 100 98 99 65 98 85 84 64 97 96 89 79 96 91 84 99 93 72 96 94 97 96 93
Output
91.9210526316
Answer
91.921052631579
Checker Log
ok found '91.92105', expected '91.92105', error '0.00000'
Test: #13, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
52
100 94 99 98 99 99 99 95 97 97 98 100 100 98 97 100 98 90 100 99 97 94 90 98 100 100 90 99 100 95 98 95 94 85 97 94 96 94 99 99 99 98 100 100 94 99 99 100 98 87 100 100
Output
97.0192307692
Answer
97.019230769231
Checker Log
ok found '97.01923', expected '97.01923', error '0.00000'
Test: #14, time: 30 ms., memory: 136 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
58
10 70 12 89 1 82 100 53 40 100 21 69 92 91 67 66 99 77 25 48 8 63 93 39 46 79 82 14 44 42 1 79 0 69 56 73 67 17 59 4 65 80 20 60 77 52 3 61 16 76 33 18 46 100 28 59 9 6
Output
50.9655172414
Answer
50.965517241379
Checker Log
ok found '50.96552', expected '50.96552', error '0.00000'
Test: #15, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
85
7 8 1 16 0 15 1 7 0 11 15 6 2 12 2 8 9 8 2 0 3 7 15 7 1 8 5 7 2 26 0 3 11 1 8 10 31 0 7 6 1 8 1 0 9 14 4 8 7 16 9 1 0 16 10 9 6 1 1 4 2 7 4 5 4 1 20 6 16 16 1 1 10 17 8 12 14 19 3 8 1 7 10 23 10
Output
7.50588235294
Answer
7.505882352941
Checker Log
ok found '7.50588', expected '7.50588', error '0.00000'
Test: #16, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
74
5 3 0 7 13 10 12 10 18 5 0 18 2 13 7 17 2 7 5 2 40 19 0 2 2 3 0 45 4 20 0 4 2 8 1 19 3 9 17 1 15 0 16 1 9 4 0 9 32 2 6 18 11 18 1 15 16 12 7 19 5 3 9 28 26 8 3 10 33 29 4 13 28 6
Output
10.4189189189
Answer
10.418918918919
Checker Log
ok found '10.41892', expected '10.41892', error '0.00000'
Test: #17, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98
42 9 21 11 9 11 22 12 52 20 10 6 56 9 26 27 1 29 29 14 38 17 41 21 7 45 15 5 29 4 51 20 6 8 34 17 13 53 30 45 0 10 16 41 4 5 6 4 14 2 31 6 0 11 13 3 3 43 13 36 51 0 7 16 28 23 8 36 30 22 8 54 21 45 39 4 50 15 1 30 17 8 18 10 2 20 16 50 6 68 15 6 38 7 28 8 29 41
Output
20.9285714286
Answer
20.928571428571
Checker Log
ok found '20.92857', expected '20.92857', error '0.00000'
Test: #18, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
60 65 40 63 57 44 30 84 3 10 39 53 40 45 72 20 76 11 61 32 4 26 97 55 14 57 86 96 34 69 52 22 26 79 31 4 21 35 82 47 81 28 72 70 93 84 40 4 69 39 83 58 30 7 32 73 74 12 92 23 61 88 9 58 70 32 75 40 63 71 46 55 39 36 14 97 32 16 95 41 28 20 85 40 5 50 50 50 75 6 10 64 38 19 77 91 50 72 96
Output
49.1919191919
Answer
49.191919191919
Checker Log
ok found '49.19192', expected '49.19192', error '0.00000'
Test: #19, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
100 88 40 30 81 80 91 98 69 73 88 96 79 58 14 100 87 84 52 91 83 88 72 83 99 35 54 80 46 79 52 72 85 32 99 39 79 79 45 83 88 50 75 75 50 59 65 75 97 63 92 58 89 46 93 80 89 33 69 86 99 99 66 85 72 74 79 98 85 95 46 63 77 97 49 81 89 39 70 76 68 91 90 56 31 93 51 87 73 95 74 69 87 95 57 68 49 95 92
Output
73.4848484848
Answer
73.484848484848
Checker Log
ok found '73.48485', expected '73.48485', error '0.00000'
Test: #20, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
18 15 17 0 3 3 0 4 1 8 2 22 7 21 5 0 0 8 3 16 1 0 2 9 9 3 10 8 17 20 5 4 8 12 2 3 1 1 3 2 23 0 1 0 5 7 4 0 1 3 3 4 25 2 2 14 8 4 9 3 0 11 0 3 12 3 14 16 7 7 14 1 17 9 0 35 42 12 3 1 25 9 3 8 5 3 2 8 22 14 11 6 3 9 6 8 7 7 4 6
Output
7.64
Answer
7.640000000000
Checker Log
ok found '7.64000', expected '7.64000', error '0.00000'
Test: #21, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
88 77 65 87 100 63 91 96 92 89 77 95 76 80 84 83 100 71 85 98 26 54 74 78 69 59 96 86 88 91 95 26 52 88 64 70 84 81 76 84 94 82 100 66 97 98 43 94 59 94 100 80 98 73 69 83 94 70 74 79 91 31 62 88 69 55 62 97 40 64 62 83 87 85 50 90 69 72 67 49 100 51 69 96 81 90 83 91 86 34 79 69 100 66 97 98 47 97 74 100
Output
77.66
Answer
77.660000000000
Checker Log
ok found '77.66000', expected '77.66000', error '0.00000'
Test: #22, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
91 92 90 91 98 84 85 96 83 98 99 87 94 70 87 75 86 90 89 88 82 83 91 94 88 86 90 99 100 98 97 75 95 99 95 100 91 92 76 93 95 97 88 93 95 81 96 89 88 100 98 87 90 96 100 99 58 90 96 77 92 82 100 100 93 93 98 99 79 88 97 95 98 66 96 83 96 100 99 92 98 98 92 93 100 97 98 100 98 97 100 100 94 90 99 100 98 79 80 81
Output
91.48
Answer
91.480000000000
Checker Log
ok found '91.48000', expected '91.48000', error '0.00000'
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
0
Output
0
Answer
0.000000000000
Checker Log
ok found '0.00000', expected '0.00000', error '-0.00000'
Test: #24, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
100
Output
100
Answer
100.000000000000
Checker Log
ok found '100.00000', expected '100.00000', error '0.00000'
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
78
Output
78
Answer
78.000000000000
Checker Log
ok found '78.00000', expected '78.00000', error '0.00000'
Test: #26, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 100
Output
50
Answer
50.000000000000
Checker Log
ok found '50.00000', expected '50.00000', error '0.00000'
Test: #27, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
100 100
Output
100
Answer
100.000000000000
Checker Log
ok found '100.00000', expected '100.00000', error '0.00000'
Test: #28, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 0 0 0 1
Output
0.2
Answer
0.200000000000
Checker Log
ok found '0.20000', expected '0.20000', error '0.00000'
Test: #29, time: 0 ms., memory: 144 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 99
Output
99.99
Answer
99.990000000000
Checker Log
ok found '99.99000', expected '99.99000', error '0.00000'
Test: #30, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
Output
0.01
Answer
0.010000000000
Checker Log
ok found '0.01000', expected '0.01000', error '0.00000'
Test: #31, time: 0 ms., memory: 140 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
100 100 100 100 100
Output
100
Answer
100.000000000000
Checker Log
ok found '100.00000', expected '100.00000', error '0.00000'
*/