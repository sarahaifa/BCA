category=input("enter category(commercial,non-commercial):").lower()
units=float(input(" enter consumed units:"))
bill=0
if category =='commercial':
    amount1=10
    amount2=12
    amount3=15
else:
    amount1=5
    amount2=6
    amount3=8 

remaining = units
    
if remaining <= 100:
    bill=remaining*amount1
    remaining=0
    
else:
    bill=100*amount1
    remaining=remaining - 100
    
    if remaining <= 300:
        bill=bill+remaining*amount2
        remaining =0
    else:
        bill=bill+300*amount2
        remaining=remaining-300
        bill=bill+remaining*amount3

        print("category:",category)
        print("consumed units:",units)
        print("final bill:",bill)
    

    
