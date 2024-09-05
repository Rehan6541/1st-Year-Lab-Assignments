"""
PROBLEM STATEMENT :Write a Python program to check if a triangle is equilateral, isosceles or scalene.

Expected Output:

Input lengths of the triangle sides:                                    
x: 6                                                                    
y: 8                                                                    
z: 12                                                                   
Scalene triangle 
"""

print("Input lengths of the triangle sides: ")

x = int(input("x: "))

y = int(input("y: "))

z = int(input("z: "))



# If all sides are equal
if x == y == z:
    print("Equilateral triangle")
# If at least two sides are equal
elif x == y or y == z or z == x:
    print("Isosceles triangle")
# If all sides have different lengths
else:
    print("Scalene triangle") 

