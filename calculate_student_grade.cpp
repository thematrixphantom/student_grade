// calculate_student_grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//calculate the student grade with given homeworks, quizzes, and test grades
// Determine the letter grade from the input information

#include <iostream>


int main()
{
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;
    double h;
    double total_points;
    double average1;
    double average2;
    double average3;
    double sum1 = 0;
    double sum2 = 0;
    double sum3 = 0;
    double hw;
    double test;
    double quiz;
    int i, j, k;
    int w, x, y;
    double z;

    // Ask the user how many homework grades there 

    std::cout << "How many homework grades do you have ?" << std::endl;
    std::cin >> x;

    //Calculate all the sum,average and percentage of the homework grade

    for (i = 1; i <= x; i++)
    {
        std::cout << "Please enter homework  " << i << "  grade:" << std::endl;

        // Allow the user to input homework grades 

        std::cin >> hw;

        // Calculate the sum of all homework averages 

        sum1 += hw;

    }

    // Display the message of all the sum of the homework grades

    std::cout << "The sum of all homework grades are: " << sum1 << std::endl;

    // Calculate the average of all homework grades

    average1 = sum1 / x;

    // Display the message of the average of all homework grades

    std::cout << "The average of all the homework grades are: " << average1 << std::endl;

    // Calculate the total points for homework grades by getting the percentage 

    std::cout << "What percentage are homework grades worth ?" << std::endl;

    std::cin >> z;

    // Multiply the average by the percentage 

    a = z / 100;

    // Display the message of the percentage 

    std::cout << "The conversion of the percentage to a decimal to calculate all homework grades is: " << a << std::endl;

    // Multiply the conversion of the pecentage to decimal to all homework averages

    b = average1 * a;

    // Display the message of the points earned for the homework points 

    std::cout << "The total points for all homework grades are  " << b << std::endl;

    // Ask the user for all quiz grades

    std::cout << "How many quiz grades do you have ?" << std::endl;

    std::cin >> w;

    // Create a for loop to get all the quiz grades

    for (j = 1; j <= w; j++)
    {
        std::cout << "Please enter quiz " << j << "  grade: " << std::endl;

        // Allow the the user to input quiz grades 

        std::cin >> quiz;

        // calculate the sum of all quiz grades

        sum2 += quiz;

    }

    // Display a message that shows the sum of all quiz grades

    std::cout << "The sum of all quiz grades are: " << sum2 << std::endl;

    //calculate the average 

    average2 = sum2 / w;

    // Display a message that shows the average of all quiz grades

    std::cout << "The average of all quiz grades are:  " << average2 << std::endl;

    // Ask the user what is the percentage for quiz grades in the class

    std::cout << "What is the perecentage for quiz grades in the class ?" << std::endl;

    // Allow the user to input the information 

    std::cin >> c;

    // Convert the percentage to a decimal

    d = c / 100;

    // Display a message that show the decimal version of the percentage

    std::cout << "The conversion of the percentage to a decimal to calculate all quiz grades is: " << d << std::endl;

    // Multiply the conversion of the percentage to decimal to all quiz grades

    e = average2 * d;

    std::cout << "The points earned for all quiz grades are  " << e << std::endl;

    // Ask the user for test grades 

    std::cout << "How many test grades do you have ?" << std::endl;
    std::cin >> y;

    // create a for loop for the given number of test grades

    for (k = 1; k <= y; k++)
    {
        std::cout << "Please enter test  " << k << "  grade: " << std::endl;

        std::cin >> test;

        // calculate all the sum of the test

        sum3 += test;

    }

    // Display a message that shows the user the sum of all the test

    std::cout << "The sum of all the test are: " << sum3 << std::endl;

    // calcuate the average 

    average3 = sum3 / y;

    // Display the average as a message to the user

    std::cout << "The average of all the test are: " << average3 << std::endl;

    // Ask the user what is the percentage for test grades in the class

    std::cout << "What is the perecentage for test grades in the class ?" << std::endl;

    // Allow the user to input the information 

    std::cin >> f;

    // Convert the percentage to a decimal

    g = f / 100;

    // Display a message that show the decimal version of the percentage

    std::cout << "The conversion of the percentage to a decimal to calculate all test grades is: " << g << std::endl;

    // Multiply the conversion of the percentage to decimal to all quiz grades

    h = average3 * g;

    std::cout << "The points earned for all test grades are  " << h << std::endl;

    // Determine the students course letter grade in the class

    total_points = b + e + h;

    //display a message to the user the total points eaned in the classroom

    std::cout << "The total points earned in class will determine your grade. " << std::endl;

    std::cout << "The total points earned in this class is " << total_points << "." << std::endl;

    // Create if-else statement to determine the letter grade in the class

    if (total_points>=90)
    {
        std::cout << "You've got an A !" << std::endl;
        std::cout << "Congratulations!" << std::endl;
    }

    else if (total_points<90 && total_points>=80)
    {
        std::cout << "You've got a B." << std::endl;
    }

    else if (total_points<80 && total_points>=70)
    {
        std::cout << "You've got a C." << std::endl;
    }

    else if (total_points<70 && total_points>=60)
    {
        std::cout << "you've got a D." << std::endl;
    }

    else
    {
        std::cout << "You've got a F." << std::endl;
    }

}


