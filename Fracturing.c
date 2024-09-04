#include <stdio.h>
#include <math.h>

#define PI 3.14159

double ask_for_user_input();
double calculate_distance();
double calculate_perimeter();
double calculate_area();
double calculate_width();
double calculate_height();

int main(int argc, char **argv) {
    // Call the necessary functions to demonstrate their working
    calculate_distance();
    calculate_perimeter();
    calculate_area();
    calculate_width();
    calculate_height();

    return 0; // Indicating successful execution
}

double ask_for_user_input() {
    double value;
    scanf("%lf", &value);
    return value;
}

double calculate_distance() {
    double x1, y1, x2, y2, distance;

    printf("Enter x1: ");
    x1 = ask_for_user_input();

    printf("Enter x2: ");
    x2 = ask_for_user_input();
 
        printf("Enter y1: ");
    y1 = ask_for_user_input();

    printf("Enter y2: ");
    y2 = ask_for_user_input();

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    // distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculate_perimeter() {
    double distance = calculate_distance();

    // perimeter of the square formed by distance
    double perimeter = 4 * distance;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return perimeter;
}

double calculate_area() {
    double distance = calculate_distance();

    // area of the square formed by distance
    double area = pow(distance, 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return area;
}

double calculate_width() {
    double x1, x2, width;

    printf("Enter x1: ");
    x1 = ask_for_user_input();

    printf("Enter x2: ");
    x2 = ask_for_user_input();

    // width is the horizontal distance between x1 and x2
    width = fabs(x2 - x1);

    printf("The width of the city encompassed by your request is %.2f\n", width);

    return width;
}

double calculate_height() {
    double y1, y2, height;

    printf("Enter y1: ");
    y1 = ask_for_user_input();

    printf("Enter y2: ");
    y2 = ask_for_user_input();

    // height is the vertical distance between y1 and y2
    height = fabs(y2 - y1);

    printf("The height of the city encompassed by your request is %.2f\n", height);

    return height;
}
