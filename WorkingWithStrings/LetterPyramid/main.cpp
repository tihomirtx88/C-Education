// Write a C++ program that displays a Letter Pyramid from a user-provided std::string.

// Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

// It's much easier to understand the Letter Pyramid given examples.

// If the user enters the string "ABC", then your program should display:

//   A
//  ABA
// ABCBA

// If the user enters the string, "12345", then your program should display:

//     1
//    121
//   12321
//  1234321
// 123454321

// If the user enters 'ABCDEFG', then your program should display:

//       A
//      ABA
//     ABCBA
//    ABCDCBA
//   ABCDEDCBA
//  ABCDEFEDCBA
// ABCDEFGFEDCBA
// If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display:

//                          A
//                         ABA
//                        ABCBA
//                       ABCDCBA
//                      ABCDEDCBA
//                     ABCDEFEDCBA
//                    ABCDEFGFEDCBA
//                   ABCDEFGHGFEDCBA
//                  ABCDEFGHIHGFEDCBA
//                 ABCDEFGHIJIHGFEDCBA
//                ABCDEFGHIJKJIHGFEDCBA
//               ABCDEFGHIJKLKJIHGFEDCBA
//              ABCDEFGHIJKLMLKJIHGFEDCBA
//             ABCDEFGHIJKLMNMLKJIHGFEDCBA
//            ABCDEFGHIJKLMNONMLKJIHGFEDCBA
//           ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
//          ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
//         ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
//        ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
//       ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
//      ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
//     ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
//    ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
//   ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
//  ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
// ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA
// If the user enters "C++isFun!", then your program should display:

//         C
//        C+C
//       C+++C
//      C++i++C
//     C++isi++C
//    C++isFsi++C
//   C++isFuFsi++C
//  C++isFunuFsi++C
// C++isFun!nuFsi++C

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Step 1: Prompt the user for input
    string input;
    cout << "Enter a string: ";
    getline(std::cin, input);

    int length = input.length();

    // Step 2: Build the pyramid
    //Example "ABC"
    for (int i = 0; i < length; ++i)
    {

        // Print leading spaces
        for (int j = 0; j < length - i - 1; ++j)
        {
            cout << " ";
            // Example space space 
        }

        // Print the left side of the pyramid (including the middle character)
        for (int j = 0; j <= i; ++j)
        {
            cout << input[j];
            // Example space space A
        }

          // Print the right side of the pyramid (mirror image of the left side)
        for (int j = i - 1; j >= 0; --j) {
            std::cout << input[j];
        }

         // Move to the next line after printing each row
        cout << std::endl;
    };
}

// ### Follow-Up Questions:

// **1. Which C++ loop(s) did you use and why?**

// - I used two types of loops:
// - **For Loop**: To iterate over each character in the string (for each row of the pyramid) and to print the characters and spaces within each row.
// - The `for` loop is well-suited for this task because the number of iterations (rows, characters, spaces) is known and depends on the length of the string.

// **2. How did you handle displaying the leading spaces in each row of the pyramid?**

// - The leading spaces are handled by printing `(length - i - 1)` spaces before printing the characters. This ensures that the pyramid is centered, with the number of spaces decreasing as we move to the lower rows.

// **3. Now that you completed the assignment, how might you approach the problem differently if you had to solve it again?**

// - If I had to solve it again, I might consider:
// - **Optimization**: Combining the loops that handle the left and right sides of the pyramid to avoid redundancy.
// - **Modularization**: Splitting the code into functions for better readability, especially for handling the printing of spaces, the left side, and the right side separately.
// - **Input Validation**: Adding validation to ensure the user input is non-empty or handling other edge cases.

