import math


def q1():
    # 1.Program to assign values to three variables at the time of declaration
    # and print them on the computer screen
    # Assigning values
    name = "yassen"
    age = 25
    city = "pakistaa"

    print("Name:", name)
    print("Age:", age)
    print("City:", city)


# 2.Program to print a message on the screen
def q2():
    print("pythoo language is a powerful programming language.")


# 3.Program to assign two variables, interchange their values and print the result
def q3():
# Assigning values
    a = 10
    b = 20

    print("Before interchange:")
    print("a =", a)
    print("b =", b)


    a, b = b, a

    print("\nAfter interchange:")
    print("a =", a)
    print("b =", b)

def q4():
    # 4.Program to calculate number of months from years

    # Assigning a numeric value to the variable 'year'
    year = 5

    months = year * 12

    print("Years:", year)
    print("Number of months:", months)

def q5():
    # 5.Program to get two numbers and calculate their sum and product

    # Getting input from the user
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    # Calculating sum and product
    sum_result = num1 + num2
    product_result = num1 * num2

    print("\nSum of the numbers:", sum_result)
    print("Product of the numbers:", product_result)

def q6():
    # 6.Program to calculate age in months

    # Getting age in years from the user
    age_years = int(input("Enter your age in years: "))

    age_months = age_years * 12
    print("Your age in months is:", age_months)

def q7():
    # 7.Program by Yassen
    # Program to get Roll No. and marks of three subjects, then calculate Total and Average

    # Getting input from user
    roll_no = input("Enter Roll No.: ")
    pf = float(input("Enter marks in Programming Fundamentals: "))
    ic = float(input("Enter marks in Introduction to Computing: "))
    cg = float(input("Enter marks in Computer Graphics: "))

    # Calculating total and average
    total = pf + ic + cg
    average = total / 3

    print("\nRoll No.:", roll_no)
    print("Total Marks:", total, "/ 300")
    print("Average Marks:", average)

def q8():
    # 8.Program by Yassen
    # Program to convert temperature from Fahrenheit to Celsius

    # Getting temperature in Fahrenheit
    fahrenheit = float(input("Enter temperature in Fahrenheit: "))

    # Converting to Celsius
    celsius = (5 / 9) * (fahrenheit - 32)

    print("Temperature in Celsius:", celsius)

def q9():
    # 9.Program by Yassen
    # Program to find the maximum number from four numbers

    # Getting four numbers from user
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    num3 = float(input("Enter third number: "))
    num4 = float(input("Enter fourth number: "))

    # Finding the maximum
    maximum = max(num1, num2, num3, num4)

    # Displaying the result
    print("The maximum number is:", maximum)

def q10():
    # 10.Program by Yassen
    # Program to convert miles into kilometers

    # Assigning miles
    miles = 2.5

    # Conversion formula
    kilometers = miles * 1.609

    print(miles, "miles is equal to", kilometers, "kilometers.")

def q11():
    # 11.Program by Yassen
    # Program to declare and initialize two integer variables,
    # calculate their average, and print the result on the screen

    # Declaring and initializing variables
    num1 = 15
    num2 = 25

    # Calculating the average
    average = (num1 + num2) / 2
    print("The average of", num1, "and", num2, "is:", average)

def q12():
    # 12.Program by Yassen
    # Program to find the volume of a cylinder using a constant value for π

    # Declaring the constant value of π
    PI = 3.1417    # constant value of pi

    # Getting input from the user
    radius = float(input("Enter the radius of the cylinder: "))
    height = float(input("Enter the height of the cylinder: "))

    # Calculating the volume of the cylinder
    # Formula: Volume = π * R^2 * H
    volume = PI * (radius ** 2) * height

    # Displaying the result
    print("The volume of the cylinder is:", volume)

def q13():
    # 13.Program by Yassen
    # Program to convert millimetres into inches

    # Getting millimetres from the user
    millimeters = float(input("Enter length in millimetres: "))

    # Conversion (1 inch = 25.4 mm)
    inches = millimeters / 25.4

    # Displaying the result
    print(millimeters, "millimetres is equal to", inches, "inches.")

def q14():
    # 14.Program by Yassen
    # Program to interchange the values of two variables

    # Assigning initial values
    a = 5
    b = 10

    print("Before interchange:")
    print("a =", a)
    print("b =", b)

    # Interchanging values
    a, b = b, a

    print("\nAfter interchange:")
    print("a =", a)
    print("b =", b)

def q15():
    # 15.Program by Yassen
    # Program to assign value 3 to a, b, and c using multiple assignment
    # and calculate their product

    # Multiple assignment
    a = b = c = 3

    # Calculating product
    product = a * b * c

    # Displaying the result
    print("The product of", a, ",", b, "and", c, "is:", product)

def q16():
    # 16.Program by Yassen
    # Program to separate the integral and fractional parts of a real number

    # Given real number
    num = 15.58971

    # Separating parts
    integral_part = int(num)
    fractional_part = num - integral_part

    # Displaying the results
    print("Original number:", num)
    print("Integral part:", integral_part)
    print("Fractional part:", fractional_part)

