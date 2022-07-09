/*
A. Dubstep
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.

Let's assume that a song consists of some number of words. To make the dubstep remix of this song, Vasya inserts a certain number of words "WUB" before the first word of the song (the number may be zero), after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words), and then the boy glues together all the words, including "WUB", in one string and plays the song at the club.

For example, a song with words "I AM X" can transform into a dubstep remix as "WUBWUBIWUBAMWUBWUBX" and cannot transform into "WUBWUBIAMWUBX".

Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music, he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.

Input
The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't exceed 200 characters. It is guaranteed that before Vasya remixed the song, no word contained substring "WUB" in it; Vasya didn't change the word order. It is also guaranteed that initially the song had at least one word.

Output
Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.

Examples
inputCopy
WUBWUBABCWUB
outputCopy
ABC 
inputCopy
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
outputCopy
WE ARE THE CHAMPIONS MY FRIEND 
Note
In the first sample: "WUBWUBABCWUB" = "WUB" + "WUB" + "ABC" + "WUB". That means that the song originally consisted of a single word "ABC", and all words "WUB" were added by Vasya.

In the second sample Vasya added a single word "WUB" between all neighbouring words, in the beginning and in the end, except for words "ARE" and "THE" — between them Vasya added two "WUB".


*/
#include <iostream>
using namespace std;
 
