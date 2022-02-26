/*
A. Translation
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples
inputCopy
code
edoc
outputCopy
YES
inputCopy
abb
aba
outputCopy
NO
inputCopy
code
code
outputCopy
NO

*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());
    if(s == t)
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
code
edoc
Output
YES
Answer
YES
Checker Log
ok YES
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abb
aba
Output
NO
Answer
NO
Checker Log
ok NO
Test: #3, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
code
code
Output
NO
Answer
NO
Checker Log
ok NO
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abacaba
abacaba
Output
YES
Answer
YES
Checker Log
ok YES
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
q
q
Output
YES
Answer
YES
Checker Log
ok YES
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
asrgdfngfnmfgnhweratgjkk
asrgdfngfnmfgnhweratgjkk
Output
NO
Answer
NO
Checker Log
ok NO
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
z
a
Output
NO
Answer
NO
Checker Log
ok NO
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
asd
dsa
Output
YES
Answer
YES
Checker Log
ok YES
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abcdef
fecdba
Output
NO
Answer
NO
Checker Log
ok NO
Test: #10, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ywjjbirapvskozubvxoemscfwl
gnduubaogtfaiowjizlvjcu
Output
NO
Answer
NO
Checker Log
ok NO
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mfrmqxtzvgaeuleubcmcxcfqyruwzenguhgrmkuhdgnhgtgkdszwqyd
mfxufheiperjnhyczclkmzyhcxntdfskzkzdwzzujdinf
Output
NO
Answer
NO
Checker Log
ok NO
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
bnbnemvybqizywlnghlykniaxxxlkhftppbdeqpesrtgkcpoeqowjwhrylpsziiwcldodcoonpimudvrxejjo
tiynnekmlalogyvrgptbinkoqdwzuiyjlrldxhzjmmp
Output
NO
Answer
NO
Checker Log
ok NO
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pwlpubwyhzqvcitemnhvvwkmwcaawjvdiwtoxyhbhbxerlypelevasmelpfqwjk
struuzebbcenziscuoecywugxncdwzyfozhljjyizpqcgkyonyetarcpwkqhuugsqjuixsxptmbnlfupdcfigacdhhrzb
Output
NO
Answer
NO
Checker Log
ok NO
Test: #14, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
gdvqjoyxnkypfvdxssgrihnwxkeojmnpdeobpecytkbdwujqfjtxsqspxvxpqioyfagzjxupqqzpgnpnpxcuipweunqch
kkqkiwwasbhezqcfeceyngcyuogrkhqecwsyerdniqiocjehrpkljiljophqhyaiefjpavoom
Output
NO
Answer
NO
Checker Log
ok NO
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
umeszdawsvgkjhlqwzents
hxqhdungbylhnikwviuh
Output
NO
Answer
NO
Checker Log
ok NO
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
juotpscvyfmgntshcealgbsrwwksgrwnrrbyaqqsxdlzhkbugdyx
ibqvffmfktyipgiopznsqtrtxiijntdbgyy
Output
NO
Answer
NO
Checker Log
ok NO
Test: #17, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zbwueheveouatecaglziqmudxemhrsozmaujrwlqmppzoumxhamwugedikvkblvmxwuofmpafdprbcftew
ulczwrqhctbtbxrhhodwbcxwimncnexosksujlisgclllxokrsbnozthajnnlilyffmsyko
Output
NO
Answer
NO
Checker Log
ok NO
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nkgwuugukzcv
qktnpxedwxpxkrxdvgmfgoxkdfpbzvwsduyiybynbkouonhvmzakeiruhfmvrktghadbfkmwxduoqv
Output
NO
Answer
NO
Checker Log
ok NO
Test: #19, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
incenvizhqpcenhjhehvjvgbsnfixbatrrjstxjzhlmdmxijztphxbrldlqwdfimweepkggzcxsrwelodpnryntepioqpvk
dhjbjjftlvnxibkklxquwmzhjfvnmwpapdrslioxisbyhhfymyiaqhlgecpxamqnocizwxniubrmpyubvpenoukhcobkdojlybxd
Output
NO
Answer
NO
Checker Log
ok NO
Test: #20, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
w
w
Output
YES
Answer
YES
Checker Log
ok YES
Test: #21, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vz
zv
Output
YES
Answer
YES
Checker Log
ok YES
Test: #22, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ry
yr
Output
YES
Answer
YES
Checker Log
ok YES
Test: #23, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xou
uox
Output
YES
Answer
YES
Checker Log
ok YES
Test: #24, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
axg
gax
Output
NO
Answer
NO
Checker Log
ok NO
Test: #25, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zdsl
lsdz
Output
YES
Answer
YES
Checker Log
ok YES
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kudl
ldku
Output
NO
Answer
NO
Checker Log
ok NO
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zzlzwnqlcl
lclqnwzlzz
Output
YES
Answer
YES
Checker Log
ok YES
Test: #28, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vzzgicnzqooejpjzads
sdazjpjeooqzncigzzv
Output
YES
Answer
YES
Checker Log
ok YES
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
raqhmvmzuwaykjpyxsykr
xkysrypjkyawuzmvmhqar
Output
NO
Answer
NO
Checker Log
ok NO
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ngedczubzdcqbxksnxuavdjaqtmdwncjnoaicvmodcqvhfezew
wezefhvqcdomvciaonjcnwdmtqajdvauxnskxbqcdzbuzcdegn
Output
YES
Answer
YES
Checker Log
ok YES
Test: #31, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
muooqttvrrljcxbroizkymuidvfmhhsjtumksdkcbwwpfqdyvxtrlymofendqvznzlmim
mimlznzvqdnefomylrtxvydqfpwwbckdskmutjshhmfvdiumykziorbxcjlrrvttqooum
Output
YES
Answer
YES
Checker Log
ok YES
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaivg
gviayyikkitmuomcpiakhbxszgbnhvwyzkftwoagzixaearxpjacrnvpvbuzenvovehkmmxvblqyxvctroddksdsgebcmlluqpxv
Output
YES
Answer
YES
Checker Log
ok YES
Test: #33, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mnhaxtaopjzrkqlbroiyipitndczpunwygstmzevgyjdzyanxkdqnvgkikfabwouwkkbzuiuvgvxgpizsvqsbwepktpdrgdkmfdc
cdfmkdgrdptkpewbsqvszipgxvgvuiuzbkkwuowbafkikgvnqdkxnayzdjygvezmtsgywnupocdntipiyiorblqkrzjpzatxahnm
Output
NO
Answer
NO
Checker Log
ok NO
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
dgxmzbqofstzcdgthbaewbwocowvhqpinehpjatnnbrijcolvsatbblsrxabzrpszoiecpwhfjmwuhqrapvtcgvikuxtzbftydkw
wkdytfbztxukivgctvparqhuwmjfhwpceiozsprzbaxrslbbqasvlocjirbnntajphenipthvwocowbweabhtgdcztsfoqbzmxgd
Output
NO
Answer
NO
Checker Log
ok NO
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
gxoixiecetohtgjgbqzvlaobkhstejxdklghowtvwunnnvauriohuspsdmpzckprwajyxldoyckgjivjpmbfqtszmtocovxwgeh
hegwxvocotmzstqfbmpjvijgkcyodlxyjawrpkczpmdspsuhoiruavnnnuwvtwohglkdxjetshkboalvzqbgjgthoteceixioxg
Output
YES
Answer
YES
Checker Log
ok YES
Test: #36, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sihxuwvmaambplxvjfoskinghzicyfqebjtkysotattkahssumfcgrkheotdxwjckpvapbkaepqrxseyfrwtyaycmrzsrsngkh
hkgnsrszrmcyaytwrfyesxrqpeakbpavpkcjwxdtoehkrgcfmusshakttatosyktjbeqfycizhgniksofjvxlpbmaamvwuxhis
Output
YES
Answer
YES
Checker Log
ok YES
Test: #37, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ycnahksbughnonldzrhkysujmylcgcfuludjvjiahtkyzqvkopzqcnwhltbzfugzojqkjjlggmvnultascmygelkiktmfieok
koeifmtkiklegkmcsatlunvmggkjjlqjozgufzbtlhwncqzpokvqzykthaijvjdulufcgclymjusyyhrzdlnonhgubskhancy
Output
NO
Answer
NO
Checker Log
ok NO
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wbqasaehtkfojruzyhrlgwmtyiovmzyfifslvlemhqheyaelzwnthrenjsbmntwaoryzwfbxmscmypvxlfmzpnkkjlvwvmtz
ztmvwvljkknpzmflxvpymcsmxbfwzyroawtnmbsjnerhtnwzleayehqhmelvlsfifyzmvoiytmwglrhyzurjofktheasaqbw
Output
YES
Answer
YES
Checker Log
ok YES
Test: #39, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
imippqurprbhfugngtgifelytadegwrgaefnfhbjjnmzikvjaccotqzemufqieqldgnbmviisgkynzeldlhqxuqphjfmyij
jiymfjhpquxqhldleznykgsiivmbngdlqeiqfumezqtoccajvkizmnjjbhfnfeagrwgedatylefigtgngufhbrpruqppimi
Output
YES
Answer
YES
Checker Log
ok YES
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
bikydffiuisckpvzqlteqfhegsagimodb
bdomigasgehfqetlqzvpkcsiuiffdykib
Output
YES
Answer
YES
Checker Log
ok YES
*/