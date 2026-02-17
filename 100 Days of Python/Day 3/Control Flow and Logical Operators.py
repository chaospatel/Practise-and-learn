print("Welcome to the rollercoaster!")
height = float(input("What's the height? "))
if height >= 120:
    print("You can ride the rollercoaster!")
else:
    print("Sorry you have to grow taller before you can ride.")
#############################################################
a=int(input("Enter a number: "))
if a%2==0:
    print("it is a even number")
else:
    print("it is a odd number")
#############################################################
age=int(input("Enter a age: "))
if age<12:
    print("$5")
elif age>=12 and age<18:
    print("$7")
elif age>=18:
    print("$10")
##############################################################
weight = 85
height = 1.85
bmi = weight / (height ** 2)
if bmi<18.5:
    print("underweight")
elif bmi>=18.5:
    if bmi<25:
        print("normal weight")
    else:
        print("overweight")
###############################################################
print("Welcome to Python Pizza Deliveries")
size=(input("Enter a size (S, M or L): "))
pepp=input("Do you want pepperoni? (Y or N): ")
ec=input("Do you want extra cheese? (Y or N): ")
bill=0
if size == "S"or"s":
    bill+=5
elif size == "M"or"m":
    bill+=7
elif size == "L"or"l":
    bill+=10
if pepp=="Y"or"y":
    bill+=5
elif pepp=="N"or"n":
    print(bill)
if ec=="Y"or"y":
    bill+=10
elif ec=="N"or"n":
    print(bill)
print(f"Your final bill is ${bill}")
###############################################################