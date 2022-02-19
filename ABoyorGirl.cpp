/*
A. Boy or Girl
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

Examples
inputCopy
wjmzbmr
outputCopy
CHAT WITH HER!
inputCopy
xiaodao
outputCopy
IGNORE HIM!
inputCopy
sevenkplus
outputCopy
CHAT WITH HER!
Note
s e v  n k p l u
For the first example. There are 6 distinct characters in "wjmzbmr". These characters are: "w", "j", "m", "z", "b", "r". So wjmzbmr is a female and you should print "CHAT WITH HER!".
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    char s;
    int check = 0;
    cin >> str;
    while (str.size() != 0)
    {
        s = str[0];
        str.erase(remove(str.begin(), str.end(), s), str.end()); // remove A from string
        check++;
    }
    if ((check % 2) == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wjmzbmr
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xiaodao
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sevenkplus
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pezu
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #5, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wnemlgppy
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qsxxuoynwtebujwpxwpajitiwxaxwgbcylxneqiebzfphugwkftpaikixmumkhfbjiswmvzbtiyifbx
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qwbdfzfylckctudyjlyrtmvbidfatdoqfmrfshsqqmhzohhsczscvwzpwyoyswhktjlykumhvaounpzwpxcspxwlgt
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nuezoadauueermoeaabjrkxttkatspjsjegjcjcdmcxgodowzbwuqncfbeqlhkk
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lggvdmulrsvtuagoavstuyufhypdxfomjlzpnduulukszqnnwfvxbvxyzmleocmofwclmzz
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tgcdptnkc
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wvfgnfrzabgibzxhzsojskmnlmrokydjoexnvi
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sxtburpzskucowowebgrbovhadrrayamuwypmmxhscrujkmcgvyinp
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pjqxhvxkyeqqvyuujxhmbspatvrckhhkfloottuybjivkkhpyivcighxumavrxzxslfpggnwbtalmhysyfllznphzia
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
fpellxwskyekoyvrfnuf
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #16, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xninyvkuvakfbs
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vnxhrweyvhqufpfywdwftoyrfgrhxuamqhblkvdpxmgvphcbeeqbqssresjifwyzgfhurmamhkwupymuomak
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kmsk
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #19, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lqonogasrkzhryjxppjyriyfxmdfubieglthyswz
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #20, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ndormkufcrkxlihdhmcehzoimcfhqsmombnfjrlcalffq
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zqzlnnuwcfufwujygtczfakhcpqbtxtejrbgoodychepzdphdahtxyfpmlrycyicqthsgm
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ppcpbnhwoizajrl
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sgubujztzwkzvztitssxxxwzanfmddfqvv
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ptkyaxycecpbrjnvxcjtbqiocqcswnmicxbvhdsptbxyxswbw
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yhbtzfppwcycxqjpqdfmjnhwaogyuaxamwxpnrdrnqsgdyfvxu
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ojjvpnkrxibyevxk
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #27, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wjweqcrqfuollfvfbiyriijovweg
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hkdbykboclchfdsuovvpknwqr
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #29, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
stjvyfrfowopwfjdveduedqylerqugykyu
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
rafcaanqytfclvfdegak
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xczn
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #32, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
arcoaeozyeawbveoxpmafxxzdjldsielp
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
smdfafbyehdylhaleevhoggiurdgeleaxkeqdixyfztkuqsculgslheqfafxyghyuibdgiuwrdxfcitojxika
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vbpfgjqnhfazmvtkpjrdasfhsuxnpiepxfrzvoh
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
dbdokywnpqnotfrhdbrzmuyoxfdtrgrzcccninbtmoqvxfatcqg
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
udlpagtpq
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #37, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zjurevbytijifnpfuyswfchdzelxheboruwjqijxcucylysmwtiqsqqhktexcynquvcwhbjsipy
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qagzrqjomdwhagkhrjahhxkieijyten
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #39, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
achhcfjnnfwgoufxamcqrsontgjjhgyfzuhklkmiwybnrlsvblnsrjqdytglipxsulpnphpjpoewvlusalsgovwnsngb
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qbkjsdwpahdbbohggbclfcufqelnojoehsxxkr
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cpvftiwgyvnlmbkadiafddpgfpvhqqvuehkypqjsoibpiudfvpkhzlfrykc
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lnpdosnceumubvk
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #43, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
efrk
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #44, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
temnownneghnrujforif
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #45, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ottnneymszwbumgobazfjyxewkjakglbfflsajuzescplpcxqta
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #46, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
eswpaclodzcwhgixhpyzvhdwsgneqidanbzdzszquefh
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #47, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
gwntwbpj
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #48, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wuqvlbblkddeindiiswsinkfrnkxghhwunzmmvyovpqapdfbolyim
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #49, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
swdqsnzmzmsyvktukaoyqsqzgfmbzhezbfaqeywgwizrwjyzquaahucjchegknqaioliqd
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #50, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vlhrpzezawyolhbmvxbwhtjustdbqggexmzxyieihjlelvwjosmkwesfjmramsikhkupzvfgezmrqzudjcalpjacmhykhgfhrjx
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #51, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lxxwbkrjgnqjwsnflfnsdyxihmlspgivirazsbveztnkuzpaxtygidniflyjheejelnjyjvgkgvdqks
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #52, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wpxbxzfhtdecetpljcrvpjjnllosdqirnkzesiqeukbedkayqx
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #53, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vmzxgacicvweclaodrunmjnfwtimceetsaoickarqyrkdghcmyjgmtgsqastcktyrjgvjqimdc
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #54, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yzlzmesxdttfcztooypjztlgxwcr
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #55, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qpbjwzwgdzmeluheirjrvzrhbmagfsjdgvzgwumjtjzecsfkrfqjasssrhhtgdqqfydlmrktlgfc
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #56, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aqzftsvezdgouyrirsxpbuvdjupnzvbhguyayeqozfzymfnepvwgblqzvmxxkxcilmsjvcgyqykpoaktjvsxbygfgsalbjoq
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #57, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
znicjjgijhrbdlnwmtjgtdgziollrfxroabfhadygnomodaembllreorlyhnehijfyjbfxucazellblegyfrzuraogadj
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #58, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qordzrdiknsympdrkgapjxokbldorpnmnpucmwakklmqenpmkom
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #59, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wqfldgihuxfktzanyycluzhtewmwvnawqlfoavuguhygqrrxtstxwouuzzsryjqtfqo
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #60, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vujtrrpshinkskgyknlcfckmqdrwtklkzlyipmetjvaqxdsslkskschbalmdhzsdrrjmxdltbtnxbh
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #61, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zioixjibuhrzyrbzqcdjbbhhdmpgmqykixcxoqupggaqajuzonrpzihbsogjfsrrypbiphehonyhohsbybnnukqebopppa
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #62, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
oh
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #63, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kxqthadqesbpgpsvpbcbznxpecqrzjoilpauttzlnxvaczcqwuri
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #64, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zwlunigqnhrwirkvufqwrnwcnkqqonebrwzcshcbqqwkjxhymjjeakuzjettebciadjlkbfp
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #65, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
fjuldpuejgmggvvigkwdyzytfxzwdlofrpifqpdnhfyroginqaufwgjcbgshyyruwhofctsdaisqpjxqjmtpp
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #66, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xiwntnheuitbtqxrmzvxmieldudakogealwrpygbxsbluhsqhtwmdlpjwzyafckrqrdduonkgo
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #67, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mnmbupgo
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #68, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mcjehdiygkbmrbfjqwpwxidbdfelifwhstaxdapigbymmsgrhnzsdjhsqchl
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #69, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yocxrzspinchmhtmqo
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #70, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vasvvnpymtgjirnzuynluluvmgpquskuaafwogeztfnvybblajvuuvfomtifeuzpikjrolzeeoftv
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #71, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ecsdicrznvglwggrdbrvehwzaenzjutjydhvimtqegweurpxtjkmpcznshtrvotkvrghxhacjkedidqqzrduzad
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #72, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ubvhyaebyxoghakajqrpqpctwbrfqzli
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #73, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
gogbxfeqylxoummvgxpkoqzsmobasesxbqjjktqbwqxeiaagnnhbvepbpy
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #74, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nheihhxkbbrmlpxpxbhnpofcjmxemyvqqdbanwd
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #75, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
acrzbavz
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #76, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
drvzznznvrzskftnrhvvzxcalwutxmdza
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #77, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
oacwxipdfcoabhkwxqdbtowiekpnflnqhlrkustgzryvws
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #78, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tpnwfmfsibnccvdwjvzviyvjfljupinfigfunyff
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #79, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
gavaihhamfolcndgytcsgucqdqngxkrlovpthvteacmmthoglxu
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #80, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hsfcfvameeupldgvchmogrvwxrvsmnwxxkxoawwodtsahqvehlcw
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #81, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sbkydrscoojychxchqsuciperfroumenelgiyiwlqfwximrgdbyvkmacy
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #82, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
rhh
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #83, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zhdouqfmlkenjzdijxdfxnlegxeuvhelo
Output
IGNORE HIM!
Answer
IGNORE HIM!
Checker Log
ok IGNORE HIM!
Test: #84, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yufkkfwyhhvcjntsgsvpzbhqtmtgyxifqoewmuplphykmptfdebjxuaxigomjtwgtljwdjhjernkitifbomifbhysnmadtnyn
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
Test: #85, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
urigreuzpxnej
Output
CHAT WITH HER!
Answer
CHAT WITH HER!
Checker Log
ok CHAT WITH HER!
*/