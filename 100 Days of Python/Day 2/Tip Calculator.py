print("Welcome to the Tip Calculator")
bill=float(input("What was the total bill? $"))
tip=float(input("How much tip would you like to give? 10, 12 or 15? "))
person=float(input("How many people to split the bill? "))
tt=tip/100
split=((bill*tt)+bill)/person
print(f"Each person should pay ${split}")
