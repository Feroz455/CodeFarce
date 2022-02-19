/*
A. String Task
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

Examples
inputCopy
tour
outputCopy
.t.r
inputCopy
Codeforces
outputCopy
.c.d.f.r.c.s
inputCopy
aBAcAba
outputCopy
.b.c.b
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(),str.begin(), ::tolower);
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'y')
        continue;
        else 
        cout << "." << str[i];
    }
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tour
Output
.t.r
Answer
.t.r
Checker Log
ok .t.r
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Codeforces
Output
.c.d.f.r.c.s
Answer
.c.d.f.r.c.s
Checker Log
ok .c.d.f.r.c.s
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aBAcAba
Output
.b.c.b
Answer
.b.c.b
Checker Log
ok .b.c.b
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
obn
Output
.b.n
Answer
.b.n
Checker Log
ok .b.n
Test: #5, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
wpwl
Output
.w.p.w.l
Answer
.w.p.w.l
Checker Log
ok .w.p.w.l
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ggdvq
Output
.g.g.d.v.q
Answer
.g.g.d.v.q
Checker Log
ok .g.g.d.v.q
Test: #7, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
pumesz
Output
.p.m.s.z
Answer
.p.m.s.z
Checker Log
ok .p.m.s.z
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
g
Output
.g
Answer
.g
Checker Log
ok .g
Test: #9, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
zjuotps
Output
.z.j.t.p.s
Answer
.z.j.t.p.s
Checker Log
ok .z.j.t.p.s
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
jzbwuehe
Output
.j.z.b.w.h
Answer
.j.z.b.w.h
Checker Log
ok .j.z.b.w.h
Test: #11, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tnkgwuugu
Output
.t.n.k.g.w.g
Answer
.t.n.k.g.w.g
Checker Log
ok .t.n.k.g.w.g
Test: #12, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
kincenvizh
Output
.k.n.c.n.v.z.h
Answer
.k.n.c.n.v.z.h
Checker Log
ok .k.n.c.n.v.z.h
Test: #13, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xattxjenual
Output
.x.t.t.x.j.n.l
Answer
.x.t.t.x.j.n.l
Checker Log
ok .x.t.t.x.j.n.l
Test: #14, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ktajqhpqsvhw
Output
.k.t.j.q.h.p.q.s.v.h.w
Answer
.k.t.j.q.h.p.q.s.v.h.w
Checker Log
ok .k.t.j.q.h.p.q.s.v.h.w
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
xnhcigytnqcmy
Output
.x.n.h.c.g.t.n.q.c.m
Answer
.x.n.h.c.g.t.n.q.c.m
Checker Log
ok .x.n.h.c.g.t.n.q.c.m
Test: #16, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
jfmtbejyilxcec
Output
.j.f.m.t.b.j.l.x.c.c
Answer
.j.f.m.t.b.j.l.x.c.c
Checker Log
ok .j.f.m.t.b.j.l.x.c.c
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
D
Output
.d
Answer
.d
Checker Log
ok .d
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ab
Output
.b
Answer
.b
Checker Log
ok .b
Test: #19, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Ab
Output
.b
Answer
.b
Checker Log
ok .b
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aB
Output
.b
Answer
.b
Checker Log
ok .b
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AB
Output
.b
Answer
.b
Checker Log
ok .b
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ba
Output
.b
Answer
.b
Checker Log
ok .b
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
bA
Output
.b
Answer
.b
Checker Log
ok .b
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Ba
Output
.b
Answer
.b
Checker Log
ok .b
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
BA
Output
.b
Answer
.b
Checker Log
ok .b
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aab
Output
.b
Answer
.b
Checker Log
ok .b
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
baa
Output
.b
Answer
.b
Checker Log
ok .b
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
femOZeCArKCpUiHYnbBPTIOFmsHmcpObtPYcLCdjFrUMIyqYzAokKUiiKZRouZiNMoiOuGVoQzaaCAOkquRjmmKKElLNqCnhGdQM
Output
.f.m.z.c.r.k.c.p.h.n.b.b.p.t.f.m.s.h.m.c.p.b.t.p.c.l.c.d.j.f.r.m.q.z.k.k.k.z.r.z.n.m.g.v.q.z.c.k.q.r.j.m.m.k.k.l.l.n.q.c.n.h.g.d.q.m
Answer
.f.m.z.c.r.k.c.p.h.n.b.b.p.t.f.m.s.h.m.c.p.b.t.p.c.l.c.d.j.f.r.m.q.z.k.k.k.z.r.z.n.m.g.v.q.z.c.k.q.r.j.m.m.k.k.l.l.n.q.c.n.h.g.d.q.m
Checker Log
ok .f.m.z.c.r.k.c.p.h.n.b.b.p.t.f...j.m.m.k.k.l.l.n.q.c.n.h.g.d.q.m
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
VMBPMCmMDCLFELLIISUJDWQRXYRDGKMXJXJHXVZADRZWVWJRKFRRNSAWKKDPZZLFLNSGUNIVJFBEQsMDHSBJVDTOCSCgZWWKvZZN
Output
.v.m.b.p.m.c.m.m.d.c.l.f.l.l.s.j.d.w.q.r.x.r.d.g.k.m.x.j.x.j.h.x.v.z.d.r.z.w.v.w.j.r.k.f.r.r.n.s.w.k.k.d.p.z.z.l.f.l.n.s.g.n.v.j.f.b.q.s.m.d.h.s.b.j.v.d.t.c.s.c.g.z.w.w.k.v.z.z.n
Answer
.v.m.b.p.m.c.m.m.d.c.l.f.l.l.s.j.d.w.q.r.x.r.d.g.k.m.x.j.x.j.h.x.v.z.d.r.z.w.v.w.j.r.k.f.r.r.n.s.w.k.k.d.p.z.z.l.f.l.n.s.g.n.v.j.f.b.q.s.m.d.h.s.b.j.v.d.t.c.s.c.g.z.w.w.k.v.z.z.n
Checker Log
ok .v.m.b.p.m.c.m.m.d.c.l.f.l.l.s...j.v.d.t.c.s.c.g.z.w.w.k.v.z.z.n
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
MCGFQQJNUKuAEXrLXibVjClSHjSxmlkQGTKZrRaDNDomIPOmtSgjJAjNVIVLeUGUAOHNkCBwNObVCHOWvNkLFQQbFnugYVMkJruJ
Output
.m.c.g.f.q.q.j.n.k.x.r.l.x.b.v.j.c.l.s.h.j.s.x.m.l.k.q.g.t.k.z.r.r.d.n.d.m.p.m.t.s.g.j.j.j.n.v.v.l.g.h.n.k.c.b.w.n.b.v.c.h.w.v.n.k.l.f.q.q.b.f.n.g.v.m.k.j.r.j
Answer
.m.c.g.f.q.q.j.n.k.x.r.l.x.b.v.j.c.l.s.h.j.s.x.m.l.k.q.g.t.k.z.r.r.d.n.d.m.p.m.t.s.g.j.j.j.n.v.v.l.g.h.n.k.c.b.w.n.b.v.c.h.w.v.n.k.l.f.q.q.b.f.n.g.v.m.k.j.r.j
Checker Log
ok .m.c.g.f.q.q.j.n.k.x.r.l.x.b.v...n.k.l.f.q.q.b.f.n.g.v.m.k.j.r.j
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
iyaiuiwioOyzUaOtAeuEYcevvUyveuyioeeueoeiaoeiavizeeoeyYYaaAOuouueaUioueauayoiuuyiuovyOyiyoyioaoyuoyea
Output
.w.z.t.c.v.v.v.v.z.v
Answer
.w.z.t.c.v.v.v.v.z.v
Checker Log
ok .w.z.t.c.v.v.v.v.z.v
Test: #32, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
yjnckpfyLtzwjsgpcrgCfpljnjwqzgVcufnOvhxplvflxJzqxnhrwgfJmPzifgubvspffmqrwbzivatlmdiBaddiaktdsfPwsevl
Output
.j.n.c.k.p.f.l.t.z.w.j.s.g.p.c.r.g.c.f.p.l.j.n.j.w.q.z.g.v.c.f.n.v.h.x.p.l.v.f.l.x.j.z.q.x.n.h.r.w.g.f.j.m.p.z.f.g.b.v.s.p.f.f.m.q.r.w.b.z.v.t.l.m.d.b.d.d.k.t.d.s.f.p.w.s.v.l
Answer
.j.n.c.k.p.f.l.t.z.w.j.s.g.p.c.r.g.c.f.p.l.j.n.j.w.q.z.g.v.c.f.n.v.h.x.p.l.v.f.l.x.j.z.q.x.n.h.r.w.g.f.j.m.p.z.f.g.b.v.s.p.f.f.m.q.r.w.b.z.v.t.l.m.d.b.d.d.k.t.d.s.f.p.w.s.v.l
Checker Log
ok .j.n.c.k.p.f.l.t.z.w.j.s.g.p.c...l.m.d.b.d.d.k.t.d.s.f.p.w.s.v.l
Test: #33, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
RIIIUaAIYJOiuYIUWFPOOAIuaUEZeIooyUEUEAoIyIHYOEAlVAAIiLUAUAeiUIEiUMuuOiAgEUOIAoOUYYEYFEoOIIVeOOAOIIEg
Output
.r.j.w.f.p.z.h.l.v.l.m.g.f.v.g
Answer
.r.j.w.f.p.z.h.l.v.l.m.g.f.v.g
Checker Log
ok .r.j.w.f.p.z.h.l.v.l.m.g.f.v.g
Test: #34, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
VBKQCFBMQHDMGNSGBQVJTGQCNHHRJMNKGKDPPSQRRVQTZNKBZGSXBPBRXPMVFTXCHZMSJVBRNFNTHBHGJLMDZJSVPZZBCCZNVLMQ
Output
.v.b.k.q.c.f.b.m.q.h.d.m.g.n.s.g.b.q.v.j.t.g.q.c.n.h.h.r.j.m.n.k.g.k.d.p.p.s.q.r.r.v.q.t.z.n.k.b.z.g.s.x.b.p.b.r.x.p.m.v.f.t.x.c.h.z.m.s.j.v.b.r.n.f.n.t.h.b.h.g.j.l.m.d.z.j.s.v.p.z.z.b.c.c.z.n.v.l.m.q
Answer
.v.b.k.q.c.f.b.m.q.h.d.m.g.n.s.g.b.q.v.j.t.g.q.c.n.h.h.r.j.m.n.k.g.k.d.p.p.s.q.r.r.v.q.t.z.n.k.b.z.g.s.x.b.p.b.r.x.p.m.v.f.t.x.c.h.z.m.s.j.v.b.r.n.f.n.t.h.b.h.g.j.l.m.d.z.j.s.v.p.z.z.b.c.c.z.n.v.l.m.q
Checker Log
ok .v.b.k.q.c.f.b.m.q.h.d.m.g.n.s...z.j.s.v.p.z.z.b.c.c.z.n.v.l.m.q
Test: #35, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
iioyoaayeuyoolyiyoeuouiayiiuyTueyiaoiueyioiouyuauouayyiaeoeiiigmioiououeieeeyuyyaYyioiiooaiuouyoeoeg
Output
.l.t.g.m.g
Answer
.l.t.g.m.g
Checker Log
ok .l.t.g.m.g
Test: #36, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ueyiuiauuyyeueykeioouiiauzoyoeyeuyiaoaiiaaoaueyaeydaoauexuueafouiyioueeaaeyoeuaueiyiuiaeeayaioeouiuy
Output
.k.z.d.x.f
Answer
.k.z.d.x.f
Checker Log
ok .k.z.d.x.f
Test: #37, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
FSNRBXLFQHZXGVMKLQDVHWLDSLKGKFMDRQWMWSSKPKKQBNDZRSCBLRSKCKKFFKRDMZFZGCNSMXNPMZVDLKXGNXGZQCLRTTDXLMXQ
Output
.f.s.n.r.b.x.l.f.q.h.z.x.g.v.m.k.l.q.d.v.h.w.l.d.s.l.k.g.k.f.m.d.r.q.w.m.w.s.s.k.p.k.k.q.b.n.d.z.r.s.c.b.l.r.s.k.c.k.k.f.f.k.r.d.m.z.f.z.g.c.n.s.m.x.n.p.m.z.v.d.l.k.x.g.n.x.g.z.q.c.l.r.t.t.d.x.l.m.x.q
Answer
.f.s.n.r.b.x.l.f.q.h.z.x.g.v.m.k.l.q.d.v.h.w.l.d.s.l.k.g.k.f.m.d.r.q.w.m.w.s.s.k.p.k.k.q.b.n.d.z.r.s.c.b.l.r.s.k.c.k.k.f.f.k.r.d.m.z.f.z.g.c.n.s.m.x.n.p.m.z.v.d.l.k.x.g.n.x.g.z.q.c.l.r.t.t.d.x.l.m.x.q
Checker Log
ok .f.s.n.r.b.x.l.f.q.h.z.x.g.v.m...n.x.g.z.q.c.l.r.t.t.d.x.l.m.x.q
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
EYAYAYIOIOYOOAUOEUEUOUUYIYUUMOEOIIIAOIUOAAOIYOIOEUIERCEYYAOIOIGYUIAOYUEOEUAEAYPOYEYUUAUOAOEIYIEYUEEY
Output
.m.r.c.g.p
Answer
.m.r.c.g.p
Checker Log
ok .m.r.c.g.p
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
jvvzcdcxjstbbksmqjsngxkgtttdxrljjxtwptgwwqzpvqchvgrkqlzxmptzblxhhsmrkmzzmgdfskhtmmnqzzflpmqdctvrfgtx
Output
.j.v.v.z.c.d.c.x.j.s.t.b.b.k.s.m.q.j.s.n.g.x.k.g.t.t.t.d.x.r.l.j.j.x.t.w.p.t.g.w.w.q.z.p.v.q.c.h.v.g.r.k.q.l.z.x.m.p.t.z.b.l.x.h.h.s.m.r.k.m.z.z.m.g.d.f.s.k.h.t.m.m.n.q.z.z.f.l.p.m.q.d.c.t.v.r.f.g.t.x
Answer
.j.v.v.z.c.d.c.x.j.s.t.b.b.k.s.m.q.j.s.n.g.x.k.g.t.t.t.d.x.r.l.j.j.x.t.w.p.t.g.w.w.q.z.p.v.q.c.h.v.g.r.k.q.l.z.x.m.p.t.z.b.l.x.h.h.s.m.r.k.m.z.z.m.g.d.f.s.k.h.t.m.m.n.q.z.z.f.l.p.m.q.d.c.t.v.r.f.g.t.x
Checker Log
ok .j.v.v.z.c.d.c.x.j.s.t.b.b.k.s...z.z.f.l.p.m.q.d.c.t.v.r.f.g.t.x
Test: #40, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
YB
Output
.b
Answer
.b
Checker Log
ok .b
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
fly
Output
.f.l
Answer
.f.l
Checker Log
ok .f.l
Test: #42, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
YyyYYYyyYxdwdawdDAWDdaddYYYY
Output
.x.d.w.d.w.d.d.w.d.d.d.d
Answer
.x.d.w.d.w.d.d.w.d.d.d.d
Checker Log
ok .x.d.w.d.w.d.d.w.d.d.d.d
*/