# Beginner level C and Python programs

![C](https://img.shields.io/badge/C-74%20programs-00599C?style=flat-square&logo=c&logoColor=white)
![Python](https://img.shields.io/badge/Python-26%20programs-3776AB?style=flat-square&logo=python&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-green?style=flat-square)

100 beginner programming questions and their solutions, 74 in C and 26 in Python. They start at "is this number even or odd" and work up to structures, pointers, file handling, sorting and a small ATM program.

These questions were taught to me by my programming teacher, **Dr. Kirti Singh**.

## Contents

- [Repository structure](#repository-structure)
- [How to run the programs](#how-to-run-the-programs)
- [C programs](#c-programs)
- [Python programs](#python-programs)
- [Acknowledgement](#acknowledgement)
- [License](#license)

## Repository structure

```
.
├── c/          74 C programs (.c)
├── python/     26 Python programs (.py)
├── LICENSE
└── README.md
```

Every file is named `QNNN_short_description` so the questions stay in order, and the first line of each file is the question itself, written as a comment.

## How to run the programs

You need a C compiler (`gcc` or `clang`) and Python 3.

**C**

```bash
cd c
gcc Q001_even_or_odd.c -o even_or_odd -lm
./even_or_odd
```

**Python**

```bash
cd python
python3 Q067_even_or_odd.py
```

Most programs ask for input from the keyboard, so type a value and press Enter when prompted. Q066 creates a file called `data.txt` in the folder you run it from.

## C programs

Topics: Loops (22), conditional statements (13), basics and input/output (9), arrays (6), switch case (5), structures (5), functions (3), operators (3), type conversion (1), jump statements (1), recursion (1), strings (1), file handling (1), nested loops (1), 2D arrays (1), pointers (1).

| # | Program | Topic | Question |
|:-:|---|---|---|
| 001 | [Even or odd](c/Q001_even_or_odd.c) | Conditional statements | Write a program to check whether a number entered by the user is even or odd. |
| 002 | [Positive negative zero](c/Q002_positive_negative_zero.c) | Conditional statements | Write a program to check whether a number is positive, negative or zero. |
| 003 | [Vote eligibility](c/Q003_vote_eligibility.c) | Conditional statements | Write a program to check whether a person is eligible to vote. |
| 004 | [Greater of two](c/Q004_greater_of_two.c) | Conditional statements | Write a program to find the greater of two numbers. |
| 005 | [Greatest of three](c/Q005_greatest_of_three.c) | Conditional statements | Write a program to find the greatest of three numbers. |
| 006 | [Pass or fail](c/Q006_pass_or_fail.c) | Conditional statements | Write a program to check whether a student has passed or failed based on marks. |
| 007 | [Leap year](c/Q007_leap_year.c) | Conditional statements | Write a program to check whether a year is a leap year. |
| 008 | [Vowel or consonant](c/Q008_vowel_or_consonant.c) | Conditional statements | Write a program to check whether an entered alphabet is a vowel or a consonant. |
| 009 | [Grade system](c/Q009_grade_system.c) | Conditional statements | Write a program to display the grade for the marks entered (grade system). |
| 010 | [Electricity bill discount](c/Q010_electricity_bill_discount.c) | Conditional statements | Write a program to calculate an electricity bill with a discount based on units consumed. |
| 011 | [Simple calculator](c/Q011_simple_calculator.c) | Switch case | Write a simple calculator program using a switch case. |
| 012 | [Grade description switch](c/Q012_grade_description_switch.c) | Switch case | Write a program using a switch case to display the description of a grade (A-F). |
| 013 | [Day of week](c/Q013_day_of_week.c) | Switch case | Write a program using a switch case to display the day of the week. |
| 014 | [Menu driven area](c/Q014_menu_driven_area.c) | Switch case | Write a menu-driven program to find the area of a circle, square or rectangle. |
| 015 | [Traffic light](c/Q015_traffic_light.c) | Switch case | Write a program for a traffic light system (R/Y/G) using a switch case. |
| 016 | [Search number](c/Q016_search_number.c) | Loops | Write a program to search for a number among 10 entered numbers and display its position (search operation). |
| 017 | [Sum until zero](c/Q017_sum_until_zero.c) | Loops | Write a program to keep adding numbers until zero is entered and display the total. |
| 018 | [Prime check](c/Q018_prime_check.c) | Loops | Write a program to check whether a number is prime. |
| 019 | [Print until divisible 7 and 11](c/Q019_print_until_divisible_7_and_11.c) | Loops | Write a program to print numbers from 1 to 100 until a number divisible by both 7 and 11 is reached. |
| 020 | [Password limited attempts](c/Q020_password_limited_attempts.c) | Loops | Write a program for a password check with a limited number of attempts (3). |
| 021 | [Student structure](c/Q021_student_structure.c) | Structures | Write a program using a structure to input and display student information (roll no., name, marks). |
| 022 | [Employee highest salary](c/Q022_employee_highest_salary.c) | Structures | Write a program using a structure to store details of 5 employees and display the employee with the highest salary. |
| 023 | [Book array of structures](c/Q023_book_array_of_structures.c) | Structures | Write a program to store and display book details using an array of structures. |
| 024 | [Add distances structure](c/Q024_add_distances_structure.c) | Structures | Write a program to add two distances (feet and inches) using structures. |
| 025 | [Nested structures](c/Q025_nested_structures.c) | Structures | Write a program to show nested structures (a person's name and date of birth). |
| 026 | [Sum until negative](c/Q026_sum_until_negative.c) | Loops | WAP to calculate the sum of up to 5 numbers entered by the user, which terminates early and prints the total sum if a negative number is entered. |
| 027 | [Product function](c/Q027_product_function.c) | Functions | Write a program using a function to find the product of two numbers. |
| 028 | [Factorial](c/Q028_factorial.c) | Loops | Write a program to find the factorial of a number. |
| 029 | [Swap third variable function](c/Q029_swap_third_variable_function.c) | Functions | Write a program to swap two numbers using a third variable (using a function). |
| 030 | [Swap without third variable](c/Q030_swap_without_third_variable.c) | Operators | Write a program to swap two numbers without using a third variable. |
| 031 | [Sum function](c/Q031_sum_function.c) | Functions | WAP using a function to find the sum of two numbers. |
| 032 | [Sum even odd 1 to n](c/Q032_sum_even_odd_1_to_n.c) | Loops | WAP to find the sum of all even and odd numbers from 1 to N. |
| 033 | [Multiplication table](c/Q033_multiplication_table.c) | Loops | Write a program to print the multiplication table of any number. |
| 034 | [Palindrome number](c/Q034_palindrome_number.c) | Loops | Write a program to check whether a number is a palindrome. |
| 035 | [Rectangle area perimeter](c/Q035_rectangle_area_perimeter.c) | Basics and input/output | Write a program to find the area and perimeter of a rectangle. |
| 036 | [Celsius to fahrenheit](c/Q036_celsius_to_fahrenheit.c) | Basics and input/output | Write a program to convert temperature from Celsius to Fahrenheit. |
| 037 | [Simple interest](c/Q037_simple_interest.c) | Basics and input/output | Write a program to calculate simple interest. |
| 038 | [Square and cube](c/Q038_square_and_cube.c) | Basics and input/output | Write a program to find the square and cube of a number. |
| 039 | [Ascii value](c/Q039_ascii_value.c) | Basics and input/output | Write a program to print the ASCII value of a character. |
| 040 | [Stages of compilation](c/Q040_stages_of_compilation.c) | Basics and input/output | Describe the different stages involved in compiling and executing a C program. Write a simple C program and explain the meaning of each line. (Section B) |
| 041 | [Divisible by 5 and 11](c/Q041_divisible_by_5_and_11.c) | Conditional statements | Write a program to check whether a number is divisible by both 5 and 11. |
| 042 | [Type conversion average](c/Q042_type_conversion_average.c) | Type conversion | Explain type conversion in C. Differentiate between implicit and explicit type conversion with suitable examples. Write a C program to calculate the average of three integers and display the result as a floating-point number. |
| 043 | [Sum of evens compare 50](c/Q043_sum_of_evens_compare_50.c) | Loops | Write a C program that accepts an integer n from the user and uses a for loop to calculate the sum of all even numbers from 1 to n. Display the sum and state whether it is greater than 50 using an if-else statement. |
| 044 | [Primes 1 to n](c/Q044_primes_1_to_n.c) | Loops | Write a program to print all prime numbers between 1 and n using an appropriate loop. |
| 045 | [Operators and ternary](c/Q045_operators_and_ternary.c) | Operators | Explain relational, logical and bitwise operators in C with suitable examples. Write a C program that accepts 2 integers and finds the larger number using the ternary operator. (Section C) |
| 046 | [Loops and palindrome](c/Q046_loops_and_palindrome.c) | Loops | Explain how for, while and do-while loops work in C. Compare these loops based on their syntax and how they execute. Write a C program to accept an integer n and determine whether it is a palindrome. |
| 047 | [Days to years weeks days](c/Q047_days_to_years_weeks_days.c) | Basics and input/output | Write a program to convert a given number of days into years, weeks and days. |
| 048 | [Reverse number](c/Q048_reverse_number.c) | Loops | Write a program to find the reverse of a number. |
| 049 | [Natural numbers while](c/Q049_natural_numbers_while.c) | Loops | Write a program to print natural numbers from 1 to n using a while loop. |
| 050 | [Character type](c/Q050_character_type.c) | Conditional statements | Write a program to check whether a character is an uppercase letter, lowercase letter, digit or special character. |
| 051 | [Power of number](c/Q051_power_of_number.c) | Loops | Write a program to find the power of a number using a loop. |
| 052 | [Count even odd in array](c/Q052_count_even_odd_in_array.c) | Arrays | Write a program to count the even and odd elements in an array. |
| 053 | [Triangle area](c/Q053_triangle_area.c) | Basics and input/output | Write a program to find the area of a triangle using its base and height. |
| 054 | [Input output calculations](c/Q054_input_output_calculations.c) | Basics and input/output | Explain input and output statements in C. Write a program that accepts values from the user, performs calculations and displays the results. |
| 055 | [Grade else if ladder](c/Q055_grade_else_if_ladder.c) | Conditional statements | Write a C program to input marks and display the grade using an else-if ladder (90 and above: A, 75-89: B, 60-74: C, below 60: D). |
| 056 | [Sum 1 to 100](c/Q056_sum_1_to_100.c) | Loops | Write a C program using a loop to find the sum of numbers from 1 to 100. Explain how it works. |
| 057 | [All operators demo](c/Q057_all_operators_demo.c) | Operators | Discuss the various operators used in C programming and explain their applications with suitable examples. Write a C program showing their use. (Section C) |
| 058 | [Break continue goto](c/Q058_break_continue_goto.c) | Jump statements | Describe how break, continue and goto statements affect the flow of execution in a C program. Show how they work with suitable examples and a C program. |
| 059 | [Factorial recursion](c/Q059_factorial_recursion.c) | Recursion | Write a program to find the factorial of a number using recursion. |
| 060 | [Fibonacci series](c/Q060_fibonacci_series.c) | Loops | Write a program to print the Fibonacci series. |
| 061 | [1d array traversal](c/Q061_1d_array_traversal.c) | Arrays | Explain a 1D array (declaration, input, output, traversal) with its representation, a flowchart, a program and real-world applications. |
| 062 | [Marks sum average](c/Q062_marks_sum_average.c) | Arrays | Write a program to input the marks of 5 subjects into an array and find their sum and average. |
| 063 | [String functions](c/Q063_string_functions.c) | Strings | Explain strings in C and the functions gets()/puts(), strlen(), strcpy() and strcmp() with examples and a complete program. |
| 064 | [Array max min sum avg](c/Q064_array_max_min_sum_avg.c) | Arrays | Given a 1D array of 5 elements {12, 45, 7, 23, 18}, find the maximum, minimum, sum and average of the elements. |
| 065 | [Array reverse order](c/Q065_array_reverse_order.c) | Arrays | Write a program to print the elements of an array in reverse order. |
| 066 | [File handling](c/Q066_file_handling.c) | File handling | Explain file handling in C and its key functions. Write a program to write data to a file and then read it. |
| 088 | [Count digits](c/Q088_count_digits.c) | Loops | Write a program to count the number of digits in an integer. |
| 089 | [Sum of digits](c/Q089_sum_of_digits.c) | Loops | Write a program to find the sum of the digits of a number. |
| 090 | [Armstrong number](c/Q090_armstrong_number.c) | Loops | Write a program to check whether a number is an Armstrong number. |
| 091 | [Gcd lcm](c/Q091_gcd_lcm.c) | Loops | Write a program to find the GCD and LCM of two numbers. |
| 092 | [Star triangle](c/Q092_star_triangle.c) | Nested loops | Write a program to print a right-angled triangle star pattern using nested loops. |
| 093 | [Bubble sort](c/Q093_bubble_sort.c) | Arrays | Write a program to sort an array of n integers in ascending order using bubble sort. |
| 094 | [Add matrices](c/Q094_add_matrices.c) | 2D arrays | Write a program to add two 3x3 matrices using 2D arrays. |
| 095 | [Swap using pointers](c/Q095_swap_using_pointers.c) | Pointers | Write a program to swap two numbers using pointers (call by reference). |

## Python programs

Topics: Conditional statements (10), loops (5), strings (3), lists (3), nested loops (1), functions (1), menu-driven program (1), dictionaries (1), modules and loops (1).

| # | Program | Topic | Question |
|:-:|---|---|---|
| 067 | [Even or odd](python/Q067_even_or_odd.py) | Conditional statements | Write a program to check whether a number is even or odd. |
| 068 | [Positive negative zero](python/Q068_positive_negative_zero.py) | Conditional statements | Write a program to check whether a number is positive, negative or zero. |
| 069 | [Pass or fail](python/Q069_pass_or_fail.py) | Conditional statements | Write a program to check pass or fail based on marks. |
| 070 | [Vote eligibility](python/Q070_vote_eligibility.py) | Conditional statements | Write a program to check whether a person is eligible to vote. |
| 071 | [Greater of two](python/Q071_greater_of_two.py) | Conditional statements | Write a program to find the greater of two numbers. |
| 072 | [Leap year](python/Q072_leap_year.py) | Conditional statements | Write a program to check whether a year is a leap year. |
| 073 | [Small capital letter](python/Q073_small_capital_letter.py) | Conditional statements | Write a program to check if a character is a small letter, capital letter or not an alphabet. |
| 074 | [Discount system](python/Q074_discount_system.py) | Conditional statements | Write a program for a discount system (10% discount on amounts of 5000 or more). |
| 075 | [Grade system](python/Q075_grade_system.py) | Conditional statements | Write a program for a grade system based on marks. |
| 076 | [Username password](python/Q076_username_password.py) | Conditional statements | Write a program to check a username and password. |
| 077 | [Print 1 to 10](python/Q077_print_1_to_10.py) | Loops | Write a program to print numbers from 1 to 10. |
| 078 | [Table of number](python/Q078_table_of_number.py) | Loops | Write a program to print the table of any number. |
| 079 | [Even numbers 1 to 50](python/Q079_even_numbers_1_to_50.py) | Loops | Write a program to print even numbers from 1 to 50. |
| 080 | [Factorial](python/Q080_factorial.py) | Loops | Write a program to find the factorial of a number. |
| 081 | [Count vowels](python/Q081_count_vowels.py) | Strings | Write a program to count the vowels in a string. |
| 082 | [Reverse string](python/Q082_reverse_string.py) | Strings | Write a program to reverse a string. |
| 083 | [Print list elements](python/Q083_print_list_elements.py) | Lists | Write a program to print the elements of a list. |
| 084 | [Star pattern](python/Q084_star_pattern.py) | Nested loops | Write a program to print a star pattern. |
| 085 | [Sum of list](python/Q085_sum_of_list.py) | Lists | Write a program to find the sum of all elements in a list. |
| 086 | [Bill calculation](python/Q086_bill_calculation.py) | Functions | Write a bill calculation system using a function (price, quantity and discount). |
| 087 | [Atm](python/Q087_atm.py) | Menu-driven program | Write an ATM program (check balance, deposit, withdraw, exit). |
| 096 | [String palindrome](python/Q096_string_palindrome.py) | Strings | Write a program to check whether a string is a palindrome. |
| 097 | [Largest smallest in list](python/Q097_largest_smallest_in_list.py) | Lists | Write a program to find the largest and smallest elements in a list. |
| 098 | [Fibonacci series](python/Q098_fibonacci_series.py) | Loops | Write a program to print the Fibonacci series up to n terms. |
| 099 | [Character frequency](python/Q099_character_frequency.py) | Dictionaries | Write a program to count the frequency of each character in a string using a dictionary. |
| 100 | [Number guessing game](python/Q100_number_guessing_game.py) | Modules and loops | Write a number guessing game using a while loop and the random module. |

## Acknowledgement

Thank you to **Dr. Kirti Singh**, my programming teacher, who taught me every question in this repository.

## License

This project is released under the [MIT License](LICENSE).