int main() {
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
	return 0;
}
/*
→Judgement Protocol
Test: #1, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBABCWUB
Output
ABC 
Answer
ABC 
Checker Log
ok ABC
Test: #2, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
Output
WE ARE  THE CHAMPIONS MY FRIEND 
Answer
WE ARE THE CHAMPIONS MY FRIEND 
Checker Log
ok 6 words
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBSR
Output
SR
Answer
SR 
Checker Log
ok SR
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
RWUBWUBWUBLWUB
Output
R   L 
Answer
R L 
Checker Log
ok 2 words
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ZJWUBWUBWUBJWUBWUBWUBL
Output
ZJ   J   L
Answer
ZJ J L 
Checker Log
ok 3 words
Test: #6, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CWUBBWUBWUBWUBEWUBWUBWUBQWUBWUBWUB
Output
C B   E   Q   
Answer
C B E Q 
Checker Log
ok 4 words
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBJKDWUBWUBWBIRAQKFWUBWUBYEWUBWUBWUBWVWUBWUB
Output
JKD  WBIRAQKF  YE   WV  
Answer
JKD WBIRAQKF YE WV 
Checker Log
ok 4 words
Test: #8, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBKSDHEMIXUJWUBWUBRWUBWUBWUBSWUBWUBWUBHWUBWUBWUB
Output
KSDHEMIXUJ  R   S   H   
Answer
KSDHEMIXUJ R S H 
Checker Log
ok 4 words
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
OGWUBWUBWUBXWUBWUBWUBIWUBWUBWUBKOWUBWUB
Output
OG   X   I   KO  
Answer
OG X I KO 
Checker Log
ok 4 words
Test: #10, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
QWUBQQWUBWUBWUBIWUBWUBWWWUBWUBWUBJOPJPBRH
Output
Q QQ   I  WW   JOPJPBRH
Answer
Q QQ I WW JOPJPBRH 
Checker Log
ok 5 words
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
VSRNVEATZTLGQRFEGBFPWUBWUBWUBAJWUBWUBWUBPQCHNWUBCWUB
Output
VSRNVEATZTLGQRFEGBFP   AJ   PQCHN C 
Answer
VSRNVEATZTLGQRFEGBFP AJ PQCHN C 
Checker Log
ok 4 words
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBEWUBWUBWUBIQMJNIQWUBWUBWUBGZZBQZAUHYPWUBWUBWUBPMRWUBWUBWUBDCV
Output
E   IQMJNIQ   GZZBQZAUHYP   PMR   DCV
Answer
E IQMJNIQ GZZBQZAUHYP PMR DCV 
Checker Log
ok 5 words
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBFVWUBWUBWUBBPSWUBWUBWUBRXNETCJWUBWUBWUBJDMBHWUBWUBWUBBWUBWUBVWUBWUBB
Output
FV   BPS   RXNETCJ   JDMBH   B  V  B
Answer
FV BPS RXNETCJ JDMBH B V B 
Checker Log
ok 7 words
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBFBQWUBWUBWUBIDFSYWUBWUBWUBCTWDMWUBWUBWUBSXOWUBWUBWUBQIWUBWUBWUBL
Output
FBQ   IDFSY   CTWDM   SXO   QI   L
Answer
FBQ IDFSY CTWDM SXO QI L 
Checker Log
ok 6 words
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
IWUBWUBQLHDWUBYIIKZDFQWUBWUBWUBCXWUBWUBUWUBWUBWUBKWUBWUBWUBNL
Output
I  QLHD YIIKZDFQ   CX  U   K   NL
Answer
I QLHD YIIKZDFQ CX U K NL 
Checker Log
ok 7 words
Test: #16, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
KWUBUPDYXGOKUWUBWUBWUBAGOAHWUBIZDWUBWUBWUBIYWUBWUBWUBVWUBWUBWUBPWUBWUBWUBE
Output
K UPDYXGOKU   AGOAH IZD   IY   V   P   E
Answer
K UPDYXGOKU AGOAH IZD IY V P E 
Checker Log
ok 8 words
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBOWUBWUBWUBIPVCQAFWYWUBWUBWUBQWUBWUBWUBXHDKCPYKCTWWYWUBWUBWUBVWUBWUBWUBFZWUBWUB
Output
O   IPVCQAFWY   Q   XHDKCPYKCTWWY   V   FZ  
Answer
O IPVCQAFWY Q XHDKCPYKCTWWY V FZ 
Checker Log
ok 6 words
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
PAMJGYWUBWUBWUBXGPQMWUBWUBWUBTKGSXUYWUBWUBWUBEWUBWUBWUBNWUBWUBWUBHWUBWUBWUBEWUBWUB
Output
PAMJGY   XGPQM   TKGSXUY   E   N   H   E  
Answer
PAMJGY XGPQM TKGSXUY E N H E 
Checker Log
ok 7 words
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBYYRTSMNWUWUBWUBWUBCWUBWUBWUBCWUBWUBWUBFSYUINDWOBVWUBWUBWUBFWUBWUBWUBAUWUBWUBWUBVWUBWUBWUBJB
Output
YYRTSMNWU   C   C   FSYUINDWOBV   F   AU   V   JB
Answer
YYRTSMNWU C C FSYUINDWOBV F AU V JB 
Checker Log
ok 8 words
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBYGPYEYBNRTFKOQCWUBWUBWUBUYGRTQEGWLFYWUBWUBWUBFVWUBHPWUBWUBWUBXZQWUBWUBWUBZDWUBWUBWUBM
Output
YGPYEYBNRTFKOQC   UYGRTQEGWLFY   FV HP   XZQ   ZD   M
Answer
YGPYEYBNRTFKOQC UYGRTQEGWLFY FV HP XZQ ZD M 
Checker Log
ok 7 words
Test: #21, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBZVMJWUBWUBWUBFOIMJQWKNZUBOFOFYCCWUBWUBWUBAUWWUBRDRADWUBWUBWUBCHQVWUBWUBWUBKFTWUBWUBWUBW
Output
ZVMJ   FOIMJQWKNZUBOFOFYCC   AUW RDRAD   CHQV   KFT   W
Answer
ZVMJ FOIMJQWKNZUBOFOFYCC AUW RDRAD CHQV KFT W 
Checker Log
ok 7 words
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBZBKOKHQLGKRVIMZQMQNRWUBWUBWUBDACWUBWUBNZHFJMPEYKRVSWUBWUBWUBPPHGAVVPRZWUBWUBWUBQWUBWUBAWUBG
Output
ZBKOKHQLGKRVIMZQMQNR   DAC  NZHFJMPEYKRVS   PPHGAVVPRZ   Q  A G
Answer
ZBKOKHQLGKRVIMZQMQNR DAC NZHFJMPEYKRVS PPHGAVVPRZ Q A G 
Checker Log
ok 7 words
Test: #23, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBJWUBWUBWUBNFLWUBWUBWUBGECAWUBYFKBYJWTGBYHVSSNTINKWSINWSMAWUBWUBWUBFWUBWUBWUBOVWUBWUBLPWUBWUBWUBN
Output
J   NFL   GECA YFKBYJWTGBYHVSSNTINKWSINWSMA   F   OV  LP   N
Answer
J NFL GECA YFKBYJWTGBYHVSSNTINKWSINWSMA F OV LP N 
Checker Log
ok 8 words
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBLCWUBWUBWUBZGEQUEATJVIXETVTWUBWUBWUBEXMGWUBWUBWUBRSWUBWUBWUBVWUBWUBWUBTAWUBWUBWUBCWUBWUBWUBQG
Output
LC   ZGEQUEATJVIXETVT   EXMG   RS   V   TA   C   QG
Answer
LC ZGEQUEATJVIXETVT EXMG RS V TA C QG 
Checker Log
ok 8 words
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBMPWUBWUBWUBORWUBWUBDLGKWUBWUBWUBVVZQCAAKVJTIKWUBWUBWUBTJLUBZJCILQDIFVZWUBWUBYXWUBWUBWUBQWUBWUBWUBLWUB
Output
MP   OR  DLGK   VVZQCAAKVJTIK   TJLUBZJCILQDIFVZ  YX   Q   L 
Answer
MP OR DLGK VVZQCAAKVJTIK TJLUBZJCILQDIFVZ YX Q L 
Checker Log
ok 8 words
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBNXOLIBKEGXNWUBWUBWUBUWUBGITCNMDQFUAOVLWUBWUBWUBAIJDJZJHFMPVTPOXHPWUBWUBWUBISCIOWUBWUBWUBGWUBWUBWUBUWUB
Output
NXOLIBKEGXN   U GITCNMDQFUAOVL   AIJDJZJHFMPVTPOXHP   ISCIO   G   U 
Answer
NXOLIBKEGXN U GITCNMDQFUAOVL AIJDJZJHFMPVTPOXHP ISCIO G U 
Checker Log
ok 7 words
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBNMMWCZOLYPNBELIYVDNHJUNINWUBWUBWUBDXLHYOWUBWUBWUBOJXUWUBWUBWUBRFHTGJCEFHCGWARGWUBWUBWUBJKWUBWUBSJWUBWUB
Output
NMMWCZOLYPNBELIYVDNHJUNIN   DXLHYO   OJXU   RFHTGJCEFHCGWARG   JK  SJ  
Answer
NMMWCZOLYPNBELIYVDNHJUNIN DXLHYO OJXU RFHTGJCEFHCGWARG JK SJ 
Checker Log
ok 6 words
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
SGWLYSAUJOJBNOXNWUBWUBWUBBOSSFWKXPDPDCQEWUBWUBWUBDIRZINODWUBWUBWUBWWUBWUBWUBPPHWUBWUBWUBRWUBWUBWUBQWUBWUBWUBJWUB
Output
SGWLYSAUJOJBNOXN   BOSSFWKXPDPDCQE   DIRZINOD   W   PPH   R   Q   J 
Answer
SGWLYSAUJOJBNOXN BOSSFWKXPDPDCQE DIRZINOD W PPH R Q J 
Checker Log
ok 8 words
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
TOWUBWUBWUBGBTBNWUBWUBWUBJVIOJBIZFUUYHUAIEBQLQXPQKZJMPTCWBKPOSAWUBWUBWUBSWUBWUBWUBTOLVXWUBWUBWUBNHWUBWUBWUBO
Output
TO   GBTBN   JVIOJBIZFUUYHUAIEBQLQXPQKZJMPTCWBKPOSA   S   TOLVX   NH   O
Answer
TO GBTBN JVIOJBIZFUUYHUAIEBQLQXPQKZJMPTCWBKPOSA S TOLVX NH O 
Checker Log
ok 7 words
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWSPLAYSZSAUDSWUBWUBWUBUWUBWUBWUBKRWUBWUBWUBRSOKQMZFIYZQUWUBWUBWUBELSHUWUBWUBWUBUKHWUBWUBWUBQXEUHQWUBWUBWUBBWUBWUBWUBR
Output
WSPLAYSZSAUDS   U   KR   RSOKQMZFIYZQU   ELSHU   UKH   QXEUHQ   B   R
Answer
WSPLAYSZSAUDS U KR RSOKQMZFIYZQU ELSHU UKH QXEUHQ B R 
Checker Log
ok 9 words
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBXEMWWVUHLSUUGRWUBWUBWUBAWUBXEGILZUNKWUBWUBWUBJDHHKSWUBWUBWUBDTSUYSJHWUBWUBWUBPXFWUBMOHNJWUBWUBWUBZFXVMDWUBWUBWUBZMWUBWUB
Output
XEMWWVUHLSUUGR   A XEGILZUNK   JDHHKS   DTSUYSJH   PXF MOHNJ   ZFXVMD   ZM  
Answer
XEMWWVUHLSUUGR A XEGILZUNK JDHHKS DTSUYSJH PXF MOHNJ ZFXVMD ZM 
Checker Log
ok 9 words
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
BMBWUBWUBWUBOQKWUBWUBWUBPITCIHXHCKLRQRUGXJWUBWUBWUBVWUBWUBWUBJCWUBWUBWUBQJPWUBWUBWUBBWUBWUBWUBBMYGIZOOXWUBWUBWUBTAGWUBWUBHWUB
Output
BMB   OQK   PITCIHXHCKLRQRUGXJ   V   JC   QJP   B   BMYGIZOOX   TAG  H 
Answer
BMB OQK PITCIHXHCKLRQRUGXJ V JC QJP B BMYGIZOOX TAG H 
Checker Log
ok 10 words
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CBZNWUBWUBWUBNHWUBWUBWUBYQSYWUBWUBWUBMWUBWUBWUBXRHBTMWUBWUBWUBPCRCWUBWUBWUBTZUYLYOWUBWUBWUBCYGCWUBWUBWUBCLJWUBWUBWUBSWUBWUBWUB
Output
CBZN   NH   YQSY   M   XRHBTM   PCRC   TZUYLYO   CYGC   CLJ   S   
Answer
CBZN NH YQSY M XRHBTM PCRC TZUYLYO CYGC CLJ S 
Checker Log
ok 10 words
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
DPDWUBWUBWUBEUQKWPUHLTLNXHAEKGWUBRRFYCAYZFJDCJLXBAWUBWUBWUBHJWUBOJWUBWUBWUBNHBJEYFWUBWUBWUBRWUBWUBWUBSWUBWWUBWUBWUBXDWUBWUBWUBJWUB
Output
DPD   EUQKWPUHLTLNXHAEKG RRFYCAYZFJDCJLXBA   HJ OJ   NHBJEYF   R   S W   XD   J 
Answer
DPD EUQKWPUHLTLNXHAEKG RRFYCAYZFJDCJLXBA HJ OJ NHBJEYF R S W XD J 
Checker Log
ok 11 words
Test: #35, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBISERPQITVIYERSCNWUBWUBWUBQWUBWUBWUBDGSDIPWUBWUBWUBCAHKDZWEXBIBJVVSKKVQJWUBWUBWUBKIWUBWUBWUBCWUBWUBWUBAWUBWUBWUBPWUBWUBWUBHWUBWUBWUBF
Output
ISERPQITVIYERSCN   Q   DGSDIP   CAHKDZWEXBIBJVVSKKVQJ   KI   C   A   P   H   F
Answer
ISERPQITVIYERSCN Q DGSDIP CAHKDZWEXBIBJVVSKKVQJ KI C A P H F 
Checker Log
ok 10 words
Test: #36, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBIWUBWUBLIKNQVWUBWUBWUBPWUBWUBWUBHWUBWUBWUBMWUBWUBWUBDPRSWUBWUBWUBBSAGYLQEENWXXVWUBWUBWUBXMHOWUBWUBWUBUWUBWUBWUBYRYWUBWUBWUBCWUBWUBWUBY
Output
I  LIKNQV   P   H   M   DPRS   BSAGYLQEENWXXV   XMHO   U   YRY   C   Y
Answer
I LIKNQV P H M DPRS BSAGYLQEENWXXV XMHO U YRY C Y 
Checker Log
ok 12 words
Test: #37, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBMWUBWUBWUBQWUBWUBWUBITCFEYEWUBWUBWUBHEUWGNDFNZGWKLJWUBWUBWUBMZPWUBWUBWUBUWUBWUBWUBBWUBWUBWUBDTJWUBHZVIWUBWUBWUBPWUBFNHHWUBWUBWUBVTOWUB
Output
M   Q   ITCFEYE   HEUWGNDFNZGWKLJ   MZP   U   B   DTJ HZVI   P FNHH   VTO 
Answer
M Q ITCFEYE HEUWGNDFNZGWKLJ MZP U B DTJ HZVI P FNHH VTO 
Checker Log
ok 12 words
Test: #38, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBNDNRFHYJAAUULLHRRDEDHYFSRXJWUBWUBWUBMUJVDTIRSGYZAVWKRGIFWUBWUBWUBHMZWUBWUBWUBVAIWUBWUBWUBDDKJXPZRGWUBWUBWUBSGXWUBWUBWUBIFKWUBWUBWUBUWUBWUBWUBW
Output
NDNRFHYJAAUULLHRRDEDHYFSRXJ   MUJVDTIRSGYZAVWKRGIF   HMZ   VAI   DDKJXPZRG   SGX   IFK   U   W
Answer
NDNRFHYJAAUULLHRRDEDHYFSRXJ MUJVDTIRSGYZAVWKRGIF HMZ VAI DDKJXPZRG SGX IFK U W 
Checker Log
ok 9 words
Test: #39, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBOJMWRSLAXXHQRTPMJNCMPGWUBWUBWUBNYGMZIXNLAKSQYWDWUBWUBWUBXNIWUBWUBWUBFWUBWUBWUBXMBWUBWUBWUBIWUBWUBWUBINWUBWUBWUBWDWUBWUBWUBDDWUBWUBWUBD
Output
OJMWRSLAXXHQRTPMJNCMPG   NYGMZIXNLAKSQYWD   XNI   F   XMB   I   IN   WD   DD   D
Answer
OJMWRSLAXXHQRTPMJNCMPG NYGMZIXNLAKSQYWD XNI F XMB I IN WD DD D 
Checker Log
ok 10 words
Test: #40, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBREHMWUBWUBWUBXWUBWUBWUBQASNWUBWUBWUBNLSMHLCMTICWUBWUBWUBVAWUBWUBWUBHNWUBWUBWUBNWUBWUBWUBUEXLSFOEULBWUBWUBWUBXWUBWUBWUBJWUBWUBWUBQWUBWUBWUBAWUBWUB
Output
REHM   X   QASN   NLSMHLCMTIC   VA   HN   N   UEXLSFOEULB   X   J   Q   A  
Answer
REHM X QASN NLSMHLCMTIC VA HN N UEXLSFOEULB X J Q A 
Checker Log
ok 12 words
Test: #41, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBSTEZTZEFFIWUBWUBWUBSWUBWUBWUBCWUBFWUBHRJPVWUBWUBWUBDYJUWUBWUBWUBPWYDKCWUBWUBWUBCWUBWUBWUBUUEOGCVHHBWUBWUBWUBEXLWUBWUBWUBVCYWUBWUBWUBMWUBWUBWUBYWUB
Output
STEZTZEFFI   S   C F HRJPV   DYJU   PWYDKC   C   UUEOGCVHHB   EXL   VCY   M   Y 
Answer
STEZTZEFFI S C F HRJPV DYJU PWYDKC C UUEOGCVHHB EXL VCY M Y 
Checker Log
ok 13 words
Test: #42, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WPPNMSQOQIWUBWUBWUBPNQXWUBWUBWUBHWUBWUBWUBNFLWUBWUBWUBGWSGAHVJFNUWUBWUBWUBFWUBWUBWUBWCMLRICFSCQQQTNBWUBWUBWUBSWUBWUBWUBKGWUBWUBWUBCWUBWUBWUBBMWUBWUBWUBRWUBWUB
Output
WPPNMSQOQI   PNQX   H   NFL   GWSGAHVJFNU   F   WCMLRICFSCQQQTNB   S   KG   C   BM   R  
Answer
WPPNMSQOQI PNQX H NFL GWSGAHVJFNU F WCMLRICFSCQQQTNB S KG C BM R 
Checker Log
ok 12 words
Test: #43, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
YZJOOYITZRARKVFYWUBWUBRZQGWUBWUBWUBUOQWUBWUBWUBIWUBWUBWUBNKVDTBOLETKZISTWUBWUBWUBWLWUBQQFMMGSONZMAWUBZWUBWUBWUBQZUXGCWUBWUBWUBIRZWUBWUBWUBLTTVTLCWUBWUBWUBY
Output
YZJOOYITZRARKVFY  RZQG   UOQ   I   NKVDTBOLETKZIST   WL QQFMMGSONZMA Z   QZUXGC   IRZ   LTTVTLC   Y
Answer
YZJOOYITZRARKVFY RZQG UOQ I NKVDTBOLETKZIST WL QQFMMGSONZMA Z QZUXGC IRZ LTTVTLC Y 
Checker Log
ok 12 words
Test: #44, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBCAXNCKFBVZLGCBWCOAWVWOFKZVQYLVTWUBWUBWUBNLGWUBWUBWUBAMGDZBDHZMRMQMDLIRMIWUBWUBWUBGAJSHTBSWUBWUBWUBCXWUBWUBWUBYWUBZLXAWWUBWUBWUBOHWUBWUBWUBZWUBWUBWUBGBWUBWUBWUBE
Output
CAXNCKFBVZLGCBWCOAWVWOFKZVQYLVT   NLG   AMGDZBDHZMRMQMDLIRMI   GAJSHTBS   CX   Y ZLXAW   OH   Z   GB   E
Answer
CAXNCKFBVZLGCBWCOAWVWOFKZVQYLVT NLG AMGDZBDHZMRMQMDLIRMI GAJSHTBS CX Y ZLXAW OH Z GB E 
Checker Log
ok 11 words
Test: #45, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBCHXSOWTSQWUBWUBWUBCYUZBPBWUBWUBWUBSGWUBWUBWKWORLRRLQYUUFDNWUBWUBWUBYYGOJNEVEMWUBWUBWUBRWUBWUBWUBQWUBWUBWUBIHCKWUBWUBWUBKTWUBWUBWUBRGSNTGGWUBWUBWUBXCXWUBWUBWUBS
Output
CHXSOWTSQ   CYUZBPB   SG  WKWORLRRLQYUUFDN   YYGOJNEVEM   R   Q   IHCK   KT   RGSNTGG   XCX   S
Answer
CHXSOWTSQ CYUZBPB SG WKWORLRRLQYUUFDN YYGOJNEVEM R Q IHCK KT RGSNTGG XCX S 
Checker Log
ok 12 words
Test: #46, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBHJHMSBURXTHXWSCHNAIJOWBHLZGJZDHEDSPWBWACCGQWUBWUBWUBXTZKGIITWUBWUBWUBAWUBWUBWUBVNCXPUBCQWUBWUBWUBIDPNAWUBWUBWUBOWUBWUBWUBYGFWUBWUBWUBMQOWUBWUBWUBKWUBWUBWUBAZVWUBWUBWUBEP
Output
HJHMSBURXTHXWSCHNAIJOWBHLZGJZDHEDSPWBWACCGQ   XTZKGIIT   A   VNCXPUBCQ   IDPNA   O   YGF   MQO   K   AZV   EP
Answer
HJHMSBURXTHXWSCHNAIJOWBHLZGJZDHEDSPWBWACCGQ XTZKGIIT A VNCXPUBCQ IDPNA O YGF MQO K AZV EP 
Checker Log
ok 11 words
Test: #47, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBKYDZOYWZSNGMKJSWAXFDFLTHDHEOGTDBNZMSMKZTVWUBWUBWUBLRMIIWUBWUBWUBGWUBWUBWUBADPSWUBWUBWUBANBWUBWUBPCWUBWUBWUBPWUBWUBWUBGPVNLSWIRFORYGAABUXMWUBWUBWUBOWUBWUBWUBNWUBWUBWUBYWUBWUB
Output
KYDZOYWZSNGMKJSWAXFDFLTHDHEOGTDBNZMSMKZTV   LRMII   G   ADPS   ANB  PC   P   GPVNLSWIRFORYGAABUXM   O   N   Y  
Answer
KYDZOYWZSNGMKJSWAXFDFLTHDHEOGTDBNZMSMKZTV LRMII G ADPS ANB PC P GPVNLSWIRFORYGAABUXM O N Y 
Checker Log
ok 11 words
Test: #48, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
REWUBWUBWUBJDWUBWUBWUBNWUBWUBWUBTWWUBWUBWUBWZDOCKKWUBWUBWUBLDPOVBFRCFWUBWUBAKZIBQKEUAZEEWUBWUBWUBLQYPNPFWUBYEWUBWUBWUBFWUBWUBWUBBPWUBWUBWUBAWWUBWUBWUBQWUBWUBWUBBRWUBWUBWUBXJL
Output
RE   JD   N   TW   WZDOCKK   LDPOVBFRCF  AKZIBQKEUAZEE   LQYPNPF YE   F   BP   AW   Q   BR   XJL
Answer
RE JD N TW WZDOCKK LDPOVBFRCF AKZIBQKEUAZEE LQYPNPF YE F BP AW Q BR XJL 
Checker Log
ok 15 words
Test: #49, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
CUFGJDXGMWUBWUBWUBOMWUBWUBWUBSIEWUBWUBWUBJJWKNOWUBWUBWUBYBHVNRNORGYWUBWUBWUBOAGCAWUBWUBWUBSBLBKTPFKPBIWUBWUBWUBJBWUBWUBWUBRMFCJPGWUBWUBWUBDWUBWUBWUBOJOWUBWUBWUBZPWUBWUBWUBMWUBRWUBWUBWUBFXWWUBWUBWUBO
Output
CUFGJDXGM   OM   SIE   JJWKNO   YBHVNRNORGY   OAGCA   SBLBKTPFKPBI   JB   RMFCJPG   D   OJO   ZP   M R   FXW   O
Answer
CUFGJDXGM OM SIE JJWKNO YBHVNRNORGY OAGCA SBLBKTPFKPBI JB RMFCJPG D OJO ZP M R FXW O 
Checker Log
ok 16 words
Test: #50, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBJZGAEXFMFEWMAKGQLUWUBWUBWUBICYTPQWGENELVYWANKUOJYWUBWUBWUBGWUBWUBWUBHYCJVLPHTUPNEGKCDGQWUBWUBWUBOFWUBWUBWUBCPGSOGZBRPRPVJJEWUBWUBWUBDQBCWUBWUBWUBHWUBWUBWUBMHOHYBMATWUBWUBWUBVWUBWUBWUBSWUBWUBWUBKOWU
Output
JZGAEXFMFEWMAKGQLU   ICYTPQWGENELVYWANKUOJY   G   HYCJVLPHTUPNEGKCDGQ   OF   CPGSOGZBRPRPVJJE   DQBC   H   MHOHYBMAT   V   S   KOWU
Answer
JZGAEXFMFEWMAKGQLU ICYTPQWGENELVYWANKUOJY G HYCJVLPHTUPNEGKCDGQ OF CPGSOGZBRPRPVJJE DQBC H MHOHYBMAT V S KOWU 
Checker Log
ok 12 words
Test: #51, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
A
Output
A
Answer
A 
Checker Log
ok A
Test: #52, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBA
Output
A
Answer
A 
Checker Log
ok A
Test: #53, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBA
Output
A
Answer
A 
Checker Log
ok A
Test: #54, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AWUBWUBWUB
Output
A   
Answer
A 
Checker Log
ok A
Test: #55, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AWUBBWUBCWUBD
Output
A B C D
Answer
A B C D 
Checker Log
ok 4 words
Test: #56, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWWUBWUBWUBUWUBWUBBWUB
Output
W   U  B 
Answer
W U B 
Checker Log
ok 3 words
Test: #57, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Output
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Answer
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 
Checker Log
ok AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA...AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Test: #58, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAWUBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Output
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Answer
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 
Checker Log
ok 2 words
Test: #59, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUWUBBWWUBUB
Output
WU BW UB
Answer
WU BW UB 
Checker Log
ok 3 words
Test: #60, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUABWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUBWUB
Output
WUAB                           
Answer
WUAB 
Checker Log
ok WUAB
Test: #61, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
ZWUB
Output
Z 
Answer
Z 
Checker Log
ok Z
Test: #62, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WU
Output
WU
Answer
WU 
Checker Log
ok WU
Test: #63, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
UB
Output
UB
Answer
UB 
Checker Log
ok UB
Test: #64, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
U
Output
U
Answer
U 
Checker Log
ok U
Test: #65, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBW
Output
W
Answer
W 
Checker Log
ok W
Test: #66, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWU
Output
WU
Answer
WU 
Checker Log
ok WU
Test: #67, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUWUB
Output
WU 
Answer
WU 
Checker Log
ok WU
Test: #68, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
UBWUB
Output
UB 
Answer
UB 
Checker Log
ok UB
Test: #69, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUWUBUBWUBUWUB
Output
WU UB U 
Answer
WU UB U 
Checker Log
ok 3 words
Test: #70, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUBWWUBAWUB
Output
W A 
Answer
W A 
Checker Log
ok 2 words
Test: #71, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
WUUUUU
Output
WUUUUU
Answer
WUUUUU 
Checker Log
ok WUUUUU
*/