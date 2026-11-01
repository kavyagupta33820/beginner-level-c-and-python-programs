# Write a program for a discount system (10% discount on amounts of 5000 or more).
amt = float(input("Enter the amount: "))

if amt >= 5000:
    discount = amt * 0.10
    print("Discount is 10%")
else:
    discount = 0
    print("No discount available")

final_amt = amt - discount
print("Original Amount:", amt)
print("Discount Amount:", discount)
print("Final Amount:", final_amt)
