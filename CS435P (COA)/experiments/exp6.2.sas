1,18,#FALSE#,#FALSE#,"exp6.2",0,0,0,56,1,6,-36549787
0,0,0,0,0,0
0
0
2
"pushpoploop",12
"addloop",28
0,0,"MOV #1, R01",0,0,0,0,#FALSE#
6,2,"MSF",0,0,0,0,#FALSE#
7,2,"CAL $pushpoploop",0,0,0,0,#FALSE#
11,2,"HLT",0,0,0,0,#FALSE#
12,-1,"pushpoploop",0,0,0,0,#FALSE#
12,0,"PSH R01",0,0,0,0,#FALSE#
15,1,"INC R01",0,0,0,0,#FALSE#
18,3,"CMP #15, R01",0,0,0,0,#FALSE#
24,2,"JLE $pushpoploop",0,0,0,0,#FALSE#
28,-1,"addloop",0,0,0,0,#FALSE#
28,0,"POP R01",0,0,0,0,#FALSE#
31,0,"POP R02",0,0,0,0,#FALSE#
34,1,"ADD R01, R02",0,0,0,0,#FALSE#
39,0,"PSH R02",0,0,0,0,#FALSE#
42,3,"CMP #120, R02",0,0,0,0,#FALSE#
48,2,"JNE $addloop",0,0,0,0,#FALSE#
52,0,"POP R03",0,0,0,0,#FALSE#
55,2,"RET",0,0,0,0,#FALSE#
0
0
0
-1
