/*
A. cAPS lOCK
time limit per test0.5 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
wHAT DO WE NEED cAPS LOCK FOR?

Caps lock is a computer keyboard key. Pressing it sets an input mode in which typed letters are
capital by default. If it is pressed by accident, it leads to accidents like the one we had in
the first passage.

Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

either it only contains uppercase letters;
or all letters except for the first one are uppercase.
In this case we should automatically change the case of all letters. For example, the case of
the letters that form words "hELLO", "HTTP", "z" should be changed.

Write a program that applies the rule mentioned above. If the rule cannot be applied, the program
should leave the word unchanged.

Input
The first line of the input data contains a word consisting of uppercase and lowercase Latin letters.
The word's length is from 1 to 100 characters, inclusive.

Output
Print the result of the given word's processing.

Examples
inputCopy
cAPS
outputCopy
Caps
inputCopy
Lock
outputCopy
Lock

*/
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length(), ck = 0;
    for (int i = 0; i < len; i++)
    {
        if (isupper(str[i]))
            ck++;
    }
    if (len == ck)
    {
        for (int i = 0; i < str.length(); i++)
        {
            putchar(tolower(str[i]));
        }
    }
    else if ((islower(str[0]) && ck == (len - 1)))
    {
        putchar(toupper(str[0]));
        for (int i = 1; i < str.length(); i++)
        {
            putchar(tolower(str[i]));
        }
    }
    else
        cout << str;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cAPS
