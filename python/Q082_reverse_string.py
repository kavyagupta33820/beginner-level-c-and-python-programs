# Write a program to reverse a string.
s = input("Enter a string: ")
r = ""

for ch in s:
    r = ch + r

print("Reversed string =", r)
