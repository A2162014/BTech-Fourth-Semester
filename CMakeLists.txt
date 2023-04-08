cmake_minimum_required(VERSION 3.25)
project(practicals)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(.vscode)
include_directories(AIML451)
include_directories("CS432P (OS)")
include_directories("CS433P (OOP)")
include_directories("CS435P (COA)")

add_executable(practicals
        .idea/inspectionProfiles/Project_Default.xml
        .idea/.gitignore
        .idea/modules.xml
        .idea/practicals.iml
        .idea/vcs.xml
        .idea/workspace.xml
        .vscode/c_cpp_properties.json
        .vscode/launch.json
        .vscode/settings.json
        .vscode/tasks.json
        AIML451/dummy/ocr.py
        AIML451/dummy/ocr1.png
        AIML451/dummy/ocr8.png
        AIML451/dummy/ocr9.png
        AIML451/exp1/experiments/obs/%op.py
        AIML451/exp1/experiments/obs/boollit.py
        AIML451/exp1/experiments/obs/constant.py
        AIML451/exp1/experiments/obs/range.py
        AIML451/exp1/experiments/obs/singlelineio.py
        AIML451/exp1/experiments/obs/string.py
        AIML451/exp1/experiments/obs/stringop.py
        AIML451/exp1/experiments/obs/valchange.py
        AIML451/exp1/experiments/obs/valConst.py
        AIML451/exp1/experiments/obs/var&lit.py
        AIML451/exp1/experiments/output/addition.png
        AIML451/exp1/experiments/output/area.png
        AIML451/exp1/experiments/output/christ.png
        AIML451/exp1/experiments/output/demo.png
        AIML451/exp1/experiments/output/exp1_out.docx
        AIML451/exp1/experiments/output/intenderr.png
        AIML451/exp1/experiments/output/itvscript.png
        AIML451/exp1/experiments/output/name.png
        AIML451/exp1/experiments/output/range.png
        AIML451/exp1/experiments/output/type.png
        AIML451/exp1/experiments/output/version.png
        AIML451/exp1/experiments/record/addition.py
        AIML451/exp1/experiments/record/area.py
        AIML451/exp1/experiments/record/christ.py
        AIML451/exp1/experiments/record/demo.py
        AIML451/exp1/experiments/record/intendcorr.py
        AIML451/exp1/experiments/record/intenderr.py
        AIML451/exp1/experiments/record/itvscript.py
        AIML451/exp1/experiments/record/range.py
        "AIML451/exp1/experiments/record/type().py"
        AIML451/exp1/lab-1.pdf
        "AIML451/exp2/experiments/abs().py"
        AIML451/exp2/experiments/all.py
        AIML451/exp2/experiments/any.py
        AIML451/exp2/experiments/arithmetic.py
        AIML451/exp2/experiments/assignment.py
        AIML451/exp2/experiments/bitwise.py
        AIML451/exp2/experiments/bool.py
        AIML451/exp2/experiments/callable.py
        AIML451/exp2/experiments/comparison.py
        AIML451/exp2/experiments/compile.py
        AIML451/exp2/experiments/dict.py
        AIML451/exp2/experiments/identity.py
        AIML451/exp2/experiments/list.py
        AIML451/exp2/experiments/logical.py
        AIML451/exp2/experiments/map.py
        AIML451/exp2/experiments/membership.py
        AIML451/exp2/experiments/myFile.txt
        AIML451/exp2/experiments/oct.py
        AIML451/exp2/experiments/open.py
        AIML451/exp2/experiments/reversed.py
        AIML451/exp2/experiments/set.py
        AIML451/exp2/experiments/sorted.py
        AIML451/exp2/experiments/str.py
        AIML451/exp2/experiments/tuple.py
        AIML451/exp2/outputs/builtin-1.png
        AIML451/exp2/outputs/builtin-2.png
        AIML451/exp2/outputs/dict.png
        AIML451/exp2/outputs/list.png
        AIML451/exp2/outputs/operator-1.png
        AIML451/exp2/outputs/operator-2.png
        AIML451/exp2/outputs/set.png
        AIML451/exp2/outputs/tuple.png
        "AIML451/exp2/Lab experiment 2.pdf"
        "AIML451/exp3/.ipynb_checkpoints/EXP-3 Observation-checkpoint.ipynb"
        "AIML451/exp3/.ipynb_checkpoints/EXP-3 Record-checkpoint.ipynb"
        "AIML451/exp3/EXP-3 Observation.ipynb"
        "AIML451/exp3/EXP-3 Record.ipynb"
        AIML451/exp3/py_lab_exp3.pdf
        AIML451/exp4/exp4.ipynb
        AIML451/exp4/exp4.pdf
        AIML451/exp4/exp4.py
        AIML451/exp5/exp5.ipynb
        "AIML451/exp5/Lab 5-FUNCTIONS.pdf"
        AIML451/exp6/exp6.ipynb
        AIML451/exp6/Lab6_List_Tuple_Dictionary.pdf
        "AIML451/Data Handlinng Using Pandas_Labprograms.docx"
        AIML451/Data_Analysis_and_Visualization_Lab8.docx
        "AIML451/Lab 8 - Files.pdf"
        "AIML451/Lab 9 - MODULES, PACKAGES.pdf"
        "CS432P (OS)/exp1/data/exp1_a/cal_1.png"
        "CS432P (OS)/exp1/data/exp1_a/cal_2.png"
        "CS432P (OS)/exp1/data/exp1_a/cal_3.png"
        "CS432P (OS)/exp1/data/exp1_a/cal_4.png"
        "CS432P (OS)/exp1/data/exp1_a/cat_1.png"
        "CS432P (OS)/exp1/data/exp1_a/cat_2.png"
        "CS432P (OS)/exp1/data/exp1_a/cat_3.png"
        "CS432P (OS)/exp1/data/exp1_a/cd.png"
        "CS432P (OS)/exp1/data/exp1_a/chmod.png"
        "CS432P (OS)/exp1/data/exp1_a/date_1.png"
        "CS432P (OS)/exp1/data/exp1_a/date_2.png"
        "CS432P (OS)/exp1/data/exp1_a/date_3.png"
        "CS432P (OS)/exp1/data/exp1_a/echo.png"
        "CS432P (OS)/exp1/data/exp1_a/grep_1.png"
        "CS432P (OS)/exp1/data/exp1_a/grep_2.png"
        "CS432P (OS)/exp1/data/exp1_a/grep_3.png"
        "CS432P (OS)/exp1/data/exp1_a/grep_4.png"
        "CS432P (OS)/exp1/data/exp1_a/grep_5.png"
        "CS432P (OS)/exp1/data/exp1_a/ln.png"
        "CS432P (OS)/exp1/data/exp1_a/ls_1.png"
        "CS432P (OS)/exp1/data/exp1_a/ls_2.png"
        "CS432P (OS)/exp1/data/exp1_a/mkdir_1.png"
        "CS432P (OS)/exp1/data/exp1_a/mkdir_2.png"
        "CS432P (OS)/exp1/data/exp1_a/pwd.png"
        "CS432P (OS)/exp1/data/exp1_a/rm_1.png"
        "CS432P (OS)/exp1/data/exp1_a/rm_2.png"
        "CS432P (OS)/exp1/data/exp1_a/who.png"
        "CS432P (OS)/exp1/data/exp1_b/calculator.png"
        "CS432P (OS)/exp1/data/exp1_b/copydir.png"
        "CS432P (OS)/exp1/data/exp1_b/factorial.png"
        "CS432P (OS)/exp1/data/exp1_b/fibonacci.png"
        "CS432P (OS)/exp1/data/exp1_b/largestof2.png"
        "CS432P (OS)/exp1/data/exp1_b/largestof3.png"
        "CS432P (OS)/exp1/data/exp1_b/oddeven.png"
        "CS432P (OS)/exp1/data/exp1_b/palindrome.png"
        "CS432P (OS)/exp1/data/exp1_b/swapwithouttemp.png"
        "CS432P (OS)/exp1/data/exp1_b/swapwithtemp.png"
        "CS432P (OS)/exp1/data/exp1_c/user_functions.png"
        "CS432P (OS)/exp1/data/Lab Experiment 1.pdf"
        "CS432P (OS)/exp1/experiments/calculator.sh"
        "CS432P (OS)/exp1/experiments/copydir.sh"
        "CS432P (OS)/exp1/experiments/factorial.sh"
        "CS432P (OS)/exp1/experiments/fibonacci.sh"
        "CS432P (OS)/exp1/experiments/largestof2.sh"
        "CS432P (OS)/exp1/experiments/largestof3.sh"
        "CS432P (OS)/exp1/experiments/oddeven.sh"
        "CS432P (OS)/exp1/experiments/palindrome.sh"
        "CS432P (OS)/exp1/experiments/swapwithouttemp.sh"
        "CS432P (OS)/exp1/experiments/swapwithtemp.sh"
        "CS432P (OS)/exp2/output/exp2a.png"
        "CS432P (OS)/exp4/exp4.c"
        "CS432P (OS)/exp5/mine/exp5a_1.c"
        "CS432P (OS)/exp5/mine/exp5a_2.c"
        "CS432P (OS)/exp5/mine/exp5b_3.c"
        "CS432P (OS)/exp5/mine/exp5b_4.c"
        "CS432P (OS)/exp5/FCFS.c"
        "CS432P (OS)/exp5/priority.c"
        "CS432P (OS)/exp5/round_robin.c"
        "CS432P (OS)/exp5/SJF.c"
        "CS432P (OS)/exp6/exp6.c"
        "CS432P (OS)/exp7/exp7.c"
        "CS432P (OS)/exp8/exp8a.c"
        "CS432P (OS)/CS432P_TOPICS(PRATICALS).png"
        "CS432P (OS)/EXP 6 and 7.pdf"
        "CS432P (OS)/EXP 8 a and b .pdf"
        "CS432P (OS)/Exp 9 a and b.pdf"
        "CS433P (OOP)/experiment/exp1a/Calculator.class"
        "CS433P (OOP)/experiment/exp1a/Calculator.java"
        "CS433P (OOP)/experiment/exp1b/Array_demo.class"
        "CS433P (OOP)/experiment/exp1b/Array_demo.java"
        "CS433P (OOP)/experiment/exp1b/GrammarlyAddInSetup.exe"
        "CS433P (OOP)/experiment/exp2/Distance.class"
        "CS433P (OOP)/experiment/exp2/Distanceaddition.class"
        "CS433P (OOP)/experiment/exp2/Distanceaddition.java"
        "CS433P (OOP)/experiment/exp3/exp3-1.PNG"
        "CS433P (OOP)/experiment/exp3/exp3-2.PNG"
        "CS433P (OOP)/experiment/exp3/interBank.java"
        "CS433P (OOP)/experiment/exp4/exp4.PNG"
        "CS433P (OOP)/experiment/exp4/OuterClass.java"
        "CS433P (OOP)/experiment/exp5/Calc2.class"
        "CS433P (OOP)/experiment/exp5/Calculator.class"
        "CS433P (OOP)/experiment/exp5/UI_demo.class"
        "CS433P (OOP)/experiment/exp5/UI_demo.java"
        "CS433P (OOP)/experiment/exp7/excep.class"
        "CS433P (OOP)/experiment/exp7/excep.java"
        "CS433P (OOP)/experiment/exp7/exp7-out.png"
        "CS433P (OOP)/experiment/exp7/InsufficientFundsException.class"
        "CS433P (OOP)/experiment/exp8/exp8-out.png"
        "CS433P (OOP)/experiment/exp8/Stack.class"
        "CS433P (OOP)/experiment/exp8/Stack.java"
        "CS433P (OOP)/experiment/exp9/CubeCalculator.class"
        "CS433P (OOP)/experiment/exp9/exp9-out.png"
        "CS433P (OOP)/experiment/exp9/NumberGenerator.class"
        "CS433P (OOP)/experiment/exp9/SquareCalculator.class"
        "CS433P (OOP)/experiment/exp9/th.class"
        "CS433P (OOP)/experiment/exp9/th.java"
        "CS433P (OOP)/experiment/practice/Boat.class"
        "CS433P (OOP)/experiment/practice/Car.class"
        "CS433P (OOP)/experiment/practice/Moveable.class"
        "CS433P (OOP)/experiment/practice/Plane.class"
        "CS433P (OOP)/experiment/practice/Vehicle.class"
        "CS433P (OOP)/experiment/practice/VehicleGame.class"
        "CS433P (OOP)/experiment/practice/VehicleGame.java"
        "CS433P (OOP)/experiment/demo.java"
        "CS433P (OOP)/experiment/PP lab program.docx"
        "CS433P (OOP)/experiment/PP lab program.pdf"
        "CS433P (OOP)/project/2022_Mini project Report format.docx"
        "CS433P (OOP)/record/pdf format/CSE - AIML(PP).pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_1.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_2.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_3.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_4.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_5.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_6.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_7.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_8.pdf"
        "CS433P (OOP)/record/pdf format/OOP_experiment_9.pdf"
        "CS433P (OOP)/record/pdf format/OOP_Record(1-6).pdf"
        "CS433P (OOP)/record/pdf format/OOP_Record(7-9).pdf"
        "CS433P (OOP)/record/pdf format/OOP_Record(full).pdf"
        "CS433P (OOP)/record/CSE - AIML(PP).docx"
        "CS433P (OOP)/record/game.docx"
        "CS433P (OOP)/record/OOP RECORD FORMAT.pdf"
        "CS433P (OOP)/record/OOP_experiment_1.docx"
        "CS433P (OOP)/record/OOP_experiment_2.docx"
        "CS433P (OOP)/record/OOP_experiment_3.docx"
        "CS433P (OOP)/record/OOP_experiment_4.docx"
        "CS433P (OOP)/record/OOP_experiment_5.docx"
        "CS433P (OOP)/record/OOP_experiment_6.docx"
        "CS433P (OOP)/record/OOP_experiment_7.docx"
        "CS433P (OOP)/record/OOP_experiment_8.docx"
        "CS433P (OOP)/record/OOP_experiment_9.docx"
        "CS433P (OOP)/CS433P_TOPICS(PRATICALS).png"
        "CS435P (COA)/data/images/exp10_1.2.png"
        "CS435P (COA)/data/images/exp10_1.3.png"
        "CS435P (COA)/data/images/exp10_2.1.png"
        "CS435P (COA)/data/images/exp10_2.2.png"
        "CS435P (COA)/data/images/exp10_2.3.png"
        "CS435P (COA)/data/images/exp6.2.a.png"
        "CS435P (COA)/data/images/exp6.2.b.png"
        "CS435P (COA)/data/images/exp9.2.png"
        "CS435P (COA)/data/images/exp9.3.png"
        "CS435P (COA)/data/pdf formats/COA-COMPLETE_RECORD.pdf"
        "CS435P (COA)/data/pdf formats/COA-exp-1-6.pdf"
        "CS435P (COA)/data/pdf formats/COA-exp-7-10_2-new-front.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment1-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment10_1-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment10_2-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment2-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment3-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment4-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment5-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment6-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment7-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment8-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/COA-experiment9-worksheet.pdf"
        "CS435P (COA)/data/pdf formats/CSE - AIML Certificate.pdf"
        "CS435P (COA)/data/COA-experiment1-worksheet.docx"
        "CS435P (COA)/data/COA-experiment2-worksheet.docx"
        "CS435P (COA)/data/COA-experiment3-worksheet.docx"
        "CS435P (COA)/data/COA-experiment4-worksheet.docx"
        "CS435P (COA)/data/COA-experiment5-worksheet.docx"
        "CS435P (COA)/data/COA-experiment6-worksheet.docx"
        "CS435P (COA)/data/COA-experiment7-worksheet.docx"
        "CS435P (COA)/data/COA-experiment8-worksheet.docx"
        "CS435P (COA)/data/CSE - AIML Certificate.docx"
        "CS435P (COA)/data/Ex 10_1.docx"
        "CS435P (COA)/data/Ex 10_2.docx"
        "CS435P (COA)/data/Ex 9.docx"
        "CS435P (COA)/experiments/decrement.sas"
        "CS435P (COA)/experiments/demo.sas"
        "CS435P (COA)/experiments/exp-1.sas"
        "CS435P (COA)/experiments/exp-4.sas"
        "CS435P (COA)/experiments/exp10_1.2_plot.py"
        "CS435P (COA)/experiments/exp10_1.3_plot.py"
        "CS435P (COA)/experiments/exp10_1.5.sas"
        "CS435P (COA)/experiments/exp10_1.sas"
        "CS435P (COA)/experiments/exp10_2.1_plot.py"
        "CS435P (COA)/experiments/exp10_2.2_plot.py"
        "CS435P (COA)/experiments/exp10_2.3_plot.py"
        "CS435P (COA)/experiments/exp2.sas"
        "CS435P (COA)/experiments/exp3.sas"
        "CS435P (COA)/experiments/exp5.1.sas"
        "CS435P (COA)/experiments/exp5.2.sas"
        "CS435P (COA)/experiments/exp5.3.sas"
        "CS435P (COA)/experiments/exp5.4.sas"
        "CS435P (COA)/experiments/exp5.5.sas"
        "CS435P (COA)/experiments/exp6.1.sas"
        "CS435P (COA)/experiments/exp6.2.sas"
        "CS435P (COA)/experiments/exp7.a.sas"
        "CS435P (COA)/experiments/exp7.b.sas"
        "CS435P (COA)/experiments/exp8.sas"
        "CS435P (COA)/experiments/exp9.2"
        "CS435P (COA)/experiments/exp9.2_plot.py"
        "CS435P (COA)/experiments/exp9.3_plot.py"
        "CS435P (COA)/experiments/exp9.sas"
        "CS435P (COA)/experiments/routine_demo_1.sas"
        "CS435P (COA)/experiments/routine_demo_2.sas"
        "CS435P (COA)/CS435P_TOPICS(PRATICALS-1).png"
        "CS435P (COA)/CS435P_TOPICS(PRATICALS-2).png"
        .gitignore
        "MSE Lab - March 2023.xlsx"
        README.md "CS432P (OS)/exp8/exp8b.c")