Output
Caps
Answer
Caps
Checker Log
ok Caps
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Lock
Output
Lock
Answer
Lock
Checker Log
ok Lock
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cAPSlOCK
Output
cAPSlOCK
Answer
cAPSlOCK
Checker Log
ok cAPSlOCK
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CAPs
Output
CAPs
Answer
CAPs
Checker Log
ok CAPs
Test: #5, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
LoCK
Output
LoCK
Answer
LoCK
Checker Log
ok LoCK
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
OOPS
Output
oops
Answer
oops
Checker Log
ok oops
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
oops
Output
oops
Answer
oops
Checker Log
ok oops
Test: #8, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
a
Output
A
Answer
A
Checker Log
ok A
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
A
Output
a
Answer
a
Checker Log
ok a
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aA
Output
Aa
Answer
Aa
Checker Log
ok Aa
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Zz
Output
Zz
Answer
Zz
Checker Log
ok Zz
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Az
Output
Az
Answer
Az
Checker Log
ok Az
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zA
Output
Za
Answer
Za
Checker Log
ok Za
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AAA
Output
aaa
Answer
aaa
Checker Log
ok aaa
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AAa
Output
AAa
Answer
AAa
Checker Log
ok AAa
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AaR
Output
AaR
Answer
AaR
Checker Log
ok AaR
Test: #17, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Tdr
Output
Tdr
Answer
Tdr
Checker Log
ok Tdr
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aTF
Output
Atf
Answer
Atf
Checker Log
ok Atf
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
fYd
Output
fYd
Answer
fYd
Checker Log
ok fYd
Test: #20, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
dsA
Output
dsA
Answer
dsA
Checker Log
ok dsA
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
fru
Output
fru
Answer
fru
Checker Log
ok fru
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hYBKF
Output
Hybkf
Answer
Hybkf
Checker Log
ok Hybkf
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
XweAR
Output
XweAR
Answer
XweAR
Checker Log
ok XweAR
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mogqx
Output
mogqx
Answer
mogqx
Checker Log
ok mogqx
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
eOhEi
Output
eOhEi
Answer
eOhEi
Checker Log
ok eOhEi
Test: #26, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nkdku
Output
nkdku
Answer
nkdku
Checker Log
ok nkdku
Test: #27, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zcnko
Output
zcnko
Answer
zcnko
Checker Log
ok zcnko
Test: #28, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lcccd
Output
lcccd
Answer
lcccd
Checker Log
ok lcccd
Test: #29, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vwmvg
Output
vwmvg
Answer
vwmvg
Checker Log
ok vwmvg
Test: #30, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lvchf
Output
lvchf
Answer
lvchf
Checker Log
ok lvchf
Test: #31, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
IUNVZCCHEWENCHQQXQYPUJCRDZLUXCLJHXPHBXEUUGNXOOOPBMOBRIBHHMIRILYJGYYGFMTMFSVURGYHUWDRLQVIBRLPEVAMJQYO
Output
iunvzcchewenchqqxqypujcrdzluxcljhxphbxeuugnxooopbmobribhhmirilyjgyygfmtmfsvurgyhuwdrlqvibrlpevamjqyo
Answer
iunvzcchewenchqqxqypujcrdzluxcljhxphbxeuugnxooopbmobribhhmirilyjgyygfmtmfsvurgyhuwdrlqvibrlpevamjqyo
Checker Log
ok iunvzcchewenchqqxqypujcrdzluxcljhxphbxeuugnxooopbmobribhhmirilyjgyygfmtmfsvurgyhuwdrlqvibrlpevamjqyo
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
OBHSZCAMDXEJWOZLKXQKIVXUUQJKJLMMFNBPXAEFXGVNSKQLJGXHUXHGCOTESIVKSFMVVXFVMTEKACRIWALAGGMCGFEXQKNYMRTG
Output
obhszcamdxejwozlkxqkivxuuqjkjlmmfnbpxaefxgvnskqljgxhuxhgcotesivksfmvvxfvmtekacriwalaggmcgfexqknymrtg
Answer
obhszcamdxejwozlkxqkivxuuqjkjlmmfnbpxaefxgvnskqljgxhuxhgcotesivksfmvvxfvmtekacriwalaggmcgfexqknymrtg
Checker Log
ok obhszcamdxejwozlkxqkivxuuqjkjlmmfnbpxaefxgvnskqljgxhuxhgcotesivksfmvvxfvmtekacriwalaggmcgfexqknymrtg
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
IKJYZIKROIYUUCTHSVSKZTETNNOCMAUBLFJCEVANCADASMZRCNLBZPQRXESHEEMOMEPCHROSRTNBIDXYMEPJSIXSZQEBTEKKUHFS
Output
ikjyzikroiyuucthsvskztetnnocmaublfjcevancadasmzrcnlbzpqrxesheemomepchrosrtnbidxymepjsixszqebtekkuhfs
Answer
ikjyzikroiyuucthsvskztetnnocmaublfjcevancadasmzrcnlbzpqrxesheemomepchrosrtnbidxymepjsixszqebtekkuhfs
Checker Log
ok ikjyzikroiyuucthsvskztetnnocmaublfjcevancadasmzrcnlbzpqrxesheemomepchrosrtnbidxymepjsixszqebtekkuhfs
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cTKDZNWVYRTFPQLDAUUNSPKTDJTUPPFPRXRSINTVFVNNQNKXWUZUDHZBUSOKTABUEDQKUIVRTTVUREEOBJTSDKJKVEGFXVHXEYPE
Output
Ctkdznwvyrtfpqldauunspktdjtuppfprxrsintvfvnnqnkxwuzudhzbusoktabuedqkuivrttvureeobjtsdkjkvegfxvhxeype
Answer
Ctkdznwvyrtfpqldauunspktdjtuppfprxrsintvfvnnqnkxwuzudhzbusoktabuedqkuivrttvureeobjtsdkjkvegfxvhxeype
Checker Log
ok Ctkdznwvyrtfpqldauunspktdjtuppfprxrsintvfvnnqnkxwuzudhzbusoktabuedqkuivrttvureeobjtsdkjkvegfxvhxeype
Test: #35, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
uCKJZRGZJCPPLEEYJTUNKOQSWGBMTBQEVPYFPIPEKRVYQNTDPANOIXKMPINNFUSZWCURGBDPYTEKBEKCPMVZPMWAOSHJYMGKOMBQ
Output
Uckjzrgzjcppleeyjtunkoqswgbmtbqevpyfpipekrvyqntdpanoixkmpinnfuszwcurgbdpytekbekcpmvzpmwaoshjymgkombq
Answer
Uckjzrgzjcppleeyjtunkoqswgbmtbqevpyfpipekrvyqntdpanoixkmpinnfuszwcurgbdpytekbekcpmvzpmwaoshjymgkombq
Checker Log
ok Uckjzrgzjcppleeyjtunkoqswgbmtbqevpyfpipekrvyqntdpanoixkmpinnfuszwcurgbdpytekbekcpmvzpmwaoshjymgkombq
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
KETAXTSWAAOBKUOKUQREHIOMVMMRSAEWKGXZKRASwTVNSSFSNIWYNPSTMRADOADEEBURRHPOOBIEUIBGYDJCEKPNLEUCANZYJKMR
Output
KETAXTSWAAOBKUOKUQREHIOMVMMRSAEWKGXZKRASwTVNSSFSNIWYNPSTMRADOADEEBURRHPOOBIEUIBGYDJCEKPNLEUCANZYJKMR
Answer
KETAXTSWAAOBKUOKUQREHIOMVMMRSAEWKGXZKRASwTVNSSFSNIWYNPSTMRADOADEEBURRHPOOBIEUIBGYDJCEKPNLEUCANZYJKMR
Checker Log
ok KETAXTSWAAOBKUOKUQREHIOMVMMRSAEWKGXZKRASwTVNSSFSNIWYNPSTMRADOADEEBURRHPOOBIEUIBGYDJCEKPNLEUCANZYJKMR
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ZEKGDMWJPVUWFlNXRLUmWKLMMYSLRQQIBRWDPKWITUIMZYYKOEYGREKHHZRZZUFPVTNIHKGTCCTLOKSZITXXZDMPITHNZUIGDZLE
Output
ZEKGDMWJPVUWFlNXRLUmWKLMMYSLRQQIBRWDPKWITUIMZYYKOEYGREKHHZRZZUFPVTNIHKGTCCTLOKSZITXXZDMPITHNZUIGDZLE
Answer
ZEKGDMWJPVUWFlNXRLUmWKLMMYSLRQQIBRWDPKWITUIMZYYKOEYGREKHHZRZZUFPVTNIHKGTCCTLOKSZITXXZDMPITHNZUIGDZLE
Checker Log
ok ZEKGDMWJPVUWFlNXRLUmWKLMMYSLRQQIBRWDPKWITUIMZYYKOEYGREKHHZRZZUFPVTNIHKGTCCTLOKSZITXXZDMPITHNZUIGDZLE
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
TcMbVPCFvnNkCEUUCIFLgBJeCOKuJhIGwXFrhAZjuAhBraMSchBfWwIuHAEbgJOFzGtxDLDXzDSaPCFujGGxgxdlHUIQYRrMFCgJ
Output
TcMbVPCFvnNkCEUUCIFLgBJeCOKuJhIGwXFrhAZjuAhBraMSchBfWwIuHAEbgJOFzGtxDLDXzDSaPCFujGGxgxdlHUIQYRrMFCgJ
Answer
TcMbVPCFvnNkCEUUCIFLgBJeCOKuJhIGwXFrhAZjuAhBraMSchBfWwIuHAEbgJOFzGtxDLDXzDSaPCFujGGxgxdlHUIQYRrMFCgJ
Checker Log
ok TcMbVPCFvnNkCEUUCIFLgBJeCOKuJhIGwXFrhAZjuAhBraMSchBfWwIuHAEbgJOFzGtxDLDXzDSaPCFujGGxgxdlHUIQYRrMFCgJ
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xFGqoLILNvxARKuIntPfeukFtMbvzDezKpPRAKkIoIvwqNXnehRVwkkXYvuRCeoieBaBfTjwsYhDeCLvBwktntyluoxCYVioXGdm
Output
xFGqoLILNvxARKuIntPfeukFtMbvzDezKpPRAKkIoIvwqNXnehRVwkkXYvuRCeoieBaBfTjwsYhDeCLvBwktntyluoxCYVioXGdm
Answer
xFGqoLILNvxARKuIntPfeukFtMbvzDezKpPRAKkIoIvwqNXnehRVwkkXYvuRCeoieBaBfTjwsYhDeCLvBwktntyluoxCYVioXGdm
Checker Log
ok xFGqoLILNvxARKuIntPfeukFtMbvzDezKpPRAKkIoIvwqNXnehRVwkkXYvuRCeoieBaBfTjwsYhDeCLvBwktntyluoxCYVioXGdm
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
udvqolbxdwbkijwvhlyaelhynmnfgszbhgshlcwdkaibceqomzujndixuzivlsjyjqxzxodzbukxxhwwultvekdfntwpzlhhrIjm
Output
udvqolbxdwbkijwvhlyaelhynmnfgszbhgshlcwdkaibceqomzujndixuzivlsjyjqxzxodzbukxxhwwultvekdfntwpzlhhrIjm
Answer
udvqolbxdwbkijwvhlyaelhynmnfgszbhgshlcwdkaibceqomzujndixuzivlsjyjqxzxodzbukxxhwwultvekdfntwpzlhhrIjm
Checker Log
ok udvqolbxdwbkijwvhlyaelhynmnfgszbhgshlcwdkaibceqomzujndixuzivlsjyjqxzxodzbukxxhwwultvekdfntwpzlhhrIjm
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
jgpwhetqqoncighgzbbaLwwwxkxivuwtokehrgprfgewzcwxkavwoflcgsgbhoeamzbefzoonwsyzisetoydrpufktzgbaycgaeg
Output
jgpwhetqqoncighgzbbaLwwwxkxivuwtokehrgprfgewzcwxkavwoflcgsgbhoeamzbefzoonwsyzisetoydrpufktzgbaycgaeg
Answer
jgpwhetqqoncighgzbbaLwwwxkxivuwtokehrgprfgewzcwxkavwoflcgsgbhoeamzbefzoonwsyzisetoydrpufktzgbaycgaeg
Checker Log
ok jgpwhetqqoncighgzbbaLwwwxkxivuwtokehrgprfgewzcwxkavwoflcgsgbhoeamzbefzoonwsyzisetoydrpufktzgbaycgaeg
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
vyujsazdstbnkxeunedfbolicojzjpufgfemhtmdrswvmuhoivjvonacefqenbqudelmdegxqtbwezsbydmanzutvdgkgrjxzlnc
Output
vyujsazdstbnkxeunedfbolicojzjpufgfemhtmdrswvmuhoivjvonacefqenbqudelmdegxqtbwezsbydmanzutvdgkgrjxzlnc
Answer
vyujsazdstbnkxeunedfbolicojzjpufgfemhtmdrswvmuhoivjvonacefqenbqudelmdegxqtbwezsbydmanzutvdgkgrjxzlnc
Checker Log
ok vyujsazdstbnkxeunedfbolicojzjpufgfemhtmdrswvmuhoivjvonacefqenbqudelmdegxqtbwezsbydmanzutvdgkgrjxzlnc
Test: #43, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pivqnuqkaofcduvbttztjbuavrqwiqrwkfncmvatoxruelyoecnkpqraiahumiaiqeyjapbqyrsxcdgjbihivtqezvasfmzntdfv
Output
pivqnuqkaofcduvbttztjbuavrqwiqrwkfncmvatoxruelyoecnkpqraiahumiaiqeyjapbqyrsxcdgjbihivtqezvasfmzntdfv
Answer
pivqnuqkaofcduvbttztjbuavrqwiqrwkfncmvatoxruelyoecnkpqraiahumiaiqeyjapbqyrsxcdgjbihivtqezvasfmzntdfv
Checker Log
ok pivqnuqkaofcduvbttztjbuavrqwiqrwkfncmvatoxruelyoecnkpqraiahumiaiqeyjapbqyrsxcdgjbihivtqezvasfmzntdfv
Test: #44, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
upvtbsxswbohxshdrbjxcungzquhuomgxwlryvshshsfvqbrxvcikbglietlpqkiwbhiqpmdwuqosbtdvyxekkaqiwrbsibpoect
Output
upvtbsxswbohxshdrbjxcungzquhuomgxwlryvshshsfvqbrxvcikbglietlpqkiwbhiqpmdwuqosbtdvyxekkaqiwrbsibpoect
Answer
upvtbsxswbohxshdrbjxcungzquhuomgxwlryvshshsfvqbrxvcikbglietlpqkiwbhiqpmdwuqosbtdvyxekkaqiwrbsibpoect
Checker Log
ok upvtbsxswbohxshdrbjxcungzquhuomgxwlryvshshsfvqbrxvcikbglietlpqkiwbhiqpmdwuqosbtdvyxekkaqiwrbsibpoect
Test: #45, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cTKDZNWVYRTFPQLDAUUNSPKTDJTUPPFPRXRSINTVFVNNQNKXWUZUDHZBUSOKTABUEDQKUIVRTTVUREEOBJTSDKJKVEGFXVHXEYPE
Output
Ctkdznwvyrtfpqldauunspktdjtuppfprxrsintvfvnnqnkxwuzudhzbusoktabuedqkuivrttvureeobjtsdkjkvegfxvhxeype
Answer
Ctkdznwvyrtfpqldauunspktdjtuppfprxrsintvfvnnqnkxwuzudhzbusoktabuedqkuivrttvureeobjtsdkjkvegfxvhxeype
Checker Log
ok Ctkdznwvyrtfpqldauunspktdjtuppfprxrsintvfvnnqnkxwuzudhzbusoktabuedqkuivrttvureeobjtsdkjkvegfxvhxeype
Test: #46, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
JEGDOFJOFGJHFROGHOFGMHOFGHORGFHMOu
Output
JEGDOFJOFGJHFROGHOFGMHOFGHORGFHMOu
Answer
JEGDOFJOFGJHFROGHOFGMHOFGHORGFHMOu
Checker Log
ok JEGDOFJOFGJHFROGHOFGMHOFGHORGFHMOu
Test: #47, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aBACABa
Output
aBACABa
Answer
aBACABa
Checker Log
ok aBACABa
Test: #48, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AAAAAAAAAAAAAAAAAAAAAAAAaa
Output
AAAAAAAAAAAAAAAAAAAAAAAAaa
Answer
AAAAAAAAAAAAAAAAAAAAAAAAaa
Checker Log
ok AAAAAAAAAAAAAAAAAAAAAAAAaa
Test: #49, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Output
aaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Answer
aaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Checker Log
ok aaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Test: #50, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
dDDDDDDDDDDDDD
Output
Dddddddddddddd
Answer
Dddddddddddddd
Checker Log
ok Dddddddddddddd
Test: #51, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
Output
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
Answer
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
Checker Log
ok aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
Test: #52, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
z
Output
Z
Answer
Z
Checker Log
ok Z
Test: #53, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AZ
Output
az
Answer
az
Checker Log
ok az
Test: #54, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Z
Output
z
Answer
z
Checker Log
ok z
Test: #55, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aAAAA
Output
Aaaaa
Answer
Aaaaa
Checker Log
ok Aaaaa
Test: #56, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
F
Output
f
Answer
f
Checker Log
ok f
*/