print("tickect price system")
age=int(input("enter age"))
weekday=input("enter the weekday")
weekend=input("enter the weekend")
ticketprice=250
weekday="monday","tuesday","wednesday","thursday","friday"
weekend='saturday','sunday'
showtime=input("enter time")
if weekend=="weekend":
        if age<13:
                ticketprice=250-125+62.5
                print("child ticket price:",ticketprice)
        elif age>=13 and age<=59:
                ticketprice=250-125+62.5
                print(" adult ticket price:",ticketprice)
        else :
                ticketprice=250-125+62.5
                print(" child ticket price:",ticketprice)
else:               
        if age<13:
                ticketprice=250-125+62.5
                print("child ticket price:",ticketprice)
        elif age>=13 and age <=59:
                print(" adult ticket price:",ticketprice)
        else:
                ticketprice=250-25
                print("child ticket price:",ticketprice)        
if showtime=="morning":
        if age<13:
                ticketprice=250-125+62.5
                print("child ticket price:",ticketprice)
        elif age>=13 and age <=59:
                print(" adult ticket price:",ticketprice)
        else:
                ticketprice=250-25
                print("child ticket price:",ticketprice)
if showtime=="afternoon":
        if age<13:
                ticketprice=ticketprice+(0.3/100)
                print("child ticket price:",ticketprice)
        elif age>=13 and age <=59:
                print(" adult ticket price:",ticketprice)
        else:
                ticketprice=250-25
                print("child ticket price:",ticketprice)        
if showtime=="evening":
        if age<13:
                ticketprice=ticketprice+(0.3)
                print("child ticket price:",ticketprice)
        elif age>=13 and age <=59:
                
                print(" adult ticket price:",ticketprice)
        else:
                ticketprice=250-25
                print("child ticket price:",ticketprice)

                

               
    
