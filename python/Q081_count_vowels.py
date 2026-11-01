# Write a program to count the vowels in a string.
s = input("Enter a string: ")
v = 0

for ch in s:
    if ch in "aeiouAEIOU":
        v += 1

print("Vowels =", v)
