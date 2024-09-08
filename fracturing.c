#include <stdio.h>
#include <math.h>

// Function to ask for user input
double askForUserInput()
{
    double value = 0;
    scanf("%lf", &value);
    return value;
}

// Function to calculate width
double calculateWidth()
{
    // Point 1 values
    printf("Enter the x value for Point 1: \n");
    double x1 = askForUserInput();

    // Point 2 values
    printf("Enter the x value for Point 2:\n");
    double x2 = askForUserInput();

    printf("Point 1 entered: x1 = %.3lf \n", x1);
    printf("Point 2 entered: x2 = %.3lf \n", x2);

    // Calculate Width
    double width = x2 - x1;
    printf("The width of the city encompassed by your request is %.3lf \n\n", width);

    return 1;
}

// Function to calculate height
double calculateHeight()
{
    // Point 1 values
    printf("Enter the y value for Point 1:\n");
    double y1 = askForUserInput();

    // Point 2 values
    printf("Enter the y value for Point 2:\n");
    double y2 = askForUserInput();

    printf("Point 1 entered: y1 = %.3lf \n", y1);
    printf("Point 2 entered: y2 = %.3lf \n", y2);

    // Calculate height
    double height = y2 - y1;
    printf("The height of the city encompassed by your request is %.3lf \n\n", height);

    return 1;
}

// Function to calculate distance
double calculateDistance()
{
    // Calculating Distance
    double distance = sqrt(pow(calculateWidth(), 2) + pow(calculateHeight(), 2));
    printf("The distance between the two points is %.3lf \n\n", distance);

    return distance;
}

// Function to calculate area
double calculateArea()
{
	//calculate area
    double area = calculateWidth() * calculateHeight();
    printf("The area of the city encompassed by your request is %.3lf \n\n", area);

    return 3;
}

// Function to calculate perimeter
double calculatePerimeter()
{
    double perimeter = 2 * (calculateWidth() + calculateHeight());
    printf("The perimeter of the city encompassed by your request is %.3lf \n\n", perimeter);

    return 3;
}

// Main function
int main(int argc, char** argv)
{
    calculateWidth();
    calculateHeight();
    calculateDistance();
    calculateArea();
    calculatePerimeter();

    return 1;
}
