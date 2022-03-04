/*
A. Twins
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.

Now let's imagine a typical morning in your family. You haven't woken up yet, and Mom is already going to work. She has been so hasty that she has nearly forgotten to leave the two of her darling children some money to buy lunches in the school cafeteria. She fished in the purse and found some number of coins, or to be exact, n coins of arbitrary values a1, a2, ..., an. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

As you woke up, you found Mom's coins and read her note. "But why split the money equally?" — you thought. After all, your twin is sleeping and he won't know anything. So you decided to act like that: pick for yourself some subset of coins so that the sum of values of your coins is strictly larger than the sum of values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins, the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid suspicions: you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them in the described manner.

Input
The first line contains integer n (1 ≤ n ≤ 100) — the number of coins. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 100) — the coins' values. All numbers are separated with spaces.

Output
In the single line print the single number — the minimum needed number of coins.

Examples
inputCopy
2
3 3
outputCopy
2
inputCopy
3
2 1 2
outputCopy
2
Note
In the first sample you will have to take 2 coins (you and your twin have sums equal to 6, 0 correspondingly). If you take 1 coin, you get sums 3, 3. If you take 0 coins, you get sums 0, 6. Those variants do not satisfy you as your sum should be strictly more that your twins' sum.

In the second sample one coin isn't enough for us, too. You can pick coins with values 1, 2 or 2, 2. In any case, the minimum number of coins equals 2.


*/
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n, m, i, j, sum, cnt, ans;
    while (cin >> n)
    {
        long long a[n];
        sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum = sum / 2;
        sort(a, a + n);
        cnt = 0;
        ans = 0;
        for (i = n - 1; i >= 0; i--)
        {
            ans += a[i];
            cnt++;
            if (ans > sum)
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
3 3
Output
2
Answer
2
Checker Log
ok 2
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
2 1 2
Output
2
Answer
2
Checker Log
ok 2
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
5
Output
1
Answer
1
Checker Log
ok 1
Test: #4, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
4 2 2 2 2
Output
3
Answer
3
Checker Log
ok 3
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
1 10 1 2 1 1 1
Output
1
Answer
1
Checker Log
ok 1
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
3 2 3 3 1
Output
3
Answer
3
Checker Log
ok 3
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
2 1
Output
1
Answer
1
Checker Log
ok 1
Test: #8, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
2 1 3
Output
2
Answer
2
Checker Log
ok 2
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
1 1 1 1 1 1
Output
4
Answer
4
Checker Log
ok 4
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
10 10 5 5 5 5 1
Output
3
Answer
3
Checker Log
ok 3
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
2 1 2 2 2 1 1 2 1 2 2 1 1 1 1 2 1 1 1 1
Output
8
Answer
8
Checker Log
ok 8
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
4 2 4 4 3 4 2 2 4 2 3 1 1 2 2 3 3 3 1 4
Output
8
Answer
8
Checker Log
ok 8
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
35 26 41 40 45 46 22 26 39 23 11 15 47 42 18 15 27 10 45 40
Output
8
Answer
8
Checker Log
ok 8
Test: #14, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
7 84 100 10 31 35 41 2 63 44 57 4 63 11 23 49 98 71 16 90
Output
6
Answer
6
Checker Log
ok 6
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
19 2 12 26 17 27 10 26 17 17 5 24 11 15 3 9 16 18 19 1 25 23 18 6 2 7 25 7 21 25 13 29 16 9 25 3 14 30 18 4 10 28 6 10 8 2 2 4 8 28
Output
14
Answer
14
Checker Log
ok 14
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
70
2 18 18 47 25 5 14 9 19 46 36 49 33 32 38 23 32 39 8 29 31 17 24 21 10 15 33 37 46 21 22 11 20 35 39 13 11 30 28 40 39 47 1 17 24 24 21 46 12 2 20 43 8 16 44 11 45 10 13 44 31 45 45 46 11 10 33 35 23 42
Output
22
Answer
22
Checker Log
ok 22
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
Output
51
Answer
51
Checker Log
ok 51
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
1 2 2 1 2 1 1 2 1 1 1 2 2 1 1 1 2 2 2 1 2 1 1 1 1 1 2 1 2 1 2 1 2 1 2 1 1 1 2 1 1 1 1 1 2 2 1 2 1 2 1 2 2 2 1 2 1 2 2 1 1 2 2 1 1 2 2 2 1 1 2 1 1 2 2 1 2 1 1 2 2 1 2 1 1 2 2 1 1 1 1 2 1 1 1 1 2 2 2 2
Output
37
Answer
37
Checker Log
ok 37
Test: #19, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
1 2 3 2 1 2 2 3 1 3 3 2 2 1 1 2 2 1 1 1 1 2 3 3 2 1 1 2 2 2 3 3 3 2 1 3 1 3 3 2 3 1 2 2 2 3 2 1 1 3 3 3 3 2 1 1 2 3 2 2 3 2 3 2 2 3 2 2 2 2 3 3 3 1 3 3 1 1 2 3 2 2 2 2 3 3 3 2 1 2 3 1 1 2 3 3 1 3 3 2
Output
36
Answer
36
Checker Log
ok 36
Test: #20, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
5 5 4 3 5 1 2 5 1 1 3 5 4 4 1 1 1 1 5 4 4 5 1 5 5 1 2 1 3 1 5 1 3 3 3 2 2 2 1 1 5 1 3 4 1 1 3 2 5 2 2 5 5 4 4 1 3 4 3 3 4 5 3 3 3 1 2 1 4 2 4 4 1 5 1 3 5 5 5 5 3 4 4 3 1 2 5 2 3 5 4 2 4 5 3 2 4 2 4 3
Output
33
Answer
33
Checker Log
ok 33
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
3 4 8 10 8 6 4 3 7 7 6 2 3 1 3 10 1 7 9 3 5 5 2 6 2 9 1 7 4 2 4 1 6 1 7 10 2 5 3 7 6 4 6 2 8 8 8 6 6 10 3 7 4 3 4 1 7 9 3 6 3 6 1 4 9 3 8 1 10 1 4 10 7 7 9 5 3 8 10 2 1 10 8 7 10 8 5 3 1 2 1 10 6 1 5 3 3 5 7 2
Output
30
Answer
30
Checker Log
ok 30
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
16 9 11 8 11 4 9 17 4 8 4 10 9 10 6 3 3 15 1 6 1 15 12 18 6 14 13 18 1 7 18 4 10 7 10 12 3 16 14 4 10 8 10 7 19 13 15 1 4 8 16 10 6 4 3 16 11 10 7 3 4 16 1 20 1 11 4 16 10 7 7 12 18 19 3 17 19 3 4 19 2 12 11 3 18 20 2 2 14 4 20 13 13 11 16 20 19 14 7 2
Output
29
Answer
29
Checker Log
ok 29
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
2 46 4 6 38 19 15 34 10 35 37 30 3 25 5 45 40 45 33 31 6 20 10 44 11 9 2 14 35 5 9 23 20 2 48 22 25 35 38 31 24 33 35 16 4 30 27 10 12 22 6 24 12 30 23 21 14 12 32 21 7 12 25 43 18 34 34 28 47 13 28 43 18 39 44 42 35 26 35 14 8 29 32 20 29 3 20 6 20 9 9 27 8 42 10 37 42 27 8 1
Output
30
Answer
30
Checker Log
ok 30
Test: #24, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
85 50 17 89 65 89 5 20 86 26 16 21 85 14 44 31 87 31 6 2 48 67 8 80 79 1 48 36 97 1 5 30 79 50 78 12 2 55 76 100 54 40 26 81 97 96 68 56 87 14 51 17 54 37 52 33 69 62 38 63 74 15 62 78 9 19 67 2 60 58 93 60 18 96 55 48 34 7 79 82 32 58 90 67 20 50 27 15 7 89 98 10 11 15 99 49 4 51 77 52
Output
29
Answer
29
Checker Log
ok 29
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
Output
30
Answer
30
Checker Log
ok 30
Test: #26, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
1
Output
1
Answer
1
Checker Log
ok 1
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
4 1 2 3
Output
2
Answer
2
Checker Log
ok 2
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
2 2 2 4 4
Output
2
Answer
2
Checker Log
ok 2
Test: #29, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
100 99 99 100
Output
2
Answer
2
Checker Log
ok 2
*/