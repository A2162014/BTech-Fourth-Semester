1,11,#FALSE#,#FALSE#,"exp5.2",0,0,0,39,1,6,500179493
0,0,0,0,0,0
0
0
2
"IF",20
"ELSE",27
0,0,"MOV #0, R01",0,0,0,0,#FALSE#
6,3,"CMP #0, R01",0,0,0,0,#FALSE#
12,2,"JEQ $IF",0,0,0,0,#FALSE#
16,2,"JNE $ELSE",0,0,0,0,#FALSE#
20,-1,"IF",0,0,0,0,#FALSE#
20,0,"MOV #5, R03",0,0,0,0,#FALSE#
26,2,"HLT",0,0,0,0,#FALSE#
27,-1,"ELSE",0,0,0,0,#FALSE#
27,1,"ADD #1, R01",0,0,0,0,#FALSE#
33,0,"MOV R01, R03",0,0,0,0,#FALSE#
38,2,"HLT",0,0,0,0,#FALSE#
0
0
0
-1
