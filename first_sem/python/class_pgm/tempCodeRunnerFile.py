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
    name=input("enter name\n")
    rollnumber=int(input("enter rollnumber\n"))
    python=int(input("enter python marks\n"))
    c=int(input("enter c marks\n"))
    dbms=int(input("enter dbms marks\n"))

def get_total():    
    total=python+dbms+c
    

def get_average():
    average=total/3

def get_percentage():
    percentage=total/300*100

def findgrade():
    if percentage<60:
        print("second class\n")
    elif percentage>=60:
        print("first class\n")
    elif percentage>85:
        print("distinction\n")

def displayresult():
    print("total marks:",total)
    print("average marks:",average)
    print("percentage:",percentage)
    
read_data()
get_total()




   
