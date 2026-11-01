# Write a program to check whether a string is a palindrome.
s = input("Enter a string: ")

if s == s[::-1]:
    print(s, "is a palindrome")
else:
    print(s, "is not a palindrome")
