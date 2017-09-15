def max2(a,b):
    return a if(a>b) else b

def max3(a,b,c):
    return max(a,b) if( max(a,b) > max(b,c) ) else max(b,c)

x = input("Enter first number:")
y = input("Enter second number:")
z = input("Enter third number:")

print "Largest of three is :",max3(x,y,z)
