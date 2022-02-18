/*
A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order

*/
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
     string a, b;
     cin >> a >> b;
     transform(a.begin(), a.end(),a.begin(), ::toupper);
     transform(b.begin(), b.end(),b.begin(), ::toupper);
    if( a > b)
    {
        cout << 1;
    }
    else if(a == b)
    {
        cout << 0;
    }
    else 
    cout << -1;
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aaaa
aaaA
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abs
Abz
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #3, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abcdefg
AbCdEfF
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
asadasdasd
asdwasdawd
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #5, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aslkjlkasdd
asdlkjdajwi
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #7, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aAaaaAAaAaaAzZsssSsdDfeEaeqZlpP
AaaaAaaAaaAaZzSSSSsDdFeeAeQZLpp
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #8, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
bwuEhEveouaTECagLZiqmUdxEmhRSOzMauJRWLQMppZOumxhAmwuGeDIkvkBLvMXwUoFmpAfDprBcFtEwOULcZWRQhcTbTbX
HhoDWbcxwiMnCNexOsKsujLiSGcLllXOkRSbnOzThAjnnliLYFFmsYkOfpTxRNEfBsoUHfoLTiqAINRPxWRqrTJhgfkKcDOH
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kGWUuguKzcvxqKTNpxeDWXpXkrXDvGMFGoXKDfPBZvWSDUyIYBynbKOUonHvmZaKeirUhfmVRKtGhAdBfKMWXDUoqvbfpfHYcg
cvOULleuIIiYVVxcLZmHVpNGXuEpzcWZZWyMOwIwbpkKPwCfkVbKkUuosvxYCKjqfVmHfJKbdrsAcatPYgrCABaFcoBuOmMfFt
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #10, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nCeNVIzHqPceNhjHeHvJvgBsNFiXBATRrjSTXJzhLMDMxiJztphxBRlDlqwDFImWeEPkggZCXSRwelOdpNrYnTepiOqpvkr
HJbjJFtlvNxIbkKlxQUwmZHJFVNMwPAPDRslIoXISBYHHfymyIaQHLgECPxAmqnOCizwXnIUBRmpYUBVPenoUKhCobKdOjL
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #11, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ttXjenUAlfixytHEOrPkgXmkKTSGYuyVXGIHYmWWYGlBYpHkujueqBSgjLguSgiMGJWATIGEUjjAjKXdMiVbHozZUmqQtFrT
JziDBFBDmDJCcGqFsQwDFBYdOidLxxhBCtScznnDgnsiStlWFnEXQrJxqTXKPxZyIGfLIToETKWZBPUIBmLeImrlSBWCkTNo
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AjQhPqSVhwQQjcgCycjKorWBgFCRuQBwgdVuAPSMJAvTyxGVuFHjfJzkKfsmfhFbKqFrFIohSZBbpjgEHebezmVlGLTPSCTMf
XhxWuSnMmKFrCUOwkTUmvKAfbTbHWzzOTzxJatLLCdlGnHVaBUnxDlsqpvjLHMThOPAFBggVKDyKBrZAmjnjrhHlrnSkyzBja
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #13, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
HCIgYtnqcMyjVngziNflxKHtdTmcRJhzMAjFAsNdWXFJYEhiTzsQUtFNkAbdrFBRmvLirkuirqTDvIpEfyiIqkrwsjvpPWTEdI
ErqiiWKsmIjyZuzgTlTqxYZwlrpvRyaVhRTOYUqtPMVGGtWOkDCOOQRKrkkRzPftyQCkYkzKkzTPqqXmeZhvvEEiEhkdOmoMvy
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mtBeJYILXcECGyEVSyzLFdQJbiVnnfkbsYYsdUJSIRmyzLfTTtFwIBmRLVnwcewIqcuydkcLpflHAFyDaToLiFMgeHvQorTVbI
ClLvyejznjbRfCDcrCzkLvqQaGzTjwmWONBdCctJAPJBcQrcYvHaSLQgPIJbmkFBhFzuQLBiRzAdNHulCjIAkBvZxxlkdzUWLR
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tjucSbGESVmVridTBjTmpVBCwwdWKBPeBvmgdxgIVLwQxveETnSdxkTVJpXoperWSgdpPMKNmwDiGeHfxnuqaDissgXPlMuNZIr
HfjOOJhomqNIKHvqSgfySjlsWJQBuWYwhLQhlZYlpZwboMpoLoluGsBmhhlYgeIouwdkPfiaAIrkYRlxtiFazOPOllPsNZHcIZd
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #16, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AanbDfbZNlUodtBQlvPMyomStKNhgvSGhSbTdabxGFGGXCdpsJDimsAykKjfBDPMulkhBMsqLmVKLDoesHZsRAEEdEzqigueXInY
cwfyjoppiJNrjrOLNZkqcGimrpTsiyFBVgMWEPXsMrxLJDDbtYzerXiFGuLBcQYitLdqhGHBpdjRnkUegmnwhGHAKXGyFtscWDSI
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
HRfxniwuJCaHOcaOVgjOGHXKrwxrDQxJpppeGDXnTAowyKbCsCQPbchCKeTWOcKbySSYnoaTJDnmRcyGPbfXJyZoPcARHBu
xkLXvwkvGIWSQaFTznLOctUXNuzzBBOlqvzmVfTSejekTAlwidRrsxkbZTsGGeEWxCXHzqWVuLGoCyrGjKkQoHqduXwYQKC
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #18, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
OjYwwNuPESIazoyLFREpObIaMKhCaKAMWMfRGgucEuyNYRantwdwQkmflzfqbcFRaXBnZoIUGsFqXZHGKwlaBUXABBcQEWWPvkjW
RxLqGcTTpBwHrHltCOllnTpRKLDofBUqqHxnOtVWPgvGaeHIevgUSOeeDOJubfqonFpVNGVbHFcAhjnyFvrrqnRgKhkYqQZmRfUl
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tatuhQPIzjptlzzJpCAPXSRTKZRlwgfoCIsFjJquRoIDyZZYRSPdFUTjjUPhLBBfeEIfLQpygKXRcyQFiQsEtRtLnZErBqW
tkHUjllbafLUWhVCnvblKjgYIEoHhsjVmrDBmAWbvtkHxDbRFvsXAjHIrujaDbYwOZmacknhZPeCcorbRgHjjgAgoJdjvLo
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #20, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cymCPGqdXKUdADEWDdUaLEEMHiXHsdAZuDnJDMUvxvrLRBrPSDpXPAgMRoGplLtniFRTomDTAHXWAdgUveTxaqKVSvnOyhOwiRN
uhmyEWzapiRNPFDisvHTbenXMfeZaHqOFlKjrfQjUBwdFktNpeiRoDWuBftZLcCZZAVfioOihZVNqiNCNDIsUdIhvbcaxpTRWoV
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sSvpcITJAwghVfJaLKBmyjOkhltTGjYJVLWCYMFUomiJaKQYhXTajvZVHIMHbyckYROGQZzjWyWCcnmDmrkvTKfHSSzCIhsXgEZa
vhCXkCwAmErGVBPBAnkSYEYvseFKbWSktoqaHYXUmYkHfOkRwuEyBRoGoBrOXBKVxXycjZGStuvDarnXMbZLWrbjrisDoJBdSvWJ
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #22, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hJDANKUNBisOOINDsTixJmYgHNogtpwswwcvVMptfGwIjvqgwTYFcqTdyAqaqlnhOCMtsnWXQqtjFwQlEcBtMFAtSqnqthVb
rNquIcjNWESjpPVWmzUJFrelpUZeGDmSvCurCqVmKHKVAAPkaHksniOlzjiKYIJtvbuQWZRufMebpTFPqyxIWWjfPaWYiNlK
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ycLoapxsfsDTHMSfAAPIUpiEhQKUIXUcXEiopMBuuZLHtfPpLmCHwNMNQUwsEXxCEmKHTBSnKhtQhGWUvppUFZUgSpbeChX
dCZhgVXofkGousCzObxZSJwXcHIaqUDSCPKzXntcVmPxtNcXmVcjsetZYxedmgQzXTZHMvzjoaXCMKsncGciSDqQWIIRlys
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nvUbnrywIePXcoukIhwTfUVcHUEgXcsMyNQhmMlTltZiCooyZiIKRIGVHMCnTKgzXXIuvoNDEZswKoACOBGSyVNqTNQqMhAG
plxuGSsyyJjdvpddrSebOARSAYcZKEaKjqbCwvjhNykuaECoQVHTVFMKXwvrQXRaqXsHsBaGVhCxGRxNyGUbMlxOarMZNXxy
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
EncmXtAblQzcVRzMQqdDqXfAhXbtJKQwZVWyHoWUckohnZqfoCmNJDzexFgFJYrwNHGgzCJTzQQFnxGlhmvQTpicTkEeVICKac
NIUNZoMLFMyAjVgQLITELJSodIXcGSDWfhFypRoGYuogJpnqGTotWxVqpvBHjFOWcDRDtARsaHarHaOkeNWEHGTaGOFCOFEwvK
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
UG
ak
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #27, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
JZR
Vae
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
a
Z
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
rk
kv
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #30, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
RvuT
bJzE
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
PPS
ydq
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #32, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
q
q
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #33, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
peOw
IgSJ
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
PyK
oKN
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
O
i
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #36, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
NmGY
pDlP
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nG
Zf
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
m
a
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
MWyB
WZEV
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #40, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Gre
fxc
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Ooq
wap
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
XId
lbB
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #43, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
lfFpECEqUMEOJhipvkZjDPcpDNJedOVXiSMgBvBZbtfzIKekcvpWPCazKAhJyHircRtgcBIJwwstpHaLAgxFOngAWUZRgCef
LfFPEcequmeojHIpVkzjDPcpdNJEDOVXiSmGBVBZBtfZikEKcvPwpCAzKAHJyHIrCRTgCbIJWwSTphALagXfOnGAwUzRGcEF
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #44, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
DQBdtSEDtFGiNRUeJNbOIfDZnsryUlzJHGTXGFXnwsVyxNtLgmklmFvRCzYETBVdmkpJJIvIOkMDgCFHZOTODiYrkwXd
DQbDtsEdTFginRUEJNBOIfdZnsryulZJHGtxGFxnwSvYxnTLgmKlmFVRCzyEtBVdmKpJjiVioKMDgCFhzoTODiYrKwXD
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #45, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tYWRijFQSzHBpCjUzqBtNvBKyzZRnIdWEuyqnORBQTLyOQglIGfYJIRjuxnbLvkqZakNqPiGDvgpWYkfxYNXsdoKXZtRkSasfa
TYwRiJfqsZHBPcJuZQBTnVbkyZZRnidwEuYQnorbQTLYOqGligFyjirJUxnblVKqZaknQpigDVGPwyKfxyNXSDoKxztRKSaSFA
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #46, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
KhScXYiErQIUtmVhNTCXSLAviefIeHIIdiGhsYnPkSBaDTvMkyanfMLBOvDWgRybLtDqvXVdVjccNunDyijhhZEAKBrdz
kHsCXyiErqIuTMVHNTCxSLaViEFIEhIIDiGHsYNpKsBAdTvMKyANFMLBovdwGRYbLtdQVxvDVJCcNUndYiJHhzeakBrdZ
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #47, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cpPQMpjRQJKQVXjWDYECXbagSmNcVfOuBWNZxihdERraVuiOpSVDCPgTGuSQALNoVjySceHcKXwOEpSzXrEqWwwrYeppNiWhDVg
CPPqmPjRqJkQvxJwdyECXBAGsMNcVfOuBWNzxIhderRavUiOpSvDCpGTgusqAlNovjyScEhCKXwoePSZxrEQwWwryEPPniWHDvG
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #48, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
SajcCGMepaLjZIWLRBGFcrZRCRvvoCsIyKsQerbrwsIamxxpRmQSZSalasJLVFbCHCuXJlubciQAvLxXYBazLsMKLHLdDQ
saJcCgmEpaLJziWlrBgFcRzrCrVVOcSIykSQerBrwSIamxxPrMqSzSalASjLVFbChCUxjLUbCIQAVlxxybAZLsmkLhLDdQ
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #49, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kigPrWNTOUNDBskAfefjhHYZNYdnfZWuXWzHiBxFQryBbAkPtenFwWvCSTYGpzOntUNzNUhxRWjKmicTwLwJAnbAxj
kigpRWntOUNdBsKaFEFjhhYZnYDNfzWuXwZhibxFQRybbakPteNfwwvcStyGPzoNTunznuHXrWjKMIctWLWJANBAxJ
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #50, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
nTomZZuTTRTAAPoUsySVFGElrpQRNLjqvFmcYytiheQnjUhPLnqNBiYtQkljbcvmjuNAVKbvQOWpqqFlQhAhULIhquoCnjUI
ntOmzZuttrtAAPOUSySVFgeLRPQrNLjQvfmCyYTiHEQnjuHPlNQNbIYtqKLJBCVmjunavkbvQOWPQQFlqHaHULIHQuOcnJUi
Output
0
Answer
0
Checker Log
ok answer is 0
Test: #51, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abac
adaa
Output
-1
Answer
-1
Checker Log
ok answer is -1
Test: #52, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Bbc
abc
Output
1
Answer
1
Checker Log
ok answer is 1
Test: #53, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aaaba
aaaab
Output
1
Answer
1
Checker Log
ok answer is 1
*/