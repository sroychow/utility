def reverse1(s):
     rstring = ''
     for i,c in enumerate(s):
         rstring += s[len(s) - (i+1)]
     return rstring

def reverse2(s):
     return s[::-1]

def reverse3(s):
     return ''.join(reversed(s))
ss= input("Enter a string:")
print(reverse1(ss))
print(reverse2(ss))
print(reverse3(ss))

