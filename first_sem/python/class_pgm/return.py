#function to read std data
rollnumber=0
name=' '
python=0
c=0
dbms=0
total=0
average=0
percentage=0
def read_data():
    global python,c,dbms
    name=input("enter name\n")
    rollnumber=int(input("enter rollnumber\n"))
    python=int(input("enter python marks\n"))
    c=int(input("enter c marks\n"))
    dbms=int(input("enter dbms marks\n"))
    return rollnumber,name,python,c,dbms
    

def get_total(): 
    global total
    total=python+dbms+c
    return total
    print("total:",total)
    

def get_average():
    global average
    average=total/3
    return average
    print("average marks:",average)

def get_percentage():
    global percentage
    percentage=total/300*100
    return percentage
    print("percentage:",percentage)

def findgrade():
    global findgrade
    if percentage<60:
        print("second class\n")
    elif percentage>=60:
        print("first class\n")
    elif percentage>85:
        print("distinction\n")

def displayresult():
    global displayresult
    print("total marks:",total)
    print("average marks:",average)
    print("percentage:",percentage)
for number in range(1,4):
    a,b,c,d,e=read_data()
    total=get_total()
    average=get_average()
    percentage=get_percentage()
    findgrade()
    displayresult()




   
