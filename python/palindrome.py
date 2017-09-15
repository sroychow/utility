def is_palindrome(s):
     return "True" if( s[::-1] == s ) else "False"

ss= input("Enter a string:")
print(is_palindrome(ss))
