#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
 #include <string> //This is used for getline() method

// A store makes $95000 per year. They get charged 4%
// State tax  and 2 % county tax. Write a programme that
// shows total sales, state tax, county tax, total tax and 
// total sales after tax. The programme should also show sales
// continuously as different taxes get dedicuted.
namespace salesShop {
    void salesShopSolution() {
        double sales = 95000.00;
        std::cout << "Hello! Your total sales for this year were: " << sales << std::endl;

        double stateTaxPercent = 0.04;
        double stateTax = sales * stateTaxPercent;
        std::cout << "The state tax on your sales of " << sales << " is " << stateTaxPercent << std::endl;
        std::cout << "Therefore, you must pay " << stateTax << " on your sales of " << sales << std::endl;
        sales = sales - stateTax;
        std::cout << "You are left with " << sales << " After state tax." << std::endl;

        double countyTaxPercent = 0.02;
        double countyTax = sales * countyTaxPercent;
        std:: cout << "The county tax on your remaining sales of " << sales << " is " << countyTaxPercent << std::endl;
        std:: cout << "Therefore, you must pay " << countyTax << " on your remainder of " << sales << std::endl;
        sales = sales - countyTax; 
        std::cout << "Therefore, you are left with "<< sales << " After county tax" << std::endl;

        double totalTax = stateTax + countyTax;
        std::cout <<"Your total tax is " << totalTax << ", leaving you with a total sales after tax of " << sales << std::endl;
    }
}

// Build a small programme that allows the user to enter input,
// The user should enter a degree in farenheit and then 
// the user should receive a message back with their value 
// as farenheit converted into celsius
namespace temperatureConverter{
    double fahrenheitConverter(double temp){
        double convertedCelsiusValue = (temp - 32) * 0.5556;
        return convertedCelsiusValue;
    }

    void fahrenheitConverterSolution(){
        std::cout << "Hello! Please enter your Fahrenheit value: ";
        double fahrenheitValue;
        std::cin >> fahrenheitValue;

        double celsiusValue = fahrenheitConverter(fahrenheitValue);
        std::cout << "Thank you! Your temperature in Celsius is: " << celsiusValue;
    }
    double celsiusValue;
}

// Ask the user to enter the radius of a circle.
// Return to the console the area of the circle.
namespace circleArea{
    double getCircleArea(double radius){
        const double pi = 3.14159265358979323846;
        // double area = 2 * pi * radius;
        double area = pi * pow(radius, 2);
        return area;
    }

    void circleAreaSolution(){
        std::cout << "Hello! Please enter the radius of your circle";
        double radius;
        std::cin >> radius;
        double area = getCircleArea(radius);
        std::cout << "Thank you! The area of your circle is: " << area;
    }
}

// Write a programme which rolls two dice, then
// gets the values of each of the dice, and 
// multiplies them to return a final number.
// This should be random.
namespace doubleDice {

    int* rollDice(){
        // static int dices[2];
        srand(time(nullptr));
        const int dice1 = rand() % 6 + 1;
        const int dice2 = rand() % 6 + 1;
        static int dices[2] = {dice1, dice2};
        return dices;
    }

    void doubleDiceSolution(){
        std::cout << "Rolling dices" << std::endl;
        int* rolledDices = rollDice();
        int dices[2];
        for(int i = 0; i < 2; i++){
            dices[i] = rolledDices[i];
            std::cout << "Dice " << i + 1 << " " << "is " << dices[i] << std::endl;
        }
        int dicesTotalValue = dices[0] * dices[1];
        std::cout << "Total value of dices is " << dicesTotalValue;
    }
}

