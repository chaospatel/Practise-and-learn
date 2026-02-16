#Subscripting
print("Hello"[0])
print("Hello"[4])
print("Hello"[-1])
#string
print("123"+"456")
#Integer = Whole Number
print(123+456)
#Large Numbers
print(123_456_789)
#Float= Floating Point Number
print(12.2653)
#Boolean
print(True)
print(False)
#len() doesn't work with integer
print(type("Hello"))
print(type(True))
print(type(123.254))
print(type(147))
#datatype conversion
print(int("159")+int("357"))
###
print("Number of letters in your name : "+str(len(input("What is the name? "))))
#Methamatical Operators
print("My age"+str(12))
print(123+456)
print(123-456)
print(5/3)
print(5//3)
print(5%3)
print(45*23)
print(2**3)
#PEMDAS - Parentheses, Exponent, Multiplication, Division,Addition, Substraction
print(3*3+3/3-3)
#BMI Calculator
height = 1.65
weight = 84
bmi =(weight/(height**2))
print(bmi)
#Rounding up floating values
print(int(bmi))
print(round(bmi))
print(round(bmi,2))
#Assignment Operator
a=12
a+=1
print(a)
#f-string
print(f"Your score is {a} and your bmi is {bmi}")
