/*
A. Chat room
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

Examples
inputCopy
ahhellllloou
outputCopy
YES
inputCopy
hlelo
outputCopy
NO
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int check = 0;
    string str, str1 = "hello";
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int j = 0, i = 0; i < str.size(); i++)
    {
        if (str1[j] == str[i])
        {
            j++;
            check++;
        }
    }
    if (check == str1.size())
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ahhellllloou
Output
YES
Answer
YES
Checker Log
ok YES
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hlelo
Output
NO
Answer
NO
Checker Log
ok NO
Test: #3, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
helhcludoo
Output
YES
Answer
YES
Checker Log
ok YES
Test: #4, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hehwelloho
Output
YES
Answer
YES
Checker Log
ok YES
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pnnepelqomhhheollvlo
Output
YES
Answer
YES
Checker Log
ok YES
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tymbzjyqhymedasloqbq
Output
NO
Answer
NO
Checker Log
ok NO
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yehluhlkwo
Output
NO
Answer
NO
Checker Log
ok NO
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hatlevhhalrohairnolsvocafgueelrqmlqlleello
Output
YES
Answer
YES
Checker Log
ok YES
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hhhtehdbllnhwmbyhvelqqyoulretpbfokflhlhreeflxeftelziclrwllrpflflbdtotvlqgoaoqldlroovbfsq
Output
YES
Answer
YES
Checker Log
ok YES
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
rzlvihhghnelqtwlexmvdjjrliqllolhyewgozkuovaiezgcilelqapuoeglnwmnlftxxiigzczlouooi
Output
YES
Answer
YES
Checker Log
ok YES
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pfhhwctyqdlkrwhebfqfelhyebwllhemtrmeblgrynmvyhioesqklclocxmlffuormljszllpoo
Output
YES
Answer
YES
Checker Log
ok YES
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lqllcolohwflhfhlnaow
Output
NO
Answer
NO
Checker Log
ok NO
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
heheeellollvoo
Output
YES
Answer
YES
Checker Log
ok YES
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hellooo
Output
YES
Answer
YES
Checker Log
ok YES
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
o
Output
NO
Answer
NO
Checker Log
ok NO
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hhqhzeclohlehljlhtesllylrolmomvuhcxsobtsckogdv
Output
YES
Answer
YES
Checker Log
ok YES
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yoegfuzhqsihygnhpnukluutocvvwuldiighpogsifealtgkfzqbwtmgghmythcxflebrkctlldlkzlagovwlstsghbouk
Output
YES
Answer
YES
Checker Log
ok YES
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
uatqtgbvrnywfacwursctpagasnhydvmlinrcnqrry
Output
NO
Answer
NO
Checker Log
ok NO
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tndtbldbllnrwmbyhvqaqqyoudrstpbfokfoclnraefuxtftmgzicorwisrpfnfpbdtatvwqgyalqtdtrjqvbfsq
Output
NO
Answer
NO
Checker Log
ok NO
Test: #20, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
rzlvirhgemelnzdawzpaoqtxmqucnahvqnwldklrmjiiyageraijfivigvozgwngiulttxxgzczptusoi
Output
YES
Answer
YES
Checker Log
ok YES
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kgyelmchocojsnaqdsyeqgnllytbqietpdlgknwwumqkxrexgdcnwoldicwzwofpmuesjuxzrasscvyuqwspm
Output
YES
Answer
YES
Checker Log
ok YES
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pnyvrcotjvgynbeldnxieghfltmexttuxzyac
Output
NO
Answer
NO
Checker Log
ok NO
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
dtwhbqoumejligbenxvzhjlhosqojetcqsynlzyhfaevbdpekgbtjrbhlltbceobcok
Output
YES
Answer
YES
Checker Log
ok YES
Test: #24, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
crrfpfftjwhhikwzeedrlwzblckkteseofjuxjrktcjfsylmlsvogvrcxbxtffujqshslemnixoeezivksouefeqlhhokwbqjz
Output
YES
Answer
YES
Checker Log
ok YES
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
jhfbndhyzdvhbvhmhmefqllujdflwdpjbehedlsqfdsqlyelwjtyloxwsvasrbqosblzbowlqjmyeilcvotdlaouxhdpoeloaovb
Output
YES
Answer
YES
Checker Log
ok YES
Test: #26, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hwlghueoemiqtjhhpashjsouyegdlvoyzeunlroypoprnhlyiwiuxrghekaylndhrhllllwhbebezoglydcvykllotrlaqtvmlla
Output
YES
Answer
YES
Checker Log
ok YES
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wshiaunnqnqxodholbipwhhjmyeblhgpeleblklpzwhdunmpqkbuzloetmwwxmeltkrcomulxauzlwmlklldjodozxryghsnwgcz
Output
YES
Answer
YES
Checker Log
ok YES
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
shvksednttggehroewuiptvvxtrzgidravtnjwuqrlnnkxbplctzkckinpkgjopjfoxdbojtcvsuvablcbkrzajrlhgobkcxeqti
Output
YES
Answer
YES
Checker Log
ok YES
Test: #29, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hyyhddqhxhekehkwfhlnlsihzefwchzerevcjtokefplholrbvxlltdlafjxrfhleglrvlolojoqaolagtbeyogxlbgfolllslli
Output
YES
Answer
YES
Checker Log
ok YES
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
iaagrdhhelxpdegueiulflquvlzidoprzkehthkldaytrjwhyhprwjxlltinxvuilxohqgjqcvkkdcuoliekcnlilwgqlnlzouoo
Output
YES
Answer
YES
Checker Log
ok YES
Test: #31, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wfluaeseldgxyvxpwuhkptdmlflnlhktwxiabsvkolsquymrmhzczzoybvlilhmvsuunggvgxzgyyffk
Output
NO
Answer
NO
Checker Log
ok NO
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
loee
Output
NO
Answer
NO
Checker Log
ok NO
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
izdipwylefqmjbuoznfglgcfvedeouflkeehxbasaqmiooppfsqlhprospqgxvzrcpwlfdddngoqvpwvggsnvvxhmjoslwjudjlo
Output
NO
Answer
NO
Checker Log
ok NO
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pplynflbjlseflaegzqpdxswgunhnlglqhycrbcwdfhclmcrwekkzsoosmfblljeenwfjyifcvxihhhbyhmhlkvtskeglaovjnsi
Output
YES
Answer
YES
Checker Log
ok YES
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xqjqmenkodmlhzyzmmvofdngktygbbxbzpluzcohohmalkoeuwfikblltaaigv
Output
NO
Answer
NO
Checker Log
ok NO
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hello
Output
YES
Answer
YES
Checker Log
ok YES
Test: #37, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
oohell
Output
NO
Answer
NO
Checker Log
ok NO
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hell
Output
NO
Answer
NO
Checker Log
ok NO
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
eloellohoelo
Output
NO
Answer
NO
Checker Log
ok NO
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
helllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllo
Output
YES
Answer
YES
Checker Log
ok YES
*/