x = float(input("Enter a number: "))
y = float(input("Enter another number: "))
z = float(input("Enter a third number: "))

if x <= y and x <= z:
    print("Smallest number is:", x)
elif y <= x and y <= z:
    print("Smallest number is:", y)
else:
    print("Smallest number is:", z)
