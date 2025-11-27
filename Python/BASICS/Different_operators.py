a = input("Enter first number:")
b = input("Enter second number:")
print("Arithmetic Operations:")
sum = int(a) + int(b)
sub = int(a) - int(b)
mul = int(a) * int(b)
div = int(a) / int(b)
remainder = int(a) % int(b)
exp= int(a) ** int(b)
print("The exponentiation is:", exp)
print("The remainder is:", remainder)
print("The substraction is:", sub)
print("The sum of the two numbers is:", sum)
print("The multiplication is:", mul)
print("The division is:", div)


print("Relational Operations:")
print("Is a equal to b?", a == b)
print("Is a not equal to b?", a != b)
print("Is a greater than b?", a > b)
print("Is a less than b?", a < b)
print("Is a greater than or equal to b?", a >= b)
print("Is a less than or equal to b?", a <= b)

print("Logical Operations:")
x = True
y = False
print("The logical AND of x and y is:", x and y)
print("The logical OR of x and y is:", x or y)
print("The logical NOT of x is:", not x)
print("The logical NOT of y is:", not y)

print("Bitwise Operations:")
print("The bitwise AND of a and b is:", int(a) & int(b))
print("The bitwise OR of a and b is:", int(a) | int(b))
print("The bitwise XOR of a and b is:", int(a) ^ int(b))
print("The bitwise NOT of a is:", ~int(a))
print("The left shift of a by 2 is:", int(a) << 2)
print("The right shift of a by 2 is:", int(a) >> 2)

print("Assignment Operations:")
c = int(a)
c += int(b)  # c = c + b
print("After addition, c is:", c)
c -= int(b)  # c = c - b
print("After subtraction, c is:", c)
c *= int(b)  # c = c * b
print("After multiplication, c is:", c)
c /= int(b)  # c = c / b
print("After division, c is:", c)
c %= int(b)  # c = c % b
print("After modulus, c is:", c)

print("Membership Operations:")
list1 = [1, 2, 3, 4, 5]
print("Is 3 in list1?", 3 in list1)
print("Is 6 not in list1?", 6 not in list1)

print("Identity Operations:")
a = [1, 2, 3]
b = a
c = a[:]
print("Is a identical to b?", a is b)
print("Is a identical to c?", a is c)
print("Is a not identical to c?", a is not c)
print("Is b not identical to c?", b is not c)
print("Is a identical to c?", a == c)
print("Is b identical to c?", b == c)
print("Is a not identical to c?", a != c)

print("Is b not identical to c?", b != c)
