/*
A. Tram
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of tram's movement. At the i-th stop ai passengers exit the tram, while bi passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so that it becomes empty.

Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at any time never exceeds this capacity. Note that at each stop all exiting passengers exit before any entering passenger enters the tram.

Input
The first line contains a single number n (2 ≤ n ≤ 1000) — the number of the tram's stops.

Then n lines follow, each contains two integers ai and bi (0 ≤ ai, bi ≤ 1000) — the number of passengers that exits the tram at the i-th stop, and the number of passengers that enter the tram at the i-th stop. The stops are given from the first to the last stop in the order of tram's movement.

The number of people who exit at a given stop does not exceed the total number of people in the tram immediately before it arrives at the stop. More formally, . This particularly means that a1 = 0.
At the last stop, all the passengers exit the tram and it becomes empty. More formally, .
No passenger will enter the train at the last stop. That is, bn = 0.
Output
Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).

Examples
inputCopy
4
0 3
2 5
4 2
4 0
outputCopy
6
Note
For the first example, a capacity of 6 is sufficient:

At the first stop, the number of passengers inside the tram before arriving is 0. Then, 3 passengers enter the tram, and the number of passengers inside the tram becomes 3.
At the second stop, 2 passengers exit the tram (1 passenger remains inside). Then, 5 passengers enter the tram. There are 6 passengers inside the tram now.
At the third stop, 4 passengers exit the tram (2 passengers remain inside). Then, 2 passengers enter the tram. There are 4 passengers inside the tram now.
Finally, all the remaining passengers inside the tram exit the tram at the last stop. There are no passenger inside the tram now, which is in line with the constraints.
Since the number of passengers inside the tram never exceeds 6, a capacity of 6 is sufficient. Furthermore it is not possible for the tram to have a capacity less than 6. Hence, 6 is the correct answer.


*/
#include <iostream>
using namespace std;
int main()
{
    int stop, a[1000], b[1000], check = 0, result = 0;
    cin >> stop;

    for (int i = 0; i < stop; i++)
    {
        cin >> a[i] >> b[i];
        result += b[i];
        result -= a[i];
        if (result > check)
        {
            check = result;
        }
    }
    cout << check;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 30 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
0 3
2 5
4 2
4 0
Output
6
Answer
6
Checker Log
ok answer is 6
Test: #2, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 4
4 6
6 5
5 4
4 0
Output
6
Answer
6
Checker Log
ok answer is 6
Test: #3, time: 0 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 5
1 7
10 8
5 3
0 5
3 3
8 8
0 6
10 1
9 0
Output
18
Answer
18
Checker Log
ok answer is 18
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 1
1 1
1 0
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1
1 0
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
...
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
0 1
0 1
1 0
1 0
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 0
0 0
0 0
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 1000
1000 1000
1000 0
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 73
73 189
189 766
766 0
0 0
Output
766
Answer
766
Checker Log
ok answer is 766
Test: #10, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 0
0 0
0 0
0 1
1 0
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 917
917 923
904 992
1000 0
11 0
Output
1011
Answer
1011
Checker Log
ok answer is 1011
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 1
1 2
2 1
1 2
2 0
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #13, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
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
ok answer is 0
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
0 7
2 1
2 2
5 7
2 6
6 10
2 4
0 4
7 4
8 0
10 6
2 1
6 1
1 7
0 3
8 7
6 3
6 3
1 1
3 0
Output
22
Answer
22
Checker Log
ok answer is 22
Test: #15, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
0 1000
1000 1000
1000 1000
1000 1000
1000 0
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #16, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 592
258 598
389 203
249 836
196 635
478 482
994 987
1000 0
769 0
0 0
Output
1776
Answer
1776
Checker Log
ok answer is 1776
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 1
1 0
0 0
0 0
0 0
0 1
1 1
0 1
1 0
1 0
Output
2
Answer
2
Checker Log
ok answer is 2
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 926
926 938
938 931
931 964
937 989
983 936
908 949
997 932
945 988
988 0
Output
1016
Answer
1016
Checker Log
ok answer is 1016
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 1
1 2
1 2
2 2
2 2
2 2
1 1
1 1
2 1
2 0
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #20, time: 0 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
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
ok answer is 0
Test: #21, time: 0 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
0 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 0
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #22, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
0 332
332 268
268 56
56 711
420 180
160 834
149 341
373 777
763 93
994 407
86 803
700 132
471 608
429 467
75 5
638 305
405 853
316 478
643 163
18 131
648 241
241 766
316 847
640 380
923 759
789 41
125 421
421 9
9 388
388 829
408 108
462 856
816 411
518 688
290 7
405 912
397 772
396 652
394 146
27 648
462 617
514 433
780 35
710 705
460 390
194 508
643 56
172 469
1000 0
194 0
Output
2071
Answer
2071
Checker Log
ok answer is 2071
Test: #23, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
0 0
0 1
1 1
0 1
0 0
1 0
0 0
1 0
0 0
0 0
0 0
0 0
0 1
0 0
0 0
0 1
1 0
0 1
0 0
1 1
1 0
0 1
0 0
1 1
0 1
1 0
1 1
1 0
0 0
1 1
1 0
0 1
0 0
0 1
1 1
1 1
1 1
1 0
1 1
1 0
0 1
1 0
0 0
0 1
1 1
1 1
0 1
0 0
1 0
1 0
Output
3
Answer
3
Checker Log
ok answer is 3
Test: #24, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
0 926
926 971
915 980
920 965
954 944
928 952
955 980
916 980
906 935
944 913
905 923
912 922
965 934
912 900
946 930
931 983
979 905
925 969
924 926
910 914
921 977
934 979
962 986
942 909
976 903
982 982
991 941
954 929
902 980
947 983
919 924
917 943
916 905
907 913
964 977
984 904
905 999
950 970
986 906
993 970
960 994
963 983
918 986
980 900
931 986
993 997
941 909
907 909
1000 0
278 0
Output
1329
Answer
1329
Checker Log
ok answer is 1329
Test: #25, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 863
863 0
Output
863
Answer
863
Checker Log
ok answer is 863
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
0 1
1 2
2 2
1 1
1 1
1 2
1 2
1 1
1 2
1 1
1 1
1 2
1 2
1 1
2 1
2 2
1 2
2 2
1 2
2 1
2 1
2 2
2 1
1 2
1 2
2 1
1 1
2 2
1 1
2 1
2 2
2 1
1 2
2 2
1 2
1 1
1 1
2 1
2 1
2 2
2 1
2 1
1 2
1 2
1 2
1 2
2 0
2 0
2 0
0 0
Output
8
Answer
8
Checker Log
ok answer is 8
Test: #27, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
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
ok answer is 0
Test: #28, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
0 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #29, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 799
631 937
530 393
694 118
151 676
275 23
546 201
320 690
561 954
347 455
567 809
539 267
933 60
288 650
75 79
107 26
573 91
91 495
268 742
827 665
474 340
673 164
164 494
494 275
275 462
450 650
150 490
969 145
178 292
292 248
248 952
882 969
196 747
89 103
287 821
784 241
39 1000
795 986
596 724
532 121
364 929
540 116
765 215
834 523
978 635
558 556
956 455
676 309
33 682
216 344
450 239
527 9
380 616
259 759
758 4
484 775
599 979
178 328
...
Output
3029
Answer
3029
Checker Log
ok answer is 3029
Test: #30, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 1
0 0
0 0
1 0
0 0
0 1
0 1
1 1
0 0
0 0
1 1
0 0
1 1
0 1
1 1
0 1
1 1
1 0
1 0
0 0
1 0
0 1
1 0
0 0
0 0
1 1
1 1
0 1
0 0
1 0
1 1
0 1
1 0
1 1
0 1
1 1
1 0
0 0
0 0
0 1
0 0
0 1
1 1
0 0
1 1
1 1
0 0
0 1
1 0
0 1
0 0
0 1
0 1
1 1
1 1
1 1
0 0
0 0
1 1
0 1
0 1
1 0
0 0
0 0
1 1
0 1
0 1
1 1
1 1
0 1
1 1
1 1
0 0
1 0
0 1
0 0
0 0
1 1
1 1
1 1
1 1
0 1
1 0
1 0
1 0
1 0
1 0
0 0
1 0
1 0
0 0
1 0
0 0
0 1
1 0
0 1
1 0
1 0
1 0
1 0
Output
11
Answer
11
Checker Log
ok answer is 11
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 921
921 968
968 918
917 981
921 947
1000 918
926 917
917 987
910 965
938 966
920 908
940 960
909 946
922 917
932 941
933 910
956 900
954 973
941 944
936 996
1000 983
951 935
922 964
957 915
996 912
940 976
922 942
962 955
974 913
919 916
979 943
954 911
911 926
926 975
945 927
933 946
947 1000
964 920
924 940
913 981
907 934
920 979
949 956
911 996
926 957
947 971
973 949
966 996
962 900
970 919
984 903
977 937
915 963
969 902
965 975
900 998
9...
Output
1302
Answer
1302
Checker Log
ok answer is 1302
Test: #32, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 2
1 2
2 1
1 2
1 2
2 1
2 2
1 1
1 1
2 1
1 2
2 1
1 2
2 2
2 2
2 2
1 2
2 2
2 1
1 1
1 1
1 1
2 2
1 2
2 2
1 1
1 1
1 1
1 1
2 2
1 2
2 1
1 1
2 2
1 1
2 1
1 1
2 2
2 1
1 2
1 1
1 2
2 1
2 2
1 1
2 1
1 1
2 1
1 1
1 2
2 2
2 2
1 1
2 2
1 2
2 1
2 1
1 1
1 1
1 2
1 2
1 1
1 1
2 1
1 2
1 2
2 1
2 2
2 2
2 2
2 1
2 2
1 1
1 2
1 2
1 1
2 2
2 2
1 1
2 1
1 1
1 2
1 2
1 2
1 1
1 1
2 2
1 2
2 1
2 1
2 1
1 2
1 2
1 1
2 2
1 2
2 0
2 0
2 0
1 0
Output
7
Answer
7
Checker Log
ok answer is 7
Test: #33, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
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
ok answer is 0
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
0 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
100...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #35, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
0 592
592 985
984 676
598 173
238 596
610 36
36 340
340 246
246 616
333 707
463 94
621 316
316 993
26 191
414 42
282 379
206 436
929 252
436 850
541 385
523 573
744 413
86 109
126 480
287 162
552 904
423 931
667 469
253 999
621 170
990 246
520 955
876 987
395 748
515 632
44 691
926 866
695 656
750 349
520 468
316 31
337 573
379 692
789 710
597 595
696 991
361 876
349 587
804 128
690 623
285 915
383 149
583 707
707 662
359 268
643 392
502 632
523...
Output
23998
Answer
23998
Checker Log
ok answer is 23998
Test: #36, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 1
1 0
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #37, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
0 1
1 0
0 1
0 0
0 1
0 0
1 1
1 0
1 1
0 1
0 1
0 0
0 0
0 0
1 1
1 1
1 0
0 1
0 0
0 0
1 0
0 0
1 1
0 1
0 0
1 1
0 1
1 0
1 0
0 0
0 0
1 1
1 1
1 0
1 1
0 1
1 0
0 1
1 1
0 1
0 0
0 1
1 0
0 1
0 0
0 0
1 0
1 1
1 1
0 0
0 0
0 0
1 1
0 1
0 1
1 0
0 0
0 0
1 0
0 0
1 0
0 1
1 0
1 0
1 0
0 0
0 0
0 1
0 1
1 1
0 0
1 0
1 0
0 0
0 1
1 1
1 0
0 1
0 0
0 0
0 0
1 1
0 1
1 1
1 1
1 0
1 0
0 1
0 0
0 1
0 1
0 0
0 1
1 1
1 0
1 1
0 1
1 1
1 1
0 0
1 0
0...
Output
14
Answer
14
Checker Log
ok answer is 14
Test: #38, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
0 949
901 987
958 995
908 994
967 919
979 973
937 944
922 990
908 973
951 960
972 947
948 900
924 908
904 993
940 963
998 993
947 931
923 972
906 996
959 962
968 927
957 926
924 932
926 971
966 940
930 959
983 985
952 967
980 964
904 946
906 954
946 947
964 975
997 966
957 927
922 952
976 935
938 993
980 916
906 950
990 986
965 955
927 964
940 901
972 929
960 996
978 986
954 948
956 973
989 983
958 958
989 994
900 997
936 919
971 973
959 908
929 ...
Output
2319
Answer
2319
Checker Log
ok answer is 2319
Test: #39, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
0 1
1 1
1 2
1 1
2 2
1 1
2 2
1 2
1 2
2 2
2 2
1 1
2 1
1 2
2 2
2 2
2 1
2 2
2 2
2 1
1 2
2 1
1 2
1 2
1 1
2 1
2 2
2 2
1 2
2 1
2 1
2 1
1 2
2 2
1 1
1 1
1 2
2 2
2 1
2 1
1 1
1 1
1 2
1 1
1 1
1 1
1 1
2 1
1 2
1 1
1 2
2 1
2 2
2 2
2 1
1 1
1 2
2 2
1 1
2 1
1 1
1 2
1 2
2 1
1 2
1 1
1 1
2 1
2 1
1 1
1 1
1 2
2 1
1 2
1 2
1 2
1 1
1 2
1 2
2 2
1 2
1 1
2 1
2 1
1 1
1 1
1 1
1 2
2 1
1 1
1 1
2 2
2 1
1 2
2 1
1 1
2 1
2 1
2 1
1 1
1 2
1...
Output
24
Answer
24
Checker Log
ok answer is 24
Test: #40, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
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
0 0
0...
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #41, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
999
0 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
100...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #42, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 188
188 718
718 33
33 434
434 782
738 224
268 29
29 405
405 308
308 696
696 827
116 301
357 641
205 54
767 466
461 811
705 863
744 881
236 701
441 96
470 249
160 959
575 70
836 592
894 966
37 422
25 901
91 232
518 522
866 691
175 937
356 889
484 407
534 461
922 153
615 407
214 243
844 584
696 981
247 433
326 318
485 121
888 313
967 35
146 636
304 347
41 204
452 327
982 346
245 623
220 360
577 748
160 521
247 362
883 615
467 687
668 87
265 985...
Output
7844
Answer
7844
Checker Log
ok answer is 7844
Test: #43, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1
1 1
1 0
0 0
0 0
0 0
0 1
1 0
0 1
1 1
1 1
1 1
0 0
1 1
1 1
1 0
0 0
0 0
0 0
0 0
0 1
1 0
0 0
0 0
0 0
0 1
1 1
0 1
1 1
0 1
0 0
0 1
0 1
0 1
1 1
0 0
1 0
1 0
0 0
0 1
0 0
1 1
0 1
0 0
0 1
1 0
0 0
0 1
1 0
1 0
1 0
0 0
1 0
0 1
1 1
1 0
1 0
1 1
1 0
1 1
0 0
0 1
1 1
1 0
0 0
0 1
0 0
1 0
1 0
0 0
0 1
1 1
1 0
0 0
0 1
1 1
1 0
0 0
0 0
0 0
0 0
0 1
1 1
0 1
1 1
1 1
1 0
1 1
0 1
1 1
1 0
0 1
1 1
1 0
0 0
0 0
1 1
0 0
0 1
1 1
1 0
...
Output
25
Answer
25
Checker Log
ok answer is 25
Test: #44, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 910
910 982
982 908
908 917
904 918
931 963
963 945
945 971
926 917
947 954
939 951
981 959
923 912
948 912
912 932
924 995
922 904
974 970
980 972
905 977
914 911
902 960
967 956
937 971
957 956
929 951
998 919
941 998
957 978
902 990
995 972
959 981
932 942
906 997
909 900
904 985
966 920
961 905
945 926
964 920
961 981
942 924
978 982
905 956
932 971
961 957
978 982
976 981
996 999
923 927
983 950
977 997
918 981
958 959
914 973
991 989
942...
Output
1601
Answer
1601
Checker Log
ok answer is 1601
Test: #45, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1
1 1
1 1
1 2
1 1
2 2
1 2
1 1
1 2
2 2
2 1
1 1
2 1
2 2
2 2
2 1
1 2
2 2
2 1
1 1
1 1
1 2
1 1
2 1
1 1
1 1
1 2
2 1
1 2
1 1
2 1
1 2
1 1
2 2
2 1
1 2
2 1
1 1
1 1
1 2
1 2
1 1
2 1
2 1
1 1
1 1
1 2
1 2
2 1
1 1
1 2
1 1
2 2
1 1
2 2
2 1
1 1
1 2
2 1
1 2
2 1
1 1
1 1
1 1
2 2
2 1
1 2
2 1
1 2
2 1
1 2
2 1
1 1
1 2
1 2
2 2
2 1
2 1
1 2
2 1
1 1
1 2
2 2
1 2
2 2
1 2
2 2
2 1
2 2
2 1
1 1
2 1
1 2
1 2
1 2
1 2
2 1
1 1
1 1
2 2
1 1
...
Output
27
Answer
27
Checker Log
ok answer is 27
Test: #46, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
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
0 0
...
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #47, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 900
900 0
Output
900
Answer
900
Checker Log
ok answer is 900
Test: #48, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
1000 1000
10...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #49, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 870
870 185
58 122
249 824
335 551
860 592
3 717
720 133
275 379
111 427
833 631
234 623
104 282
157 898
394 140
467 100
116 77
258 815
487 693
831 551
668 501
90 527
632 83
698 832
559 755
830 720
283 643
449 713
392 533
873 861
110 566
278 723
997 529
317 82
408 658
151 507
649 741
52 604
630 619
973 870
679 940
933 858
147 284
450 731
968 823
824 195
998 961
945 549
781 379
14 191
878 108
237 268
793 615
592 276
401 191
899 659
589 668
819...
Output
13157
Answer
13157
Checker Log
ok answer is 13157
Test: #50, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 671
671 855
855 825
825 793
793 755
559 627
621 755
879 543
513 732
629 746
844 633
559 566
684 708
583 756
711 535
774 513
513 505
505 615
615 621
615 653
659 848
647 867
516 573
857 792
802 850
651 651
912 720
737 516
637 610
615 989
706 625
766 783
765 603
547 755
640 703
763 722
798 603
778 718
778 809
766 689
745 792
792 836
836 821
688 867
533 606
514 684
605 516
935 662
810 886
682 574
717 980
779 654
683 790
941 863
511 793
789 810
705...
Output
4921
Answer
4921
Checker Log
ok answer is 4921
Test: #51, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 850
850 121
121 979
932 696
743 522
522 649
649 511
511 893
893 678
678 18
18 257
257 885
885 553
553 817
817 197
197 221
221 343
343 4
4 538
538 752
752 459
459 748
748 892
892 450
450 539
539 976
934 442
484 977
961 550
566 592
592 221
221 285
285 396
396 685
685 580
580 795
795 101
101 779
779 322
322 919
919 375
375 311
311 988
921 708
775 646
646 149
149 238
238 691
691 133
133 66
66 92
92 764
764 532
532 87
87 265
265 515
515 0
0 453
4...
Output
1076
Answer
1076
Checker Log
ok answer is 1076
Test: #52, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 277
277 893
365 111
149 532
630 821
244 463
166 996
668 881
410 683
306 600
258 125
536 667
5 77
930 183
183 217
91 947
563 743
214 465
381 53
552 212
670 852
37 180
663 978
444 16
359 636
21 819
173 652
782 2
461 39
623 143
157 941
817 455
302 555
195 832
741 264
34 566
254 12
7 553
99 623
391 524
963 786
464 903
840 990
204 293
485 974
177 436
703 950
921 966
246 258
256 901
152 507
349 200
423 913
736 410
421 894
990 285
347 248
17 177
37...
Output
13123
Answer
13123
Checker Log
ok answer is 13123
Test: #53, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 696
696 550
526 656
643 954
615 604
521 892
984 900
697 700
956 868
986 757
920 740
773 821
821 696
575 985
633 517
677 824
654 806
612 685
978 570
741 971
549 565
757 829
917 909
653 742
850 596
622 687
687 933
731 885
985 501
695 941
522 925
983 621
513 670
805 799
749 557
967 960
793 571
967 877
770 821
938 714
628 607
813 562
558 709
528 855
978 887
666 997
517 752
733 592
818 508
740 668
904 811
777 675
780 713
730 990
690 928
973 711
708...
Output
16313
Answer
16313
Checker Log
ok answer is 16313
Test: #54, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 639
639 994
942 99
151 845
845 829
829 755
755 476
476 691
691 676
676 529
529 998
918 369
449 40
40 300
300 456
456 59
59 958
955 217
220 441
441 855
855 425
425 685
685 841
841 51
51 571
571 497
497 362
362 249
249 653
653 758
758 864
864 274
274 449
449 404
404 593
593 142
142 685
685 951
935 699
715 93
93 289
289 746
746 136
136 630
630 499
499 59
59 822
822 492
492 332
332 794
794 605
605 270
270 404
404 857
857 275
275 671
671 463
463 4...
Output
1024
Answer
1024
Checker Log
ok answer is 1024
Test: #55, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 285
115 961
874 746
53 876
936 516
483 910
252 296
591 212
209 416
148 274
477 382
768 357
673 645
22 534
335 88
950 700
645 321
755 879
556 526
718 153
517 383
383 176
176 47
47 847
333 821
112 381
216 11
406 226
202 261
32 931
491 440
844 991
907 700
542 425
263 202
464 278
835 611
182 765
468 565
875 791
919 71
695 247
204 470
384 446
49 139
61 651
183 613
1 885
933 304
337 319
465 67
849 900
993 935
860 19
599 358
142 780
888 479
246 932
...
Output
21957
Answer
21957
Checker Log
ok answer is 21957
Test: #56, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 938
717 641
862 981
844 564
701 549
549 518
518 702
500 550
752 976
646 589
736 608
778 974
867 775
895 735
547 624
599 682
885 710
656 940
600 917
695 853
506 988
814 929
938 844
812 876
979 695
624 666
535 793
756 685
896 880
803 609
858 651
828 785
505 808
567 595
641 678
600 892
981 694
610 899
774 620
646 848
501 972
502 723
564 876
802 512
986 663
517 837
539 993
979 721
575 717
865 505
865 822
623 830
525 549
667 671
685 789
878 611
896...
Output
12736
Answer
12736
Checker Log
ok answer is 12736
Test: #57, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 63
63 10
10 958
928 527
557 944
944 592
592 498
498 431
431 201
201 559
559 98
98 590
590 922
902 296
316 764
764 413
413 862
862 377
377 89
89 305
305 27
27 480
480 493
493 926
926 500
500 623
623 321
321 393
393 594
594 737
737 118
118 541
541 458
458 850
850 95
95 656
656 515
515 456
456 321
321 513
513 614
614 540
540 493
493 123
123 522
522 7
7 821
821 707
707 44
44 956
955 9
10 246
246 203
203 536
536 681
681 766
766 508
508 82
82 841
...
Output
999
Answer
999
Checker Log
ok answer is 999
Test: #58, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 1
1 0
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #59, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
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
0 0
...
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #60, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
1 1
...
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #61, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0 1000
0...
Output
500000
Answer
500000
Checker Log
ok answer is 500000
Test: #62, time: 62 ms., memory: 12 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1000 0
0 1000
1...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #63, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1000
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
0 ...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #64, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1000
999 0
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
...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #65, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
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
0 0
...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #66, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1000
0 1000
1000 0
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
...
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #67, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 0
0 0
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #68, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
0 1000
1000 0
Output
1000
Answer
1000
Checker Log
ok answer is 1000
Test: #69, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 802
175 188
815 0
Output
815
Answer
815
Checker Log
ok answer is 815
Test: #70, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 910
910 976
976 0
Output
976
Answer
976
Checker Log
ok answer is 976
Test: #71, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
0 2
2 1
1 0
Output
2
Answer
2
Checker Log
ok answer is 2
*/