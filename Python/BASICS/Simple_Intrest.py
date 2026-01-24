p = float(input("Enter the principal amount: "))
r = float(input("Enter the rate of interest: "))
t = float(input("Enter the time in years: "))

si = (p * r * t) / 100
ci = p * ((1 + r / 100) ** t - 1)

print(f"The Simple Interest is: {si}")
print(f"The Compound Interest is: {ci}")

print(f"The Total amount after Simple Interest is: {p + si}")