def q17():
    # 17.Program by Yassen
    # Program to compute the value of S using the formula S = vi*t + (1/2)*a*t^2

    # Assigning values
    vi = float(input("Enter initial velocity (vi): "))
    t = float(input("Enter time (t): "))
    a = float(input("Enter acceleration (a): "))

    # Calculating S
    S = vi * t + (1/2) * a * (t ** 2)

    # Displaying the result
    print("The value of S is:", S)

def q19():
    # 19.Program by Yassen
    # Program to assign your age in a variable and find the age in months and days

    # Assigning age
    age_years = 20

    # Calculating months and days
    age_months = age_years * 12
    age_days = age_years * 365

    # Displaying results
    print("Age in years:", age_years)
    print("Age in months:", age_months)
    print("Age in days:", age_days)

def q20():
    # 20.Program by Yassen
    # Program to print output using escape sequences

    print("C:\\Windows>")
    print("'P'\t'A'\t'K'")
    print("\"Pakistan\"")

def q21():
    # 21.Program by Yassen
    # Program to print pattern using '\n' escape sequence (without loop)
    print("XXXXX\nXXXX\nXXX\nXX\nX")

def q22():
    # 22.Program by Yassen
    # Program to input and display student data

    # Getting input from user
    name = input("Enter student's name: ")
    age = int(input("Enter student's age: "))
    height = float(input("Enter student's height (in cm): "))
    gender = input("Enter student's gender: ")

    # Displaying student information
    print("\n--- Student Information ---")
    print("Name:", name)
    print("Age:", age)
    print("Height:", height, "cm")
    print("Gender:", gender)

def q23():
    # 23.Program by Yassen
    # Program to calculate area and circumference of a circle

    # Getting input
    radius = float(input("Enter the radius of the circle: "))

    # Constant for π
    PI = 3.1417

    # Calculations
    area = PI * (radius ** 2)
    circumference = 2 * PI * radius

    # Displaying the results
    print("Area of the circle:", area)
    print("Circumference of the circle:", circumference)

def q24():
    # 24.Program by Yassen
    # Program to calculate total and average marks of five subjects

    # Getting marks input
    sub1 = float(input("Enter marks for Subject 1: "))
    sub2 = float(input("Enter marks for Subject 2: "))
    sub3 = float(input("Enter marks for Subject 3: "))
    sub4 = float(input("Enter marks for Subject 4: "))
    sub5 = float(input("Enter marks for Subject 5: "))

    # Calculating total and average
    total = sub1 + sub2 + sub3 + sub4 + sub5
    average = total / 5

    # Displaying results
    print("\nTotal Marks:", total, "/ 500")
    print("Average Marks:", average)

def q25():
    # 25.Program by Yassen
    # Program to calculate the area of a triangle using Heron's formula

    # Getting input for the three sides
    a = float(input("Enter side a: "))
    b = float(input("Enter side b: "))
    c = float(input("Enter side c: "))

    # Calculating semi-perimeter
    s = (a + b + c) / 2

    # Calculating area using Heron's formula
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))

    # Displaying the result
    print("The area of the triangle is:", area)

def q26():
    # 26.Program by Yassen
    # Program to convert rupees into dollars

    # Assigning values
    rupees = 12000
    dollar_rate = 60

    # Conversion
    dollars = rupees / dollar_rate

    # Displaying the result
    print(rupees, "Rupees is equal to", dollars, "Dollars.")

def q27():
    # 27.Program by Yassen
    # Program to convert time (hours, minutes, seconds) into total seconds

    # Getting input from user
    hours = int(input("Enter hours: "))
    minutes = int(input("Enter minutes: "))
    seconds = int(input("Enter seconds: "))

    # Conversion to total seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds

    # Displaying result
    print("Total time in seconds:", total_seconds)

def q28():
    # 28.Program by Yassen
    # Program to compute the value of 'disc' using formula disc = b² - 4ac

    # Getting input values
    a = float(input("Enter value of a: "))
    b = float(input("Enter value of b: "))
    c = float(input("Enter value of c: "))

    # Calculating disc
    disc = (b ** 2) - (4 * a * c)

    # Displaying the result
    print("The value of disc is:", disc)

def q29():
    # 29.Program by Yassen
    # Program to print a message if n is greater than 100

    # Getting input
    n = int(input("Enter a number: "))

    # Checking condition
    if n > 100:
        print("The value of n is greater than 100.")

def q30():
    # 30.Program by Yassen
    # Program to test whether a number is odd or even

    # Getting input from user
    num = int(input("Enter an integer: "))

    # Checking condition
    if num % 2 == 0:
        print(num, "is an Even number.")
    else:
        print(num, "is an Odd number.")


print("this for texting in repo by yasin")
print("this for texting in repo by yasin")
print("this for texting in repo by yasin")