/*
 Print a programme that makes rows and columns on the ternimal.
 The programme will contain a courses column and student number column.
The courses and labels should be aligned to the left, whilst the student
 numbers should be aligned to the right.
 The programme should list "Courses" and "Student" aligned to
 The left in first row.
 Then, for the second row, it should list "Javascript" with 50 students in the student
 column. Javascript aligned to left and number aligned to right.
 Finally, it should have a 3rd row with C++ and 100 students. Follow
 The same structure for this row as the 2nd row with Javascript.
*/
namespace printStudentProgramme{
    void printStudentProgrammeSolution(){
        std::string jsCourseName = "JavaScript";
        int jsCourseStudents = 50;
        std::string cppCourseName = "C++";
        int cppCourseStudents = 100;
        std::cout << std::left <<std::setw(12) << "Course" << "Students" << std::endl;
        std::cout << std::left << std::setw(10) << jsCourseName << std::setw(10) << std::fixed << std::right << jsCourseStudents << std::endl;
        std::cout << std::left << std::setw(10) << cppCourseName << std::setw(10) << std::fixed << std::right << cppCourseStudents << std::endl;
    }
}

/*
Write a program that asks the user a series of questions
like street, city, state, and zip code and then prints the user's address using this format:

Street

City, State, ZipCode
*/
namespace printAddress{
    void printAddressSolution(){
        std::cout << "Enter your address!" <<std::endl;
        std::cout << std::endl;

        std::cout << "Question1: What's your street?";
        std::string street;
        std::getline(std::cin, street);

        std::cout << "Great! Now, what is your City?" << std::endl;
        std::string city;
        std::getline(std::cin, city);

        std::cout << "Great! Now, what is your State?" << std::endl;
        std::string state;
        std::getline(std::cin, state);

        std::cout << "Thank you! And finally, your zipcode?" << std::endl;
        std::string zipcode;
        std::getline(std::cin, zipcode);

        std::cout << "Thank you! So, your address is as follows:" << std::endl;
        std::cout << std::endl;
        std::cout << street <<std::endl;
        std::cout << std::endl;
        std::cout << city << ", "<< state << ", " << zipcode << ".";

    }
}
namespace basicCalculator{
    void basicCalculatorSolution(){
        std::cout << "Enter first number";
        double first;
        std::cin >> first;

        std::cout << "Thaml you. Now please enter a second number";
        double second;
        std::cin >> second;

        std::cout << "Thank you. Finally, enter your operator (+, -, * or / )";
        char sign;
        std::cin >> sign;

        double result;
        if(sign == '+'){
            result = first + second;
        }
        else if(sign == '-'){
            result = first - second;
        }
        else if (sign == '*'){
            result = first * second;
        }
        else if (sign == '/'){
            result = first / second;
        }

        std::cout << result;
    }
}

namespace getFactorial{
    void getFactorialSolution(){
        std::cout << "Hello! Please enter a number and the factorial will be printed." << "\n";
        int number;
        std::cin >> number;

        int factorial = 1;
        for(int i = 1; i <= number; i++){
            factorial *= i;
        }
        std::cout << factorial;
    }
}
namespace getAverageTemp{
    void getAverageTempSolution(){

        // Solution 1 (easiest)
        int temperatures[] = {5, 3, 10, 18};
        int temperaturesLength = sizeof(temperatures) / sizeof(int);
        int sum = 0;
        int averageTemp;

        // Solution 1 for loop (easiest)
        for(int temp: temperatures){
            sum += temp;
        }

        // Solution 2 for loop
        // for(int i = 0; i < temperaturesLength; i++){
        //     sum += temperatures[i];
        // }

        averageTemp = sum / temperaturesLength;
        std::cout << averageTemp;
    }

}

int main(){

    // std::cout << "Hello World";
    // salesShop::salesShopSolution();
    // temperatureConverter::fahrenheitConverterSolution();
    // circleArea::circleAreaSolution();
    // doubleDice::doubleDiceSolution();
    // printStudentProgramme::printStudentProgrammeSolution(); 
    // printAddress::printAddressSolution();
    // basicCalculator::basicCalculatorSolution();
    // getFactorial::getFactorialSolution();
    getAverageTemp::getAverageTempSolution();


    return 0;
}