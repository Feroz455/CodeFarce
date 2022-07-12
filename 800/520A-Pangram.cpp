/*
A. Pangram
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

Output
Output "YES", if the string is a pangram and "NO" otherwise.

Examples
inputCopy
12
toosmallword
outputCopy
NO
inputCopy
35
TheQuickBrownFoxJumpsOverTheLazyDog
outputCopy
YES
*/
#include <iostream>
using namespace std;
int count[26];
int main()
{
    int index;
    char str[100], c;
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        cin >> c;
        str[i] = toupper(c);
        count[int(str[i]) - 65] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!count[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
12
toosmallword
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
35
TheQuickBrownFoxJumpsOverTheLazyDog
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
a
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
qwertyuiopasdfghjklzxcvbnm
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
ABCDEFGHIJKLMNOPQRSTUVWXYZ
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
48
thereisasyetinsufficientdataforameaningfulanswer
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
ToBeOrNotToBeThatIsTheQuestion
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
jackdawslovemybigsphinxofquarz
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
31
THEFIVEBOXINGWIZARDSJUMPQUICKLY
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
aaaaaaaaaaaaaaaaaaaaaaaaaa
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
MGJYIZDKsbhpVeNFlquRTcWoAx
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
fWMOhAPsbIVtyUEZrGNQXDklCJ
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #13, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
ngPMVFSThiRCwLEuyOAbKxQzDJ
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
nxYTzLFwzNolAumjgcAboyxAj
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
pRWdodGdxUESvcScPGbUoooZsC
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
66
BovdMlDzTaqKllZILFVfxbLGsRnzmtVVTmqiIDTYrossLEPlmsPrkUYtWEsGHVOnFj
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
mKtsiDRJypUieHIkvJaMFkwaKxcCIbBszZQLIyPpCDCjhNpAnYFngLjRpnKWpKWtGnwoSteeZXuFHWQxxxOpFlNeYTwKocsXuCoa
Output
YES
Answer
YES
Checker Log
ok answer is YES
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
EoqxUbsLjPytUHMiFnvcGWZdRK
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
vCUFRKElZOnjmXGylWQaHDiPst
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
WtrPuaHdXLKJMsnvQfgOiJZBEY
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
pGiFluRteQwkaVoPszJyNBChxM
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
cTUpqjPmANrdbzSFhlWIoKxgVY
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
LndjgvAEuICHKxPwqYztosrmBN
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
MdaXJrCipnOZLykfqHWEStevbU
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
EjDWsVxfKTqGXRnUMOLYcIzPba
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
xKwzRMpunYaqsdfaBgJcVElTHo
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
nRYUQsTwCPLZkgshfEXvBdoiMa
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
HNCQPfJutyAlDGsvRxZWMEbIdO
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
DaHJIpvKznQcmUyWsTGObXRFDe
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
kqvAnFAiRhzlJbtyuWedXSPcOG
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
hlrvgdwsIOyjcmUZXtAKEqoBpF
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
jLfXXiMhBTcAwQVReGnpKzdsYu
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
lNMcVuwItjxRBGAekjhyDsQOzf
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
RkSwbNoYldUGtAZvpFMcxhIJFE
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
DqspXZJTuONYieKgaHLMBwfVSC
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
ecOyUkqNljFHRVXtIpWabGMLDz
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #37, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
EKAvqZhBnPmVCDRlgWJfOusxYI
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
aLbgqeYchKdMrsZxIPFvTOWNjA
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
xfpBLsndiqtacOCHGmeWUjRkYz
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
XsbRKtqleZPNIVCdfUhyagAomJ
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #41, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
AmVtbrwquEthZcjKPLiyDgSoNF
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #42, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
OhvXDcwqAUmSEPRZGnjFLiKtNB
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #43, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
EKWJqCFLRmstxVBdYuinpbhaOg
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #44, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
mnbvcxxlkjhgfdsapoiuytrewq
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #45, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
aAbcdefghijklmnopqrstuvwxy
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #46, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
ABCDEFGHTYRIOPLabcdefghtyriopl
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #47, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
abcdefghijklmnopqrstuvwxy
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #48, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
abcdefhijklmnopqrstVxyzABC
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #49, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
qwertyuiopasdfghjklxcvbnm
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #50, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
34
TheQuickBrownFoxJumpsOverTheLayDog
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #51, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
abcdefghigklmnopqrstuvwxyz
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #52, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
abcdefghijklmnopqrstuvwxyA
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #53, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
qazwsxedcrfvtgbyhnujmikolQWERTYUIOASDFGHJKLZXCVBNM
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #54, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
35
TheQuickBrownFoxJumpsOverTheLasyDog
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #55, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
25
bcdefghijklmnopqrstuvwxyz
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #56, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
38
AbCdEfGhIjKlMnOpQrStVwXyZzzzzzzaaaaaaa
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #57, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
abcdefghiklmnopqrstvxyzABC
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #58, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
26
abcdefghijklmnopqrstuvwxzZ
Output
NO
Answer
NO
Checker Log
ok answer is NO
Test: #59, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXY
Output
NO
Answer
NO
Checker Log
ok answer is NO
*/