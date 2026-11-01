# Write a bill calculation system using a function (price, quantity and discount).
def cal_bill(price, qty, d=10):
    total = price * qty
    discount = total * d / 100
    return total - discount

price = float(input("Enter the price: "))
qty = int(input("Enter the quantity: "))

bill = cal_bill(price, qty)
print("Final bill amount:", bill)
