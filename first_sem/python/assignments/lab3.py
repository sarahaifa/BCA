balance = 0

while True:
    print("\n--- BANK MENU ---")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Display Account Details")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        amount = float(input("Enter deposit amount: "))

        if amount <= 0:
            print("Error: Amount must be positive.")
        else:
            balance = balance + amount
            print("Deposit successful.")
            print("Current balance =", balance)

    elif choice == 2:
        amount = float(input("Enter withdrawal amount: "))

        if amount <= 0:
            print("Error: Amount must be positive.")
        elif amount > balance:
            print("Error: Insufficient balance.")
        else:
            balance = balance - amount
            print("Withdrawal successful.")
            print("Current balance =", balance)

    elif choice == 3:
        print("\n--- ACCOUNT DETAILS ---")
        print("Account balance =", balance)

    elif choice == 4:
        print("Thank you for using the bank application.")
        break

    else:
        print("Error: Invalid choice")