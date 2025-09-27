#include "raining.hpp"
#include <iostream>
#include <algorithm>

void busniess_organizer() {
    std::vector<std::string> vector_businesses;
    std::string user_exit_input;
    std::string user_business;

    std::cout << "Welcome to the business organizer!" << std::endl;

    do {
        std::cout << "Please enter in your business: ";
        std::getline(std::cin, user_business);
        vector_businesses.push_back(user_business);

        //sorts the vector and arranges them in descending order
        std::sort(vector_businesses.begin(), vector_businesses.end());

        //prints out all busniesses in the vector
        for (const auto &business : vector_businesses) {
            std::cout << business << std::endl;
        }

        //prompts the user if they want to enter in another busniess
        std::cout << "Another business? (yes to continue)" << std::endl;
        std::getline(std::cin, user_exit_input);

    //if user doesn't do one of these options then it will go out of the do while loop.
    } while (user_exit_input == "y" || user_exit_input == "Y" || user_exit_input == "yes" || user_exit_input == "Yes");

    std::cout << "Thank you for using the business organizer" << std::endl;
}
