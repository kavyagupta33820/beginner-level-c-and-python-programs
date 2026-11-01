# Write a program for a grade system based on marks.
marks = int(input("Enter marks: "))

if marks >= 80:
    print("GRADE A")
elif marks >= 60:
    print("GRADE B")
elif marks >= 40:
    print("GRADE C")
else:
    print("GRADE D")
