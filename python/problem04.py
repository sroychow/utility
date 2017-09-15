def is_vowel(c):
     return "True" if( c in ["a","A","e","E","i","I","o","O","u","U"] ) else "False"

ch = input('Enter character:')
print ch," is a vowel:",is_vowel(ch)
