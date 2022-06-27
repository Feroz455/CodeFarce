/*
A. HQ9+
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
HQ9+ is a joke programming language which has only four one-character instructions:

"H" prints "Hello, World!",
"Q" prints the source code of the program itself,
"9" prints the lyrics of "99 Bottles of Beer" song,
"+" increments the value stored in the internal accumulator.
Instructions "H" and "Q" are case-sensitive and must be uppercase. The characters of the program which are not instructions are ignored.

You are given a program written in HQ9+. You have to figure out whether executing this program will produce any output.

Input
The input will consist of a single line p which will give a program in HQ9+. String p will contain between 1 and 100 characters, inclusive. ASCII-code of each character of p will be between 33 (exclamation mark) and 126 (tilde), inclusive.

Output
Output "YES", if executing the program will produce any output, and "NO" otherwise.

Examples
inputCopy
Hi!
outputCopy
YES
inputCopy
Codeforces
outputCopy
NO
Note
In the first case the program contains only one instruction — "H", which prints "Hello, World!".

In the second case none of the program characters are language instructions.
*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    auto it = s.begin();
    while (it != s.end())
    {
        if (*it == 'H' || *it == 'Q' || *it == '9')
        {
            cout << "YES";
            return 0;
        }
        it++;
    }
    cout << "NO";

    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Hi!
Output
YES
Answer
YES
Checker Log
ok YES
Test: #2, time: 30 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Codeforces
Output
NO
Answer
NO
Checker Log
ok NO
Test: #3, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
a+b=c
Output
NO
Answer
NO
Checker Log
ok NO
Test: #4, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
hq-lowercase
Output
NO
Answer
NO
Checker Log
ok NO
Test: #5, time: 30 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Q
Output
YES
Answer
YES
Checker Log
ok YES
Test: #6, time: 30 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
9
Output
YES
Answer
YES
Checker Log
ok YES
Test: #7, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
H
Output
YES
Answer
YES
Checker Log
ok YES
Test: #8, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+
Output
NO
Answer
NO
Checker Log
ok NO
Test: #9, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
~
Output
NO
Answer
NO
Checker Log
ok NO
Test: #10, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
dEHsbM'gS[\brZ_dpjXw8f?L[4E"s4Zc9*(,j:>p$}m7HD[_9nOWQ\uvq2mHWR
Output
YES
Answer
YES
Checker Log
ok YES
Test: #11, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
tt6l=RHOfStm.;Qd$-}zDes*E,.F7qn5-b%HC
Output
YES
Answer
YES
Checker Log
ok YES
Test: #12, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
@F%K2=%RyL/
Output
NO
Answer
NO
Checker Log
ok NO
Test: #13, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
juq)k(FT.^G=G\zcqnO"uJIE1_]KFH9S=1c"mJ;F9F)%>&.WOdp09+k`Yc6}"6xw,Aos:M\_^^:xBb[CcsHm?J
Output
YES
Answer
YES
Checker Log
ok YES
Test: #14, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6G_"Fq#<AWyHG=Rci1t%#Jc#x<Fpg'N@t%F=``YO7\Zd;6PkMe<#91YgzTC)
Output
YES
Answer
YES
Checker Log
ok YES
Test: #15, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Fvg_~wC>SO4lF}*c`Q;mII9E{4.QodbqN]C
Output
YES
Answer
YES
Checker Log
ok YES
Test: #16, time: 30 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
p-UXsbd&f
Output
NO
Answer
NO
Checker Log
ok NO
Test: #17, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
<]D7NMA)yZe=`?RbP5lsa.l_Mg^V:"-0x+$3c,q&L%18Ku<HcA\s!^OQblk^x{35S'>yz8cKgVHWZ]kV0>_
Output
YES
Answer
YES
Checker Log
ok YES
Test: #18, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
f.20)8b+.R}Gy!DbHU3v(.(=Q^`z[_BaQ}eO=C1IK;b2GkD\{\Bf"!#qh]
Output
YES
Answer
YES
Checker Log
ok YES
Test: #19, time: 0 ms., memory: 1024 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
}do5RU<(w<q["-NR)IAH_HyiD{
Output
YES
Answer
YES
Checker Log
ok YES
Test: #20, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Iy^.,Aw*,5+f;l@Q;jLK'G5H-r1Pfmx?ei~`CjMmUe{K:lS9cu4ay8rqRh-W?Gqv!e-j*U)!Mzn{E8B6%~aSZ~iQ_QwlC9_cX(o8
Output
YES
Answer
YES
Checker Log
ok YES
Test: #21, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
sKLje,:q>-D,;NvQ3,qN3-N&tPx0nL/,>Ca|z"k2S{NF7btLa3_TyXG4XZ:`(t&"'^M|@qObZxv
Output
YES
Answer
YES
Checker Log
ok YES
Test: #22, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
%z:c@1ZsQ@\6U/NQ+M9R>,$bwG`U1+C\18^:S},;kw!&4r|z`
Output
YES
Answer
YES
Checker Log
ok YES
Test: #23, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
OKBB5z7ud81[Tn@P"nDUd,>@
Output
NO
Answer
NO
Checker Log
ok NO
Test: #24, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
y{0;neX]w0IenPvPx0iXp+X|IzLZZaRzBJ>q~LhMhD$x-^GDwl;,a'<bAqH8QrFwbK@oi?I'W.bZ]MlIQ/x(0YzbTH^l.)]0Bv
Output
YES
Answer
YES
Checker Log
ok YES
Test: #25, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
EL|xIP5_+Caon1hPpQ0[8+r@LX4;b?gMy>;/WH)pf@Ur*TiXu*e}b-*%acUA~A?>MDz#!\Uh
Output
YES
Answer
YES
Checker Log
ok YES
Test: #26, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
UbkW=UVb>;z6)p@Phr;^Dn.|5O{_i||:Rv|KJ_ay~V(S&Jp
Output
NO
Answer
NO
Checker Log
ok NO
Test: #27, time: 30 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
!3YPv@2JQ44@)R2O_4`GO
Output
YES
Answer
YES
Checker Log
ok YES
Test: #28, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Kba/Q,SL~FMd)3hOWU'Jum{9"$Ld4:GW}D]%tr@G{hpG:PV5-c'VIZ~m/6|3I?_4*1luKnOp`%p|0H{[|Y1A~4-ZdX,Rw2[\
Output
YES
Answer
YES
Checker Log
ok YES
Test: #29, time: 30 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
NRN*=v>;oU7[acMIJn*n^bWm!cm3#E7Efr>{g-8bl"DN4~_=f?[T;~Fq#&)aXq%</GcTJD^e$@Extm[e"C)q_L
Output
NO
Answer
NO
Checker Log
ok NO
Test: #30, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
y#<fv{_=$MP!{D%I\1OqjaqKh[pqE$KvYL<9@*V'j8uH0/gQdA'G;&y4Cv6&
Output
YES
Answer
YES
Checker Log
ok YES
Test: #31, time: 30 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+SE_Pg<?7Fh,z&uITQut2a-mk8X8La`c2A}
Output
YES
Answer
YES
Checker Log
ok YES
Test: #32, time: 30 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Uh3>ER](J
Output
NO
Answer
NO
Checker Log
ok NO
Test: #33, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
!:!{~=9*\P;Z6F?HC5GadFz)>k*=u|+"Cm]ICTmB!`L{&oS/z6b~#Snbp/^\Q>XWU-vY+/dP.7S=-#&whS@,
Output
YES
Answer
YES
Checker Log
ok YES
Test: #34, time: 30 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
KimtYBZp+ISeO(uH;UldoE6eAcp|9u?SzGZd6j-e}[}u#e[Cx8.qgY]$2!
Output
YES
Answer
YES
Checker Log
ok YES
Test: #35, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
[:[SN-{r>[l+OggH3v3g{EPC*@YBATT@
Output
YES
Answer
YES
Checker Log
ok YES
Test: #36, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
'jdL(vX
Output
NO
Answer
NO
Checker Log
ok NO
Test: #37, time: 0 ms., memory: 1024 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Q;R+aay]cL?Zh*uG"YcmO*@Dts*Gjp}D~M7Z96+<4?9I3aH~0qNdO(RmyRy=ci,s8qD_kwj;QHFzD|5,5
Output
YES
Answer
YES
Checker Log
ok YES
Test: #38, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
{Q@#<LU_v^qdh%gGxz*pu)Y"]k-l-N30WAxvp2IE3:jD0Wi4H/xWPH&s
Output
YES
Answer
YES
Checker Log
ok YES
Test: #39, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
~@Gb(S&N$mBuBUMAky-z^{5VwLNTzYg|ZUZncL@ahS?K*As<$iNUARM3r43J'jJB)$ujfPAq"G<S9flGyakZg!2Z.-NJ|2{F>]
Output
YES
Answer
YES
Checker Log
ok YES
Test: #40, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Jp5Aa>aP6fZ!\6%A}<S}j{O4`C6y$8|i3IW,WHy&"ioE&7zP"'xHAY;:x%@SnS]Mr{R|})gU
Output
YES
Answer
YES
Checker Log
ok YES
Test: #41, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ZA#:U)$RI^sE\vuAt]x"2zipI!}YEu2<j$:H0_9/~eB?#->
Output
YES
Answer
YES
Checker Log
ok YES
Test: #42, time: 30 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
&ppw0._:\p-PuWM@l}%%=
Output
NO
Answer
NO
Checker Log
ok NO
Test: #43, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
P(^pix"=oiEZu8?@d@J(I`Xp5TN^T3\Z7P5"ZrvZ{2Fwz3g-8`U!)(1$a<g+9Q|COhDoH;HwFY02Pa|ZGp$/WZBR=>6Jg!yr
Output
YES
Answer
YES
Checker Log
ok YES
Test: #44, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
`WfODc\?#ax~1xu@[ao+o_rN|L7%v,p,nDv>3+6cy.]q3)+A6b!q*Hc+#.t4f~vhUa~$^q
Output
YES
Answer
YES
Checker Log
ok YES
Test: #45, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
,)TH9N}'6t2+0Yg?S#6/{_.,!)9d}h'wG|sY&'Ul4D0l0
Output
YES
Answer
YES
Checker Log
ok YES
Test: #46, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
VXB&r9Z)IlKOJ:??KDA
Output
YES
Answer
YES
Checker Log
ok YES
Test: #47, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
")1cL>{o\dcYJzu?CefyN^bGRviOH&P7rJS3PT4:0V3F)%\}L=AJouYsj_>j2|7^1NWu*%NbOP>ngv-ls<;b-4Sd3Na0R
Output
YES
Answer
YES
Checker Log
ok YES
Test: #48, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2Y}\A)>row{~c[g>:'.|ZC8%UTQ/jcdhK%6O)QRC.kd@%y}LJYk=V{G5pQK/yKJ%{G3C
Output
YES
Answer
YES
Checker Log
ok YES
Test: #49, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
O.&=qt(`z(
Output
NO
Answer
NO
Checker Log
ok NO
Test: #50, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
_^r6fyIc/~~;>l%9?aVEi7-{=,[<aMiB'-scSg$$|"jAzY0N>QkHHGBZj2c"=fhRlWd5;5K|GgU?7h]!;wl@
Output
YES
Answer
YES
Checker Log
ok YES
Test: #51, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+/`sAd&eB29E=Nu87${.u6GY@$^a$,}s^!p!F}B-z8<<wORb<S7;HM1a,gp
Output
YES
Answer
YES
Checker Log
ok YES
Test: #52, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
U_ilyOGMT+QiW/M8/D(1=6a7)_FA,h4`8
Output
YES
Answer
YES
Checker Log
ok YES
Test: #53, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
!0WKT:$O
Output
NO
Answer
NO
Checker Log
ok NO
Test: #54, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1EE*I%EQz6$~pPu7|(r7nyPQt4uGU@]~H'4uII?b1_Wn)K?ZRHrr0z&Kr;}aO3<mN=3:{}QgPxI|Ncm4#)
Output
YES
Answer
YES
Checker Log
ok YES
Test: #55, time: 30 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
[u3"$+!:/.<Dp1M7tH}:zxjt],^kv}qP;y12"`^'/u*h%AFmPJ>e1#Yly
Output
YES
Answer
YES
Checker Log
ok YES
Test: #56, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
'F!_]tB<A&UO+p?7liE>(x&RFgG2~\(
Output
NO
Answer
NO
Checker Log
ok NO
Test: #57, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Qv)X8
Output
YES
Answer
YES
Checker Log
ok YES
Test: #58, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
aGv7,J@&g1(}E3g6[LuDZwZl2<v7IwQA%"R(?ouBD>_=y"3Kf%^>vON<a^T\G^ootgE@whWmZo=[ex|F
Output
YES
Answer
YES
Checker Log
ok YES
Test: #59, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
e{}2vQ+/r@p0}cLKNe4MCk
Output
YES
Answer
YES
Checker Log
ok YES
Test: #60, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mzbmweyydiadtlcouegmdbyfwurpwbpuvhifnuapwyndmhtqvkgkbhtytszotwflegsjzzszfwtzfpnscguemwrczqxycivdqnkH
Output
YES
Answer
YES
Checker Log
ok YES
Test: #61, time: 30 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
Qzbmweyydiadtlcouegmdbyfwurpwbpuvhifnuapwyndmhtqvkgkbhtytszotwflegsjzzszfwtzfpnscguemwrczqxycivdqnky
Output
YES
Answer
YES
Checker Log
ok YES
Test: #62, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
mzbmweyydiadtlcouegmdbyfwurpwb9uvhifnuapwyndmhtqvkgkbhtytszotwflegsjzzszfwtzfpnscguemwrczqxycivdqnky
Output
YES
Answer
YES
Checker Log
ok YES
Test: #63, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1H1
Output
YES
Answer
YES
Checker Log
ok YES
Test: #64, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+Q
Output
YES
Answer
YES
Checker Log
ok YES
Test: #65, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1ab
Output
NO
Answer
NO
Checker Log
ok NO
Test: #66, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
!
Output
NO
Answer
NO
Checker Log
ok NO
Test: #67, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
0+
Output
NO
Answer
NO
Checker Log
ok NO
Test: #68, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+H
Output
YES
Answer
YES
Checker Log
ok YES
Test: #69, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
cH
Output
YES
Answer
YES
Checker Log
ok YES
Test: #70, time: 0 ms., memory: 1024 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+8
Output
NO
Answer
NO
Checker Log
ok NO
Test: #71, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8+
Output
NO
Answer
NO
Checker Log
ok NO
Test: #72, time: 0 ms., memory: 1024 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
++++++++++++++++++++++++++
Output
NO
Answer
NO
Checker Log
ok NO
Test: #73, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
(+)
Output
NO
Answer
NO
Checker Log
ok NO
Test: #74, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
H+
Output
YES
Answer
YES
Checker Log
ok YES
Test: #75, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
a!
Output
NO
Answer
NO
Checker Log
ok NO
Test: #76, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
++++++++++++++
Output
NO
Answer
NO
Checker Log
ok NO
Test: #77, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Output
NO
Answer
NO
Checker Log
ok NO
Test: #78, time: 0 ms., memory: 1040 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
8
Output
NO
Answer
NO
Checker Log
ok NO
Test: #79, time: 0 ms., memory: 1028 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
Output
NO
Answer
NO
Checker Log
ok NO
Test: #80, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
HQ9
Output
YES
Answer
YES
Checker Log
ok YES
Test: #81, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+++H
Output
YES
Answer
YES
Checker Log
ok YES
Test: #82, time: 0 ms., memory: 1024 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
++++++++++
Output
NO
Answer
NO
Checker Log
ok NO
Test: #83, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
HHHHHHH
Output
YES
Answer
YES
Checker Log
ok YES
Test: #84, time: 0 ms., memory: 1036 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
abacabaH
Output
YES
Answer
YES
Checker Log
ok YES
Test: #85, time: 0 ms., memory: 1032 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
+G
Output
NO
Answer
NO
Checker Log
ok NO
*/