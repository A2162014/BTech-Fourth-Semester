1,44,#FALSE#,#FALSE#,"exp8",0,0,0,138,1,6,991181788
0,0,0,0,0,0
0
0
11
"LOAD",16
"BUBBLE",47
"JBCCMP1",50
"CMP1",101
"JBCCMP2",59
"CMP2",110
"JBCCMP3",68
"CMP3",119
"JBCCMP4",77
"EXIT",137
"CMP4",128
0,2,"MSF",0,0,0,0,#FALSE#
1,2,"CAL $LOAD",0,0,0,0,#FALSE#
5,0,"MOV #5, R00",0,0,0,0,#FALSE#
11,2,"MSF",0,0,0,0,#FALSE#
12,2,"CAL $BUBBLE",0,0,0,0,#FALSE#
16,-1,"LOAD",0,0,0,0,#FALSE#
16,0,"MOV #15, R01",0,0,0,0,#FALSE#
22,0,"MOV #33, R02",0,0,0,0,#FALSE#
28,0,"MOV #27, R03",0,0,0,0,#FALSE#
34,0,"MOV #18, R04",0,0,0,0,#FALSE#
40,0,"MOV #10, R05",0,0,0,0,#FALSE#
46,2,"RET",0,0,0,0,#FALSE#
47,-1,"BUBBLE",0,0,0,0,#FALSE#
47,1,"DEC R00",0,0,0,0,#FALSE#
50,-1,"JBCCMP1",0,0,0,0,#FALSE#
50,3,"CMP R01, R02",0,0,0,0,#FALSE#
55,2,"JLT $CMP1",0,0,0,0,#FALSE#
59,-1,"JBCCMP2",0,0,0,0,#FALSE#
59,3,"CMP R02, R03",0,0,0,0,#FALSE#
64,2,"JLT $CMP2",0,0,0,0,#FALSE#
68,-1,"JBCCMP3",0,0,0,0,#FALSE#
68,3,"CMP R03, R04",0,0,0,0,#FALSE#
73,2,"JLT $CMP3",0,0,0,0,#FALSE#
77,-1,"JBCCMP4",0,0,0,0,#FALSE#
77,3,"CMP R04, R05",0,0,0,0,#FALSE#
82,2,"JLT $CMP4",0,0,0,0,#FALSE#
86,3,"CMP #0, R00",0,0,0,0,#FALSE#
92,2,"JEQ $EXIT",0,0,0,0,#FALSE#
96,2,"JNE $BUBBLE",0,0,0,0,#FALSE#
100,2,"RET",0,0,0,0,#FALSE#
101,-1,"CMP1",0,0,0,0,#FALSE#
101,0,"SWP R01, R02",0,0,0,0,#FALSE#
106,2,"JMP $JBCCMP2",0,0,0,0,#FALSE#
110,-1,"CMP2",0,0,0,0,#FALSE#
110,0,"SWP R02, R03",0,0,0,0,#FALSE#
115,2,"JMP $JBCCMP3",0,0,0,0,#FALSE#
119,-1,"CMP3",0,0,0,0,#FALSE#
119,0,"SWP R03, R04",0,0,0,0,#FALSE#
124,2,"JMP $JBCCMP4",0,0,0,0,#FALSE#
128,-1,"CMP4",0,0,0,0,#FALSE#
128,0,"SWP R04, R05",0,0,0,0,#FALSE#
133,2,"JMP $BUBBLE",0,0,0,0,#FALSE#
137,-1,"EXIT",0,0,0,0,#FALSE#
137,2,"HLT",0,0,0,0,#FALSE#
0
0
0
-1