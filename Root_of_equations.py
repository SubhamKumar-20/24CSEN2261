import cmath  # For handling complex numbers

a = int(input("Give a: "))
b = int(input("Give b: "))
c = int(input("Give c: "))

d = b**2 - 4*a*c  # Discriminant
r1 = cmath.sqrt(d)  # Correct handling of square root

r2 = (-b + r1) / (2 * a)  # Corrected division
r3 = (-b - r1) / (2 * a)

print(f"Roots: ({r2}, {r3})")

INPUT:-
Give a: 1
Give b: -3
Give c: 2

OUTPUT:-
Roots: (2.0, 1.0)
