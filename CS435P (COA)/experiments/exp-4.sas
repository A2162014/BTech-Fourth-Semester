1,12,#FALSE#,#FALSE#,"exp-4",0,0,0,45,1,6,-2018175830
0,0,0,0,0,0
0
0
2
"EVEN",31
"ODD",38
0,0,"MOV #36, R01",0,0,0,0,#FALSE#
6,0,"MOV R01, R00",0,0,0,0,#FALSE#
11,5,"AND #1, R01",0,0,0,0,#FALSE#
17,3,"CMP #0, R01",0,0,0,0,#FALSE#
23,2,"JEQ $EVEN",0,0,0,0,#FALSE#
27,2,"JNE $ODD",0,0,0,0,#FALSE#
31,-1,"EVEN",0,0,0,0,#FALSE#
31,0,"MOV #1, R04",0,0,0,0,#FALSE#
37,2,"HLT",0,0,0,0,#FALSE#
38,-1,"ODD",0,0,0,0,#FALSE#
38,0,"MOV #1, R05",0,0,0,0,#FALSE#
44,2,"HLT",0,0,0,0,#FALSE#
0
0
0
-1