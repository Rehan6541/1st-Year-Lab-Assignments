"""
PROBLEM STATEMENT :Write a Python program that accepts a word from the user and reverses it.
"""

word = input("Input a word to reverse: ")

for char in range(len(word) - 1, -1, -1):
    print(word[char], end="")


print("\n")


"""way 2==>
def reverse(string):
string = string[::-1]
return string
"""

"""using reversed() function
for char in reversed(string):

  print(char)
"""