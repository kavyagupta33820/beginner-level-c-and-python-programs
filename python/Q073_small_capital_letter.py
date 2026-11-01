# Write a program to check if a character is a small letter, capital letter or not an alphabet.
ch = input("Enter a character: ")

if len(ch) != 1:
    print("Please enter exactly one character")
elif ch.isupper():
    print("Capital letter")
elif ch.islower():
    print("Small letter")
else:
    print("Not an alphabet")
