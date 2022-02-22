/*
A. Word
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

Examples
inputCopy
HoUse
outputCopy
house
inputCopy
ViP
outputCopy
VIP
inputCopy
maTRIx
outputCopy
matrix
*/
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char c;
    int checku = 0, checkl = 0;
    for (int i = 0; i < str.size(); i++)
    {
        c = str[i];
        if (isupper(c))
            checku++;
        else
            checkl++;
    }

    if (checku > checkl)
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
HoUse
Output
house
Answer
house
Checker Log
ok house
Test: #2, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ViP
Output
VIP
Answer
VIP
Checker Log
ok VIP
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
maTRIx
Output
matrix
Answer
matrix
Checker Log
ok matrix
Test: #4, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
BNHWpnpawg
Output
bnhwpnpawg
Answer
bnhwpnpawg
Checker Log
ok bnhwpnpawg
Test: #5, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
VTYGP
Output
VTYGP
Answer
VTYGP
Checker Log
ok VTYGP
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CHNenu
Output
chnenu
Answer
chnenu
Checker Log
ok chnenu
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ERPZGrodyu
Output
erpzgrodyu
Answer
erpzgrodyu
Checker Log
ok erpzgrodyu
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
KSXBXWpebh
Output
KSXBXWPEBH
Answer
KSXBXWPEBH
Checker Log
ok KSXBXWPEBH
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
qvxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaiv
Output
qvxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaiv
Answer
qvxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaiv
Checker Log
ok qvxpqullmcbegsdskddortcvxyqlbvxmmkhevovnezubvpvnrcajpxraeaxizgaowtfkzywvhnbgzsxbhkaipcmoumtikkiyyaiv
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Amnhaxtaopjzrkqlbroiyipitndczpunwygstmzevgyjdzyanxkdqnvgkikfabwouwkkbzuiuvgvxgpizsvqsbwepktpdrgdkmfd
Output
amnhaxtaopjzrkqlbroiyipitndczpunwygstmzevgyjdzyanxkdqnvgkikfabwouwkkbzuiuvgvxgpizsvqsbwepktpdrgdkmfd
Answer
amnhaxtaopjzrkqlbroiyipitndczpunwygstmzevgyjdzyanxkdqnvgkikfabwouwkkbzuiuvgvxgpizsvqsbwepktpdrgdkmfd
Checker Log
ok amnhaxtaopjzrkqlbroiyipitndczpunwygstmzevgyjdzyanxkdqnvgkikfabwouwkkbzuiuvgvxgpizsvqsbwepktpdrgdkmfd
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ISAGFJFARYFBLOPQDSHWGMCNKMFTLVFUGNJEWGWNBLXUIATXEkqiettmmjgydwcpafqrppdsrrrtguinqbgmzzfqwonkpgpcwenv
Output
isagfjfaryfblopqdshwgmcnkmftlvfugnjewgwnblxuiatxekqiettmmjgydwcpafqrppdsrrrtguinqbgmzzfqwonkpgpcwenv
Answer
isagfjfaryfblopqdshwgmcnkmftlvfugnjewgwnblxuiatxekqiettmmjgydwcpafqrppdsrrrtguinqbgmzzfqwonkpgpcwenv
Checker Log
ok isagfjfaryfblopqdshwgmcnkmftlvfugnjewgwnblxuiatxekqiettmmjgydwcpafqrppdsrrrtguinqbgmzzfqwonkpgpcwenv
Test: #12, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
XHRPXZEGHSOCJPICUIXSKFUZUPYTSGJSDIYBCMNMNBPNDBXLXBzhbfnqvwcffvrdhtickyqhupmcehlsyvncqmfhautvxudqdhgg
Output
xhrpxzeghsocjpicuixskfuzupytsgjsdiybcmnmnbpndbxlxbzhbfnqvwcffvrdhtickyqhupmcehlsyvncqmfhautvxudqdhgg
Answer
xhrpxzeghsocjpicuixskfuzupytsgjsdiybcmnmnbpndbxlxbzhbfnqvwcffvrdhtickyqhupmcehlsyvncqmfhautvxudqdhgg
Checker Log
ok xhrpxzeghsocjpicuixskfuzupytsgjsdiybcmnmnbpndbxlxbzhbfnqvwcffvrdhtickyqhupmcehlsyvncqmfhautvxudqdhgg
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
RJIQZMJCIMSNDBOHBRAWIENODSALETAKGKPYUFGVEFGCBRENZGAdkcetqjljtmttlonpekcovdzebzdkzggwfsxhapmjkdbuceak
Output
RJIQZMJCIMSNDBOHBRAWIENODSALETAKGKPYUFGVEFGCBRENZGADKCETQJLJTMTTLONPEKCOVDZEBZDKZGGWFSXHAPMJKDBUCEAK
Answer
RJIQZMJCIMSNDBOHBRAWIENODSALETAKGKPYUFGVEFGCBRENZGADKCETQJLJTMTTLONPEKCOVDZEBZDKZGGWFSXHAPMJKDBUCEAK
Checker Log
ok RJIQZMJCIMSNDBOHBRAWIENODSALETAKGKPYUFGVEFGCBRENZGADKCETQJLJTMTTLONPEKCOVDZEBZDKZGGWFSXHAPMJKDBUCEAK
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
DWLWOBHNMMGTFOLFAECKBRNNGLYLYDXTGTVRLMEESZOIUATZZZXUFUZDLSJXMEVRTESSFBWLNZZCLCQWEVNNUCXYVHNGNXHCBDFw
Output
DWLWOBHNMMGTFOLFAECKBRNNGLYLYDXTGTVRLMEESZOIUATZZZXUFUZDLSJXMEVRTESSFBWLNZZCLCQWEVNNUCXYVHNGNXHCBDFW
Answer
DWLWOBHNMMGTFOLFAECKBRNNGLYLYDXTGTVRLMEESZOIUATZZZXUFUZDLSJXMEVRTESSFBWLNZZCLCQWEVNNUCXYVHNGNXHCBDFW
Checker Log
ok DWLWOBHNMMGTFOLFAECKBRNNGLYLYDXTGTVRLMEESZOIUATZZZXUFUZDLSJXMEVRTESSFBWLNZZCLCQWEVNNUCXYVHNGNXHCBDFW
Test: #15, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
NYCNHJWGBOCOTSPETKKHVWFGAQYNHOVJWJHCIEFOUQZXOYUIEQDZALFKTEHTVDBVJMEUBJUBCMNVPWGDPNCHQHZJRCHYRFPVIGUB
Output
NYCNHJWGBOCOTSPETKKHVWFGAQYNHOVJWJHCIEFOUQZXOYUIEQDZALFKTEHTVDBVJMEUBJUBCMNVPWGDPNCHQHZJRCHYRFPVIGUB
Answer
NYCNHJWGBOCOTSPETKKHVWFGAQYNHOVJWJHCIEFOUQZXOYUIEQDZALFKTEHTVDBVJMEUBJUBCMNVPWGDPNCHQHZJRCHYRFPVIGUB
Checker Log
ok NYCNHJWGBOCOTSPETKKHVWFGAQYNHOVJWJHCIEFOUQZXOYUIEQDZALFKTEHTVDBVJMEUBJUBCMNVPWGDPNCHQHZJRCHYRFPVIGUB
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
igxoixiecetohtgjgbqzvlaobkhstejxdklghowtvwunnnvauriohuspsdmpzckprwajyxldoyckgjivjpmbfqtszmtocovxwge
Output
igxoixiecetohtgjgbqzvlaobkhstejxdklghowtvwunnnvauriohuspsdmpzckprwajyxldoyckgjivjpmbfqtszmtocovxwge
Answer
igxoixiecetohtgjgbqzvlaobkhstejxdklghowtvwunnnvauriohuspsdmpzckprwajyxldoyckgjivjpmbfqtszmtocovxwge
Checker Log
ok igxoixiecetohtgjgbqzvlaobkhstejxdklghowtvwunnnvauriohuspsdmpzckprwajyxldoyckgjivjpmbfqtszmtocovxwge
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Ykkekrsqolzryiwsmdlnbmfautxxxauoojrddvwklgnlyrfcvhorrzbmtcrvpaypqhcffdqhwziipyyskcmztjprjqvmzzqhqnw
Output
ykkekrsqolzryiwsmdlnbmfautxxxauoojrddvwklgnlyrfcvhorrzbmtcrvpaypqhcffdqhwziipyyskcmztjprjqvmzzqhqnw
Answer
ykkekrsqolzryiwsmdlnbmfautxxxauoojrddvwklgnlyrfcvhorrzbmtcrvpaypqhcffdqhwziipyyskcmztjprjqvmzzqhqnw
Checker Log
ok ykkekrsqolzryiwsmdlnbmfautxxxauoojrddvwklgnlyrfcvhorrzbmtcrvpaypqhcffdqhwziipyyskcmztjprjqvmzzqhqnw
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
YQOMLKYAORUQQUCQZCDYMIVDHGWZFFRMUVTAWCHERFPMNRYRIkgqrciokgajamehmcxgerpudvsqyonjonsxgbnefftzmygncks
Output
yqomlkyaoruqqucqzcdymivdhgwzffrmuvtawcherfpmnryrikgqrciokgajamehmcxgerpudvsqyonjonsxgbnefftzmygncks
Answer
yqomlkyaoruqqucqzcdymivdhgwzffrmuvtawcherfpmnryrikgqrciokgajamehmcxgerpudvsqyonjonsxgbnefftzmygncks
Checker Log
ok yqomlkyaoruqqucqzcdymivdhgwzffrmuvtawcherfpmnryrikgqrciokgajamehmcxgerpudvsqyonjonsxgbnefftzmygncks
Test: #19, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CDOZDPBVVVHNBJVBYHEOXWFLJKRWJCAJMIFCOZWWYFKVWOGTVJcuusigdqfkumewjtdyitveeiaybwrhomrwmpdipjwiuxfnwuz
Output
CDOZDPBVVVHNBJVBYHEOXWFLJKRWJCAJMIFCOZWWYFKVWOGTVJCUUSIGDQFKUMEWJTDYITVEEIAYBWRHOMRWMPDIPJWIUXFNWUZ
Answer
CDOZDPBVVVHNBJVBYHEOXWFLJKRWJCAJMIFCOZWWYFKVWOGTVJCUUSIGDQFKUMEWJTDYITVEEIAYBWRHOMRWMPDIPJWIUXFNWUZ
Checker Log
ok CDOZDPBVVVHNBJVBYHEOXWFLJKRWJCAJMIFCOZWWYFKVWOGTVJCUUSIGDQFKUMEWJTDYITVEEIAYBWRHOMRWMPDIPJWIUXFNWUZ
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WHIUVEXHVOOIJIDVJVPQUBJMEVPMPDKQWJKFBZSGSKUXMIPPMJWuckzcpxosodcjaaakvlxpbiigsiauviilylnnqlyucziihqg
Output
WHIUVEXHVOOIJIDVJVPQUBJMEVPMPDKQWJKFBZSGSKUXMIPPMJWUCKZCPXOSODCJAAAKVLXPBIIGSIAUVIILYLNNQLYUCZIIHQG
Answer
WHIUVEXHVOOIJIDVJVPQUBJMEVPMPDKQWJKFBZSGSKUXMIPPMJWUCKZCPXOSODCJAAAKVLXPBIIGSIAUVIILYLNNQLYUCZIIHQG
Checker Log
ok WHIUVEXHVOOIJIDVJVPQUBJMEVPMPDKQWJKFBZSGSKUXMIPPMJWUCKZCPXOSODCJAAAKVLXPBIIGSIAUVIILYLNNQLYUCZIIHQG
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
VGHUNFOXKETUYMZDJNGTAOIOANYXSGYNFOGOFFLDAWEUKYFOZXCJTCAFXZYLQZERYZLRSQXYQGAPCSUDPMEYTNCTTTMFAGVDWBO
Output
VGHUNFOXKETUYMZDJNGTAOIOANYXSGYNFOGOFFLDAWEUKYFOZXCJTCAFXZYLQZERYZLRSQXYQGAPCSUDPMEYTNCTTTMFAGVDWBO
Answer
VGHUNFOXKETUYMZDJNGTAOIOANYXSGYNFOGOFFLDAWEUKYFOZXCJTCAFXZYLQZERYZLRSQXYQGAPCSUDPMEYTNCTTTMFAGVDWBO
Checker Log
ok VGHUNFOXKETUYMZDJNGTAOIOANYXSGYNFOGOFFLDAWEUKYFOZXCJTCAFXZYLQZERYZLRSQXYQGAPCSUDPMEYTNCTTTMFAGVDWBO
Test: #22, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
EDUANHCQDOCJHFONTTSWBUJSTTIXBIXMAIUFSGFLXWAYIURTVAVZPYQDLAWIGCLMPHXCEFCJPFAAHXVNGQUFNHADAIUAZIDMHDd
Output
EDUANHCQDOCJHFONTTSWBUJSTTIXBIXMAIUFSGFLXWAYIURTVAVZPYQDLAWIGCLMPHXCEFCJPFAAHXVNGQUFNHADAIUAZIDMHDD
Answer
EDUANHCQDOCJHFONTTSWBUJSTTIXBIXMAIUFSGFLXWAYIURTVAVZPYQDLAWIGCLMPHXCEFCJPFAAHXVNGQUFNHADAIUAZIDMHDD
Checker Log
ok EDUANHCQDOCJHFONTTSWBUJSTTIXBIXMAIUFSGFLXWAYIURTVAVZPYQDLAWIGCLMPHXCEFCJPFAAHXVNGQUFNHADAIUAZIDMHDD
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
EBWOVSNLYTWWXrnovgugogtjahnmatomubebyxakas
Output
ebwovsnlytwwxrnovgugogtjahnmatomubebyxakas
Answer
ebwovsnlytwwxrnovgugogtjahnmatomubebyxakas
Checker Log
ok ebwovsnlytwwxrnovgugogtjahnmatomubebyxakas
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AORNNDKTRLRVGDPXJKXFTPFpopuzrlqumrxssskvbm
Output
AORNNDKTRLRVGDPXJKXFTPFPOPUZRLQUMRXSSSKVBM
Answer
AORNNDKTRLRVGDPXJKXFTPFPOPUZRLQUMRXSSSKVBM
Checker Log
ok AORNNDKTRLRVGDPXJKXFTPFPOPUZRLQUMRXSSSKVBM
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
DBBZJCWQEVGYHEEUHJAWRHBDPsnplijbwtdibqrrheebfxqcvn
Output
dbbzjcwqevgyheeuhjawrhbdpsnplijbwtdibqrrheebfxqcvn
Answer
dbbzjcwqevgyheeuhjawrhbdpsnplijbwtdibqrrheebfxqcvn
Checker Log
ok dbbzjcwqevgyheeuhjawrhbdpsnplijbwtdibqrrheebfxqcvn
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
t
Output
t
Answer
t
Checker Log
ok t
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
N
Output
N
Answer
N
Checker Log
ok N
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kv
Output
kv
Answer
kv
Checker Log
ok kv
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Ur
Output
ur
Answer
ur
Checker Log
ok ur
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CN
Output
CN
Answer
CN
Checker Log
ok CN
*/