#simple calculator program in python

print("Enter the numbers")
a = float(input("enter 1st number: "))
b = float(input("enter 2nd number: "))

print("Enter Operation")
print("1.Addition 2.Substration 3.Division 4.Multiplication 5.reminder")
ch = int(input("enter choice(1/2/3/4/5): "))

if ch in (1, 2, 3, 4, 5):           #like cwitch case
  if ch == 1:
    print("Addition is: ", a+b)
  elif ch == 2:
    print("Substration is: ", a-b)
  elif ch == 3:
    print("Multiplication is: ", a*b)
  elif ch == 4:
    print("Division is: ", a/b)
  elif ch == 5:
    print("Reminder is: ", a%b)

else:
  print("Invalid Input")
