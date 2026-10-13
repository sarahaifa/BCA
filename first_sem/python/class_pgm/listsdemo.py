marks=['sachin',70,85,90,76,88] #declares an list to store mrks of 'sachin'
my_mark=[]
sum=0
for i in range(5):
    marks=int(input("enter the marks:"))
    my_mark.append(marks)
    print("the list are:")
    for i in range(len(my_mark)):
        print(i+1,"mark is",my_mark[i])
        for i in range(len(my_mark)):
            sum+=my_mark[i]
            print(sum)


