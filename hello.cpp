#include <iostream>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

void q1() {
    string name = "yassen";
    int age = 25;
    string city = "pakistaa";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}

void q2() {
    cout << "pythoo language is a powerful programming language." << endl;
}

void q3() {
    int a = 10;
    int b = 20;

    cout << "Before interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "\nAfter interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void q4() {
    int year = 5;
    int months = year * 12;
    cout << "Years: " << year << endl;
    cout << "Number of months: " << months << endl;
}

void q5() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nSum of the numbers: " << (num1 + num2) << endl;
    cout << "Product of the numbers: " << (num1 * num2) << endl;
}

void q6() {
    int age_years;
    cout << "Enter your age in years: ";
    cin >> age_years;
    cout << "Your age in months is: " << (age_years * 12) << endl;
}

void q7() {
    string roll_no;
    double pf, ic, cg;
    cout << "Enter Roll No.: ";
    cin >> ws;
    getline(cin, roll_no);
    cout << "Enter marks in Programming Fundamentals: ";
    cin >> pf;
    cout << "Enter marks in Introduction to Computing: ";
    cin >> ic;
    cout << "Enter marks in Computer Graphics: ";
    cin >> cg;

    double total = pf + ic + cg;
    double average = total / 3.0;

    cout << "\nRoll No.: " << roll_no << endl;
    cout << "Total Marks: " << total << " / 300" << endl;
    cout << "Average Marks: " << average << endl;
}

void q8() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    double celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    cout << "Temperature in Celsius: " << celsius << endl;
}

void q9() {
    double n1, n2, n3, n4;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter third number: ";
    cin >> n3;
    cout << "Enter fourth number: ";
    cin >> n4;

    double maximum = max(max(n1, n2), max(n3, n4));
    cout << "The maximum number is: " << maximum << endl;
}

void q10() {
    double miles = 2.5;
    double kilometers = miles * 1.609;
    cout << miles << " miles is equal to " << kilometers << " kilometers." << endl;
}

void q11() {
    int num1 = 15, num2 = 25;
    double average = (num1 + num2) / 2.0;
    cout << "The average of " << num1 << " and " << num2 << " is: " << average << endl;
}

void q12() {
    const double PI = 3.1417;
    double radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    double volume = PI * radius * radius * height;
    cout << "The volume of the cylinder is: " << volume << endl;
}

void q13() {
    double millimeters;
    cout << "Enter length in millimetres: ";
    cin >> millimeters;
    double inches = millimeters / 25.4;
    cout << millimeters << " millimetres is equal to " << inches << " inches." << endl;
}

void q14() {
    int a = 5, b = 10;
    cout << "Before interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "\nAfter interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void q15() {
    int a = 3, b = 3, c = 3;
    int product = a * b * c;
    cout << "The product of " << a << ", " << b << " and " << c << " is: " << product << endl;
}

void q16() {
    double num = 15.58971;
    int integral_part = static_cast<int>(num);
    double fractional_part = num - integral_part;
    cout << "Original number: " << num << endl;
    cout << "Integral part: " << integral_part << endl;
    cout << "Fractional part: " << fractional_part << endl;
}

void q17() {
    double vi, t, a;
    cout << "Enter initial velocity (vi): ";
    cin >> vi;
    cout << "Enter time (t): ";
    cin >> t;
    cout << "Enter acceleration (a): ";
    cin >> a;
    double S = vi * t + 0.5 * a * t * t;
    cout << "The value of S is: " << S << endl;
}



void q19() {
    int age_years = 20;
    int age_months = age_years * 12;
    int age_days = age_years * 365;
    cout << "Age in years: " << age_years << endl;
    cout << "Age in months: " << age_months << endl;
    cout << "Age in days: " << age_days << endl;
}

void q20() {
    cout << "C:\\Windows>" << endl;
    cout << "'P'\t'A'\t'K'" << endl;
    cout << "\"Pakistan\"" << endl;
}

void q21() {
    cout << "XXXXX\nXXXX\nXXX\nXX\nX" << endl;
}

void q22() {
    string name, gender;
    int age;
    double height;
    cout << "Enter student's name: ";
    cin >> ws;
    getline(cin, name);
    cout << "Enter student's age: ";
    cin >> age;
    cout << "Enter student's height (in cm): ";
    cin >> height;
    cout << "Enter student's gender: ";
    cin >> ws;
    getline(cin, gender);

    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Gender: " << gender << endl;
}

void q23() {
    double radius;
    const double PI = 3.1417;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
}

void q24() {
    double sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    cout << "Enter marks for Subject 3: ";
    cin >> sub3;
    cout << "Enter marks for Subject 4: ";
    cin >> sub4;
    cout << "Enter marks for Subject 5: ";
    cin >> sub5;
    double total = sub1 + sub2 + sub3 + sub4 + sub5;
    double average = total / 5.0;
    cout << "\nTotal Marks: " << total << " / 500" << endl;
    cout << "Average Marks: " << average << endl;
}

void q25() {
    double a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is: " << area << endl;
}

void q26() {
    double rupees = 12000;
    double dollar_rate = 60;
    double dollars = rupees / dollar_rate;
    cout << rupees << " Rupees is equal to " << dollars << " Dollars." << endl;
}

void q27() {
    int hours, minutes, seconds;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
    int total_seconds = (hours * 3600) + (minutes * 60) + seconds;
    cout << "Total time in seconds: " << total_seconds << endl;
}

void q28() {
    double a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    double disc = (b * b) - (4 * a * c);
    cout << "The value of disc is: " << disc << endl;
}

void q29() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 100) {
        cout << "The value of n is greater than 100." << endl;
    }
}

void q30() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is an Even number." << endl;
    } else {
        cout << num << " is an Odd number." << endl;
    }
}

int main() {
    cout << "call any function: " << endl;
    

    return 0;
}