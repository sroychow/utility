def strlen(s):
    strlength = 0
    for c in s:
        strlength+=1
    return strlength

ss = input("Enter String:")

print "String Length = ",strlen(ss)
