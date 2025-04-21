#include <iostream>
#include <cmath>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Handle negative numbers by taking the absolute value
    number = std::abs(number);

    // Variables to track the most frequent count and the digits
    int maxCount = 0;
    int mostFrequentDigit1 = -1;
    int mostFrequentDigit2 = -1;

    // Check each digit from 0 to 9
    for (int digit = 0; digit <= 9; digit++) {
        int count = 0; // Reset count for the current digit
        int temp = number;

        // Count occurrences of the current digit
        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10; // Remove the last digit
        }

        // Update the most frequent digits if this digit's count is higher
        if (count > maxCount) {
            maxCount = count;
            mostFrequentDigit1 = digit;
            mostFrequentDigit2 = -1; // Reset the second most frequent
        } else if (count == maxCount && digit != mostFrequentDigit1) {
            mostFrequentDigit2 = digit; // Update the second most frequent
        }
    }

    // Output the result
    std::cout << "The digit(s) that appear(s) the most times: ";
    if (mostFrequentDigit1 != -1) {
        std::cout << mostFrequentDigit1;
        if (mostFrequentDigit2 != -1) {
            std::cout << ", " << mostFrequentDigit2;
        }
    }
    std::cout << std::endl;

    return 0;
}
