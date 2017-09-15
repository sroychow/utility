def overlapping(l1,l2):
    for mem in l1:
        return "True" if( mem in l2 ) else "False"

l1 = [1,2,3,4]
l2 = [9,6,7,8]

print overlapping(l1,l2)

