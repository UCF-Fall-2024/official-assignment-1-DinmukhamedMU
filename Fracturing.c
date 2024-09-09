#include <stdio.h>
#include <math.h>  // for sqrt and pow functions

#define PI 3.14159  

double ask_for_user_input(const char* prompt);
double calculate_distance();
double calculate_perimeter(double distance);
double calculate_area(double distance);
double calculate_width(double distance);
double calculate_height(double distance);

int main() {
    // Calculate distance between two points
    double distance = calculate_distance();
    
    // Calculate and display the perimeter, area, width, and height of the circle
    calculate_perimeter(distance);
    calculate_area(distance);
    calculate_width(distance);
    calculate_height(distance);

    return 0; 
}

// Function to ask for user input with a custom prompt
double ask_for_user_input(const char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}
double calculate_distance() {
    double x1, y1, x2, y2, distance;

    x1 = ask_for_user_input("Enter x1: ");
    y1 = ask_for_user_input("Enter y1: ");
    x2 = ask_for_user_input("Enter x2: ");
    y2 = ask_for_user_input("Enter y2: ");

    // Calculate distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is: %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter (circumference) of a circle
double calculate_perimeter(double distance) {
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city (circle) is: %.2f\n", perimeter);

    return perimeter;
}

// Function to calculate the area of a circle
double calculate_area(double distance) {
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);

    printf("The area of the city (circle) is: %.2f\n", area);

    return area;
}

// Function to calculate the width (diameter) of a circle
double calculate_width(double distance) {
    // Since it's a circle, the width is the same as the diameter
    printf("The width (diameter) of the city is: %.2f\n", distance);

    return distance;
}

// Function to calculate the height (diameter) of a circle
double calculate_height(double distance) {
    // Since it's a circle, the height is the same as the diameter
    printf("The height (diameter) of the city is: %.2f\n", distance);

    return distance;
}
