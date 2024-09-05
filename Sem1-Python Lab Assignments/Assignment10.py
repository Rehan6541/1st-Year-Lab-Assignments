"""
PROBLEM STATEMENT :Write a Python program to create a class representing a Circle. Include methods to calculate its area and perimeter.
"""

import math

class Circle:
   
    def __init__(self, radius):
        self.radius = radius
    
    def calculate_circle_area(self):
        return math.pi * self.radius**2
    
    def calculate_circle_perimeter(self):
        return 2 * math.pi * self.radius


radius = float(input("Input the radius of the circle: "))

circle = Circle(radius)
area = circle.calculate_circle_area()
perimeter = circle.calculate_circle_perimeter()

print("Area of the circle:", area)
print("Perimeter of the circle:", perimeter) 