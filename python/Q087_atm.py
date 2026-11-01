# Write an ATM program (check balance, deposit, withdraw, exit).
balance = 10000
choice = 0

while choice != 4:
    print("\n--- ATM OPTIONS ---")
    print("1. Check balance")
    print("2. Deposit money")
    print("3. Withdraw money")
    print("4. Exit")
    choice = int(input("Enter choice: "))

    if choice == 1:
        print("Current balance:", balance)
    elif choice == 2:
        amt = float(input("Enter amount to deposit: "))
        balance += amt
        print("Deposit successful")
    elif choice == 3:
        withdraw = float(input("Enter amount to withdraw: "))
        if withdraw <= balance:
            balance -= withdraw
            print("Withdraw successful")
        else:
            print("Insufficient balance")
    elif choice == 4:
        print("Thank you for using the ATM")
    else:
        print("Invalid choice")
