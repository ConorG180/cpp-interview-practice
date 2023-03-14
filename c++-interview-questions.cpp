#include <iostream>

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

int main(){

    // std::cout << "Hello World";

    // Swap 2 variables values without numbers

    // int a = 1;
    // int b = 2;

    // int temp = a;
    // a = b;
    // b = temp;

    // std::cout << a;
    // std::cout << b;





    // salesShop::salesShopSolution();
    temperatureConverter::fahrenheitConverterSolution();


    return 0;
}