# Write a program to count the frequency of each character in a string using a dictionary.
s = input("Enter a string: ")
freq = {}

for ch in s:
    if ch in freq:
        freq[ch] += 1
    else:
        freq[ch] = 1

for ch, count in freq.items():
    print(repr(ch), ":", count)
