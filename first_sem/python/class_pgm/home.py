name = input("Enter customer name: ")
purchase = float(input("Enter total purchase amount: "))

# Calculate discount
if purchase < 1000:
    discount = 0
elif purchase <= 5000:
    discount = purchase * 0.10
else:
    discount = purchase * 0.20

# Amount after discount
amount_after_discount = purchase - discount

# Calculate GST
gst = amount_after_discount * 0.05

# Final bill
final_bill = amount_after_discount + gst                                                                                          

# Display results
print("\n----- BILL -----")
print("Customer Name:", name)
print("Purchase Amount:%.2f",purchase)
print("Discount:%.2f",discount)
print("Amount after Discount:%.2f",amount_after_discount)
print("GST:%.2f",gst)
print("Final Bill:%.2f",final_bill)


