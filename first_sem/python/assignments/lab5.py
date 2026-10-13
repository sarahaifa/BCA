def get_price(item):
    menu = {
        "pizza": 250,
        "burger": 150,
        "pasta": 180,
        "coffee": 80,
        "juice": 100
    }

    return menu.get(item.lower(), 0)


def item_cost(item, qty):
    price = get_price(item)
    return price * qty


def calculate_gst(amount, rate=0.05):
    return amount * rate


def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent / 100

    discounted_amount = subtotal - discount

    gst = calculate_gst(discounted_amount)

    final_total = discounted_amount + gst

    return discount, gst, final_total


def split_bill(total, people):
    each_person = int(total // people)
    leftover = int(total % people)

    return each_person, leftover


# Main program

print("----- RESTAURANT MENU -----")
print("Pizza  - Rs.250")
print("Burger - Rs.150")
print("Pasta  - Rs.180")
print("Coffee - Rs.80")
print("Juice  - Rs.100")

item1 = input("Enter first item: ")
qty1 = int(input("Enter quantity: "))

item2 = input("Enter second item: ")
qty2 = int(input("Enter quantity: "))

cost1 = item_cost(item1, qty1)
cost2 = item_cost(item2, qty2)

subtotal = cost1 + cost2

discount_percent = float(input("Enter discount percentage: "))

discount, gst, final_total = generate_bill(
    subtotal, discount_percent
)

people = int(input("Enter number of people: "))

each_person, leftover = split_bill(final_total, people)

print("\n----- BILL -----")
print("Subtotal        :", subtotal)
print("Discount        :", discount)
print("GST             :", gst)
print("Final Total     :", final_total)
print("Each person pays:", each_person)
print("Rupees left over:", leftover)