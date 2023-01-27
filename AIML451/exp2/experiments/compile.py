myCode = 'a=7\nb=9\nresult=a*b\nprint("result=",result)'
codeObject = compile(myCode, 'resultstring', 'exec')
exec(codeObject)
