#demostrate bank operations using extention name,acccountno=1000,pan no,emailid,contactno,address,currentbalance
print("""1.deposit
2.withdrawal
3.display account details
4.exit""")
choice=int(input("enter choice:"))
name=input("enter your name:")
accountno=int(input("enter account number:"))
pan_no=int(input("enter pan number:"))
dob=input("enter date of birth:")
emailid=input("enter email:")
contactno=int(input("enter contactno:"))
address=input("enter address:")
balance=int(input("enter current balance:"))
account_details=(name,pan_no,accountno,dob,[emailid,contactno,address,balance])
print(account_details)
if choice==1:
    amount=int(input("enter deposit amount:"))
    balance=amount+balance
    print("balance",balance)
account_details=(name,pan_no,accountno,dob,[emailid,contactno,address,balance])
print(account_details)

