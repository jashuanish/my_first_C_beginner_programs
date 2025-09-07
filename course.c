#include <stdio.h>
#include <stdlib.h>
/*
==========================
Program Titles
==========================

// 1. Number Centered Pyramid Pattern
// 2. Check if Array is Ascending
// 3. Check Ascending Sequence with Positive Integers
// 4. Even and Odd Numbers, Difference of Sums
// 5. Sum of Even and Odd Digits of a Number
// 6. Maximum Between Three Numbers
// 7. Average of Three Grades
// 8. Area of a Rectangle
// 9. Check if Number is Even or Odd
// 10. Print Sequence of 9s (Integer Return)
// 11. Print Sequence of 9s (Void Print)
// 12. Print Sequence of Numbers or 9s (long long)
// 13. Print Sequence of Numbers or 9s (void print)
// 14. Convert Character to Lowercase
// 15. Centered Number Pyramid with Width Calculation
// 16. Convert Three Characters to Integer
// 17. Average of Digits Less Than a Given Number
// 18. Derivative of Polynomial (Array of Coefficients)
// 19. Sum of Divisors of a Number
// 20. Check if Number is Perfect
// 21. Number Pyramid Pattern (Alternative)
// 22. Find Lowest Grade in Array
// 23. Find Largest Digit in Phone Number
// 24. Find Index of Largest Number in Array
// 25. Find Index of Largest Number During Input
// 26. Weather Data Analysis (Average, Hottest, Coldest)
// 27. Check for "Good Neighbors" in Array
// 28. Print 2D Array
// 29. Multiplication Table (2D Array)
// 30. Print Addresses of Array Elements
// 31. Pointer Demonstration
// 32. Print Address and Value of Grades
// 33. Pointer Assignment Demo
// 34. Find Max and Min (No Pointers)
// 35. Find Max and Min Using Pointers
// 36. Copy Date Array
// 37. Check if Array is Palindrome
// 38. Check if Array is Palindrome (Alternative)
// 39. Largest Sum of Two Adjacent Elements
// 40. Largest Sum of (i-1) and (i+1) Elements
// 41. Check if Array is "Really Sorted", "Sorted", or "Not Sorted"
// 42. Print and Count Unique Elements in Array
// 43. Print and Count Non-Unique Elements in Array
// 44. Shift Array Left by One
// 45. Shift Array Left by N Positions
// 46. Shift Array Right by N Positions
// 47. Shift Array Right by N Positions (Modulo)
// 48. Find Pair with Sum Closest to Zero
// 49. Sum of Array Elements (Pointer)
// 50. Reset Array Elements to Zero
// 51. Print First and Last Name
// 52. Length of String (Excluding Spaces/Newlines)
// 53. Count Words in String
// 54. Reverse String and Check Palindrome
// 55. String Copy Function
// 56. Simple Recursion Demo (fun)
// 57. Factorial (Recursive)
// 58. Sum of All Non-Negative Integers (Recursive)
// 59. Unique Grid Paths (Recursive)
// 60. Count Partitions of Objects (Recursive)
// 61. Sum of Numbers (Iterative)
// 62. Arithmetic Progression (Recursive)
// 63. Factorial (Recursive, Alternative)
// 64. Fibonacci Series (Recursive)
// 65. Sum of Digits (Recursive)
// 66. Count of Digits (Recursive)
// 67. Count Numbers Less Than Given Number (Recursive)
// 68. Find Perfect Numbers up to Limit
// 69. String Length (Recursive)
// 70. Count Numbers Less Than Given Number (Recursive, Alternative)
// 71. Count Occurrences of Character (Recursive)
// 72. Count Even Numbers (Recursive)
// 73. Sum of All Even Numbers (Recursive)
// 74. Print Numbers Up to N (Recursive)
// 75. Print N to 1 and Vice Versa Without Duplicates
// 76. Lucas Sequence (Recursive and Iterative)
// 77. Find Maximum Number in Sequence (Recursive)
// 78. Find Minimum Number in Sequence (Recursive)
// 79. Peil Numbers (Recursive and Iterative)
// 80. Check if Sum of Digits is Even (Recursive)
// 81. Check if Sum of Digits is Even (Optimized)
// 82. Check if Sum of Digits is Odd (Optimized)
// 83. Check Digits at Even/Odd Positions (Recursive)
// 84. Print Sequence of Num1s and Num2s (Recursive)
// 85. Print Sequence of Char1 and Char2 (Recursive)
// 86. Print Sequence of Char1 and Char2 in Uppercase (Recursive)
// 87. Check if Number is Recursively Ascending or Descending
// 88. Count Occurrences of Digit in Number (Recursive)
// 89. Check if Total Occurrences of Digit are Even (Recursive)
// 90. Check Even or Odd Occurrences (Optimized)
// 91. Struct Point Demo
// 92. Struct Date Demo (Next Date Calculation)
// 93. Struct Point Initialization and Print
// 94. Struct Point Array Demo
// 95. Struct Point Array Comparison
// 96. Rational Number Struct and Operations
// 97. Count 0s and 1s in Array
// 98. Count Appearances of Numbers in Array
// 99. Find Number with Most Appearances
// 100. Count Appearances of Numbers 5-10
// 101. Find Most Frequent Character in Char Array
// 102. Find Most Frequent Letter (Uppercase/Lowercase) in String
// 103. File Open/Write Demo
// 104. File Write String Demo
// 105. File Read Integer Demo
// 106. File Append String Demo
// 107. File Read String Demo
// 108. File Character and Line Count Demo
// 109. Writing numbers and their powers to the file

/*

int main() {

    int i, j, k;
    int rows;
    int blankspaces;
    int currentNumber;

    currentNumber = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    blankspaces = rows - 1;

    for(i = 1; i <= rows; i++){
        for(k = blankspaces; k >= 1; k--){
            printf(" ");
        }

        for (j = 1; j <= i; j++){
            printf("%d ", currentNumber);
            currentNumber += 1;
        }

        printf("\n");
        blankspaces --;
    }

    return 0;
}

int main() {
    int i;
    int num;
    int isAscending;

    isAscending = 1;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    int elements[num];

    for (i = 0; i < num; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &elements[i]);
    }

    for (i = 0;i < num - 1; i++){
        if (elements[i]>elements[i + 1])
        {
            isAscending = 0;
            break;
        }
    }

    if (isAscending == 0){
        printf("These numbers are not in ascending order. ");
    }
    else{
        printf("These numbers are in ascending order. ");
    }

}


int main() {

    int i = 1;
    int size;
    int current_value = 0;
    int previous_value = 0;
    int isAscending = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if(size <= 0){
    printf("Invalid input. Try again please ");}
    else{
        do
        //first value
        {
            printf("Enter value 1: ");
            scanf("%d", &previous_value);
            if (previous_value < 0){
                printf("Invalid input. Enter a positive integer");
            }
        //other values
        } while (previous_value < 0);
        for(i = 2; i <= size; i++){
            printf("Enter value %d: ", i);
            scanf("%d", &current_value);

            if (current_value < 0){
                printf("Enter a positive integer");
            }
            //checking if ascending or not
            else{
                //if its not, make the isAscending condition false(change to 0)
                if (current_value < previous_value){
                    isAscending = 0;
                    break;
                }
                //if it is, move to the next value, making the current value as the previous value
                previous_value = current_value;
            }
        }
    }
    if (isAscending == 0){
        printf("These numbers are not in ascending order");
    }
    else{
        printf("These numbers are in ascending order");
    }
}


int main() {
    int i;
    int number;
    int even_sum = 0;
    int odd_sum = 0;
    int difference;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The even numbers are: ");
    for (i = 1; i <= number; i++) {  // Loop through all numbers
        if (i % 2 == 0) {            // Check if even
            printf("%d ", i);
            even_sum += i;
        }
    }

    printf("\nThe odd numbers are: ");
    for (i = 1; i <= number; i++) {  // Loop through all numbers again
        if (i % 2 != 0) {            // Check if odd
            printf("%d ", i);
            odd_sum += i;
        }
    }

    difference = even_sum - odd_sum;
    printf("\nDifference between even sum and odd sum: %d\n", difference);

    return 0;
}

int main(){
    int num;
    int last_digit = 0;
    int odd_sum = 0;
    int even_sum = 0;
    int difference = 0;
    int i;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = num; i > 0; i /= 10){
        last_digit = i % 10;
        if(last_digit % 2 == 0){
            even_sum += last_digit;
        }
        else{
            odd_sum += last_digit;
        }
    }
    difference = even_sum - odd_sum;

    printf("The difference between even sum[%d] and odd sum[%d]: %d \n \n \n", even_sum, odd_sum, difference);
    return 0;
}

int maxbwn3nums(){
    int num[3];
    int max;
    for (int i = 0; i < 3; i++){
        printf("Enter num %d: ", i+1);
        scanf("%d", &num[i]);
    }

    max = num[0];
    for(int i = 1; i < 3; i++){
        if (num[i] > max){
            max = num[i];
        }
    }

    return max;
}

int main() {
    printf("Maximum number is: %d \n", maxbwn3nums());

    return 0;
}


float average_grades(int grade1, int grade2, int grade3) {
    float average;
    average = (grade1 + grade2 + grade3) / 3.0f; // floating-point division
    return average;
}

int main() {
    int grade1, grade2, grade3;
    printf("Enter your grades one by one: ");
    scanf("%d %d %d", &grade1, &grade2, &grade3);

    printf("The average of these three numbers is: %.2f\n",
           average_grades(grade1, grade2, grade3));

    return 0;
}

float AreaOfARectangle(float height, float width){
    return height * width;
}


int main(){
    float height;
    float width;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("The area of the rectangle is: %.2f \n", AreaOfARectangle(height, width));

}

int isEven(int number){
    int isEven = 1;
    if (number < 0){
        return -1;
    }
    if (number % 2 == 0){
        return isEven;
    }
    else{
        isEven = 0;
        return isEven;
    }
}

int isOdd(int number){
    int isOdd = 1;
    if (number < 0){
        return -1;
    }
    if (number % 2 != 0){
        return isOdd;
    }
    else{
        isOdd = 0;
        return isOdd;
    }
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Even: %d \n", isEven(number));
    printf("Odd: %d \n", isOdd(number));
}


int SequenceOf9s(int length){
    int i;
    int num = 0;

    for (i = 0; i < length; i++){
        num *= 10;
        num += 9;
    }
    return num;
}

int main(){
    int length;
    printf("Enter the number: ");
    scanf("%d", &length);
    printf("Sequence: %d \n", SequenceOf9s(length));
}


void SequenceOf9s(int length){

    int i = 1;

    for (i = 1; i <= length; i++){
        printf("9");
    }
}

int  main(){
    int length;
    printf("Enter the length of the sequence: ");
    scanf("%d", &length);

    printf("Your sequence is: ");
    SequenceOf9s(length);

    printf("\n \n \n");
    return 0;
}


long long SequenceOfNumbers(int length){
    int i;
    int j;
    if (length <= 9){
        for(i = 1; i <= length; i++){
            printf("%d",i);
        }
        return 0;
    }
    else{
        long long number = 0;
        for (j = 1; j <= length; j++){
            number *= 10;
            number += 9;
        }
        return number;
    }
}

int main(){
    int length;
    printf("Enter the length of your sequence: ");
    scanf("%d", &length);

    printf("Your sequence is: ");
    if (length <= 9) {
        SequenceOfNumbers(length);
    }
    else{
        printf("%lld", SequenceOfNumbers(length));
    }
    return 0;
}


long long SequenceOfNumbers(int length){
    int i;
    int j;
    if (length <= 9){
        for(i = 1; i <= length; i++){
            printf("%d",i);
        }
        return 0;
    }
    else{
    if (length > 9){
        for(i = 1; i <= length; i++){
            printf("9");
        }
        return 0;
    }
}
}

int main() {
    int length;
    printf("Enter the length of your sequence: ");
    scanf("%d", &length);

    printf("Your sequence is: ");
    SequenceOfNumbers(length);
    return 0;
}


char toLower(char Character){
    if (Character >= 'A' && Character <= 'Z'){

    }
}

int main() {

    int i, j, k;
    int rows;
    int blankspaces;
    int currentNumber;

    currentNumber = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    blankspaces = rows - 1;

    for(i = 1; i <= rows; i++){
        for(k = blankspaces; k >= 1; k--){
            printf(" ");
        }

        for (j = 1; j <= i; j++){
            printf("%d ", currentNumber);
            currentNumber += 1;
        }

        printf("\n");
        blankspaces --;
    }

    return 0;

#include <stdio.h>

int numDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int currentNumber = 1;
    int lastNumber = rows * (rows + 1) / 2; // total numbers
    int maxWidth = numDigits(lastNumber) + 1; // +1 for space after each number

    int totalWidth = rows * maxWidth; // width of last row

    for (int i = 1; i <= rows; i++) {
        int rowWidth = i * maxWidth; // width of current row
        int spaces = (totalWidth - rowWidth) / 2;

        for (int s = 0; s < spaces; s++)
            printf(" ");

        for (int j = 1; j <= i; j++) {
            printf("%*d ", maxWidth - 1, currentNumber);
            currentNumber++;
        }

        printf("\n");
    }

    return 0;
}


int characterToIntegers(char char1, char char2, char char3)
{
    int hundreds, tens, units;
    int finalResult;

    if(!(char1 >= '0' && char1 <= '9' &&
    char2 >= '0' && char2 <= '9' &&
    char3 >= '0' && char3 <= '9')){
        return 0;
    }
    hundreds = char1 - '0';
    tens = char2 - '0';
    units = char3 - '0';
    finalResult = hundreds*100 + tens*10 + units;
    return finalResult;
}

int main(){
    char char1, char2, char3;
    printf("Enter three characters: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    printf("Your final integer is: %d \n", characterToIntegers(char1,char2,char3));
    return 0;
}


float AverageOfDigitsLessThanNum(int digit, int num)
{
    int counter = 0;
    int TotalSum = 0;
    float average = 0;

    if (num < 0)
    {
        num = num * -1;
    }

    for(int i = num; i > 0; i /= 10){
        int currentDigit = i % 10;
        if (currentDigit < digit)
        {
            counter++;
            TotalSum += currentDigit;
        }
    }

    average = (float)TotalSum / counter;
    printf("Amount of digits in %d less than %d is: %d \n"
        "The average of these digits are: ",num, digit, counter);
    return average;
}

int main()
{
    int num;
    int digit;
    printf("Enter your number: ");
    scanf("%d", &num);

    printf("Enter your digit: ");
    scanf("%d", &digit);

    float result = AverageOfDigitsLessThanNum(digit, num);
    printf("%.2f",result);
    return 0;
}


// Function to calculate derivative of c*x^n
#include <stdio.h>

void derivative(int coeffs[], int degree) {
    printf("Derivative: ");

    int firstTerm = 1;  // to avoid printing "+ " before the first term

    for (int i = degree; i > 0; i--) {
        int newCoeff = coeffs[degree - i] * i;
        int newPower = i - 1;

        if (newCoeff != 0) {
            if (!firstTerm) {
                printf(" + ");
            }
            firstTerm = 0;

            if (newPower == 0) {
                printf("%d", newCoeff); // constant term
            } else {
                printf("%d*x^%d", newCoeff, newPower);
            }
        }
    }
    printf("\n");
}

int main() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    int coeffs[degree + 1];
    printf("Enter %d coefficients (from highest degree to constant):\n", degree + 1);
    for (int i = 0; i <= degree; i++) {
        scanf("%d", &coeffs[i]);
    }

    derivative(coeffs, degree);

    return 0;
}

//Write a program the receives an integer num
//function should calculate and return the sum of its divisors

int SumOfDivisors(int num)
{
    int i;
    int totalSum = 0;
    printf("The divisors of %d are: \n", num);
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            totalSum += i;
        }
    }
    printf("\n");
    return totalSum;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = SumOfDivisors(num);
    printf("The sum of the divisors of the number %d are: %d \n \n \n", num, result);

    return 0;
}


#include <stdio.h>

void perfectNumber(int num)
{
    int i, sum = 1; // start with 1, since 1 is always a divisor
    int divisors[1000], count = 0;

    divisors[count++] = 1; // add 1 to divisor list

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisors[count++] = i;
            if (i != num / i && num / i != num) // avoid duplicate & exclude the number itself
                divisors[count++] = num / i;

            sum += i;
            if (i != num / i && num / i != num)
                sum += num / i;
        }
    }

    // Sort divisors for ascending order
    for (int a = 0; a < count - 1; a++)
    {
        for (int b = a + 1; b < count; b++)
        {
            if (divisors[a] > divisors[b])
            {
                int temp = divisors[a];
                divisors[a] = divisors[b];
                divisors[b] = temp;
            }
        }
    }

    printf("The proper divisors of %d are: ", num);
    for (i = 0; i < count; i++)
        printf("%d ", divisors[i]);
    printf("\n");

    if (sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is NOT a Perfect Number\n", num);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    perfectNumber(num);
    return 0;
}

#include <stdio.h>

int main()
{
    int currentNumber = 1;
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // Print numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", currentNumber);
            currentNumber++;
        }
        printf("\n"); // move to next line
    }

    return 0;
}

int main() {

    int i, j, k;
    int rows;
    int blankspaces;
    int currentNumber;

    currentNumber = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    blankspaces = rows - 1;

    for(i = 1; i <= rows; i++){
        for(k = blankspaces; k >= 1; k--){
            printf(" ");
        }

        for (j = 1; j <= i; j++){
            printf("%d ", currentNumber);
            currentNumber += 1;
        }

        printf("\n");
        blankspaces --;
    }

    return 0;
}

int main()
{
    int grades[5];
    int i;
    int lowest_grade;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Grade %d: ", i+1);
        scanf("%d", &grades[i]);
    }

    lowest_grade = grades[0];

    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------");
    printf("\n");

    printf("Your grades are: \n");

    for(i = 0; i < 5; i++)
    {
        printf("Grade %d: %d; ", i, grades[i]);
    }

    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------");
    printf("\n");

    for(i = 0; i < 5; i++)
    {
        if(grades[i] < grades[0])
        {
            lowest_grade = grades[i];
        }
    }

    printf("The lowest grade is: %d \n \n", lowest_grade);

    return 0;
}

#include <string.h>

int main()
{
    char sPhoneNumber[20];
    printf("Enter your phone number: ");
    scanf("%s", sPhoneNumber);

    int len = strlen(sPhoneNumber);
    int phone[len];

    for (int i = 0; i< len; i++)
    {
        phone[i] = sPhoneNumber[i] - '0';
    }

    int maximum_value = phone[0];

    for (int j = 1; j < len; j++)
    {
        if (maximum_value < phone[j]){
            maximum_value = phone[j];
        }
    }

    printf("The largest digit in your phone number is: %d \n \n", maximum_value);

    return 0;
}

int main()
{
    int number[20] = {1,2,3,9,0,0,4,6,6};
    int max_number = number[0];
    int max_index = 0;

    for(int i = 1; i < 10; i++)
    {
        if (max_number < number[i])
        {
            max_number = number[i];
            max_index = i;
        }
    }
    printf("The index with the largest digit is: %d \n", max_index);
}


#include <stdlib.h>

#define size 7

int main()
{
    int array[size];
    int i, max_index;

    max_index = 0;

    for (i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);

        if(max_index < array[i])
        {
            max_index = i;
        }
    }

    printf("The max index is: %d", max_index);
}


#include <stdio.h>
#include <stdlib.h>

#define size 7

int main()
{
    int weather_data[size];
    int total_weather = 0;
    int i;
    float average_temperature;
    int hottest_day_index = 0;
    int coldest_day_index = 0;
    int hottest_value, coldest_value;

    // Input first day's data
    printf("Enter weather on day 1: ");
    scanf("%d", &weather_data[0]);
    total_weather = weather_data[0];

    hottest_value = weather_data[0];
    coldest_value = weather_data[0];

    // Process remaining days
    for(i = 1; i < size; i++)
    {
        printf("Enter weather on day %d: ", i+1);
        scanf("%d", &weather_data[i]);

        total_weather += weather_data[i];

        if (weather_data[i] > hottest_value)
        {
            hottest_value = weather_data[i];
            hottest_day_index = i;   // store index
        }

        if (weather_data[i] < coldest_value)
        {
            coldest_value = weather_data[i];
            coldest_day_index = i;   // store index
        }
    }

    average_temperature = (float)total_weather / size;

    printf("\nThe average temperature is: %.2f\n", average_temperature);
    printf("The hottest day was on Day %d with %d°C\n", hottest_day_index + 1, hottest_value);
    printf("The coldest day was on Day %d with %d°C\n", coldest_day_index + 1, coldest_value);

    return 0;
}
      Write a program that creates an array of integers.
        The program should check and print if the array has at least one element with "good neighbors".
        👉 An element with "good neighbors" means:
        Its value is equal to the multiplication of both its left and right neighbors


#define size 5

int main()
{
    int neighbors[size];
    int i;
    int good_neighbors = 0;

    for(i = 0; i < size; i++)
    {
        printf("Enter neighbor #%d: ", i+1);
        scanf("%d", &neighbors[i]);
    }

    for(i = 1; i < size - 1; i++)
    {
        if (neighbors[i] == neighbors[i-1] * neighbors[i+1])
        {
            good_neighbors = 1;
            break;
        }
    }


    if (good_neighbors)
    {
        printf("There are good neighbors");
    }
    else
    {
        printf("There are no good neighbors");
    }

    printf("\n");

    return 0;
}

int main()
{
    int my2dArray[3][3] = {{1,2,3},
                            {4,5,6},
                            {7,8,9}
    };

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
           printf("%d ", my2dArray[i][j]);
        }
        printf("\n");
    }


}

#include <stdio.h>

#define SIZE 10

int main()
{
    int multiplication_table[SIZE+1][SIZE+1];
    int i, j;

    //first filling the matrix with the multiplication values

    for(i = 1; i <= SIZE; i++)
    {
        for(j = 1; j <= SIZE; j++)
        {
            multiplication_table[i][j] = i * j;
        }
    }

    //now to print this


    //use j as the outer loop

    for(j = 1; j <= SIZE; j++)
    {
        for (i = 1; i <= SIZE; i++)
        {
            printf("%2d X %2d = %3d | ", i, j, multiplication_table[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;

}

int main()
{
    int mat1[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int mat2[5] = {1,2,3,4,5,6};


    int i;
    int j;
    int k;

    for(i = 0; i < 5; i++)
    {
        printf("Adress of mat[%d]: %lu \n", i, &mat2[i]);
    }

    printf("\n");
    printf("----------------------------------------------------");
    printf("\n");


    for(j = 0; j < 2; j++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("Adress of the mat[%d][%d] = %d \n", j,k, &mat1[j][k]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------");
    printf("\n");
}

int main()
{
    int x = 4;
    int * pX = &x;

    int y = * pX;

    printf("1. %d \n", y);  //1. VALUE OF Y
    printf("2. %lu \n", pX); //2. VALUE OF POINTER X, GIVES THE MEMORY ADRESS OF X
    printf("3. %lu \n", &x); //3. VALUE OF THE MEMORY ADDRESS OF x
    printf("4. %lu \n", &pX); //4. VALUE OF THE ADDRESS OF THE POINTER x
    printf("5. %lu \n", &y);//5. VALUE OF THE MEMORY ADRESS OF y
    printf("\n");
    return 0;
}


void swap(int a, int b)
{
    int temp;
    printf("The value of a BEFORE swapping is: %d \n", a);
    printf("The value of b BEFORE swapping is: %d \n", b);

    printf("------------------------------------------------------------------- \n");

    temp = a;
    a = b;
    b = temp;

    printf("The value of a AFTER swapping is: %d \n", a);
    printf("The value of b AFTER swapping is: %d \n", b);

}


int main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    swap(num1, num2);  //THIS SWAP FUNCTION ONLY WORKS INSIDE THE SWAP FUNCTION

    printf("------------------------------------------------------------------- \n"); //HOWEVER IF YOU TRY TO PRINT THE NUMBERS OUTSIDE THE FUNCTION, YOU WILL REALISE THAT THEY ARE ACTUALLY NOT SWAPPED
    printf("In main, num1 = %d and num2 = %d\n", num1, num2); //TO AVOID THIS FROM HAPPENING, WE CAN USE POINTERS

    return 0;
}

int main()
{
    int a = 5;
    int *p = &a;

    printf("%p \n", &a);
    printf("%p \n", p);
    printf("%d \n", a);
    printf("%d \n", *p);
}

int main()
{
    int grade1 = 100;
    int grade2 = 95;

    int *pGrade1 = &grade1;
    int *pGrade2 = &grade2;

    printf("The value of Grade1 is: %d. \n", grade1);
    printf("It is store in the adress %p \n", pGrade1);

    printf("----------------------------------------------------- \n");

    printf("The value of Grade1 is: %d. \n", grade2);
    printf("It is store in the adress %p \n", pGrade2);

    return 0;
}

int main()
{
    int a, b;
    a = 5;
    b = 7;
    int *pA, *pB;

    pA = &a;
    pB = &b;

    pA = pB;
    pB = pA;

    printf("%d \n%d", *pA, *pB);

}

void findMaxMin(int a, int b)
{
    int max, min;
    if (a > b)
    {
        max = a;
        printf("The maximum value here is: %d", max);
        min = b;
        printf("The mimium value here is: %d", min);
    }
    else
    {
        max = b;
        printf("The maximum value here is: %d \n", max);
        min = a;
        printf("The mimium value here is: %d \n", min);
    }
}

int main()
{
    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    findMaxMin(num1, num2);
    return 0;
}

void findMinMaxUsingPointers(int a, int b,int *max,int *min)
{
    if (a > b)
    {
        *max = a;
        *min = b;
    }
    else
    {
        *max = b;
        *min = a;
    }
}

int main()
{
    int num1, num2;
    int max, min;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    findMinMaxUsingPointers(num1, num2, &max, &min);
    printf("The maximum value is: %d \n", max);
    printf("The minimum value is: %d \n", min);
    return 0;
}

int main()
{
    int arr1[3];
    int arr2[3];
    int i;

    printf("Enter the day: ");
    scanf(
        "%d", &arr1[0]
    );


    printf("Enter the month: ");
    scanf("%d", &arr1[1]);

    printf("Enter the year: ");
    scanf("%d", &arr1[2]);

    for(i = 0; i < 3; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("The date you entered is: %02d/%02d/%04d. \n", arr2[0], arr2[1], arr2[2]);

    return 0;
}

int main()
{
    int normal_arr[5];
    int reversed_arr[5];
    int isPalindrome = 1;

    int i, j;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &normal_arr[i]);
    }

    for(j = 0; j < 5; j++)
    {
        reversed_arr[j] = normal_arr[4 - j];
    }

    printf("The elements of the array are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", normal_arr[i]);
    }

    printf(" \n -------------------------------------------- \n");

    printf("The elements of the reversed array are: ");

    for(j = 0; j < 5; j++)
    {
        printf("%d ", reversed_arr[j]);
    }

    printf(" \n -------------------------------------------- \n");


    for (i = 0; i < 5; i++)
    {
        if (normal_arr[i] != reversed_arr[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
    {
        printf("This is a palindrome");
    }
    else
    {
        printf("This is not a palindrome");
    }
    
    printf("\n");
    return 0;
}

#define SIZE 5

int main()
{
    int new_arr[SIZE];
    int i, j;
    int reversed_array[SIZE];
    int isPalindrome = 1;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &new_arr[i]);
    }

    printf("\n ----------------------------------------------- \n");

    for(i = 0, j = 4; j >= 0; i++, j--)
    {
        reversed_array[j] = new_arr[i];
    }

    printf("The elements of the array are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", new_arr[i]);
    }

    printf(" \n -------------------------------------------- \n");

    printf("The elements of the reversed array are: ");

    for(j = 0; j < 5; j++)
    {
        printf("%d ", reversed_array[j]);
    }

    printf(" \n -------------------------------------------- \n");

    for (i = 0; i < 5; i++)
    {
        if (new_arr[i] != reversed_array[i])
        {
            isPalindrome = 0;
            break;
        }
        
    }

    if (isPalindrome == 1)
    {
        printf("This is a palindrome.");
    }
    else
    {
        printf("This is not a palindrome.");
    }

    printf(" \n");

    return 0;

}

#define SIZE 5
int main()
{
    int number_array[SIZE];
    int i;
    int largest_sum = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &number_array[i]);
    }

    printf("\n -------------------------------------------- \n");
    printf("The elements of this array are: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", number_array[i]);
    }
    printf("\n -------------------------------------------- \n");
        
    largest_sum = number_array[0]+number_array[1];

    printf("The largest sum of two adjacent elements in the array is: %d", largest_sum);
    printf("\n ------------------------------------------------- \n");

    for(i = 1; i < SIZE -1; i++)
    {
        int current_sum = number_array[i] + number_array[i+1];
        if (current_sum > largest_sum)        
        {
            largest_sum = current_sum;
        }
    }

    printf("The largest sum of two adjacent elements in the array is: %d", largest_sum);
    printf("\n");

    return 0;

}

#include <stdio.h>
#define SIZE 5

int main()
{
    int number_array[SIZE];
    int i;
    int largest_sum;

    // Input
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &number_array[i]);
    }

    // Print array
    printf("\n -------------------------------------------- \n");
    printf("The elements of this array are: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", number_array[i]);
    }
    printf("\n -------------------------------------------- \n");

    // Initialize with the first valid (i-1, i+1) pair → i = 1
    largest_sum = number_array[0] + number_array[2];

    // Loop through valid i values
    for(i = 2; i < SIZE - 1; i++)
    {
        int current_sum = number_array[i-1] + number_array[i+1];
        if(current_sum > largest_sum)
        {
            largest_sum = current_sum;
        }
    }

    // Print result
    printf("The largest sum of (i-1) and (i+1) elements is: %d", largest_sum);
    printf("\n ------------------------------------------------- \n");

    return 0;
}

*/


/*
Write a program that creates an array of integers.
The user is going to specify the values for the array.
Check if the array is:

"Really Sorted" [1, 2, 5, 7, 10]

"Sorted" [1, 2, 2, 5, 10]
 
"Not Sorted" [1, 2, 5, 3, 10]

#define SIZE 5

int main()
{
    int arr[SIZE];
    int i;
    int isSorted = 1;
    int isReallySorted = 1;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE - 1; i++)
    {
        if(!(arr[i] <= arr[i + 1]))
        {
            isSorted = 0;
            isReallySorted = 0;
            break;
        }        

        if (arr[i] == arr[i+1])
        {
            isReallySorted = 0;
        }
        }

        printf(" \n --------------------------- \n");
        if (isSorted == 1)
        {
            if(isReallySorted == 1)
            {
                printf("This array is REALLY sorted");
            }
            else
            {
                printf("This array is sorted.");
            }
        }

        if (isSorted == 0)
        {
            printf("This array is NOT sorted.");
        }

    printf("\n");
    
    return 0;
}

//print and count all the unique elements in the array

int main()
{
    int arr[5];
    int i, j;
    int UniqueCounter = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n --------------------------------------------- \n");
    printf("The number of unique elements are: ");

    for(i = 0; i < 5; i++)
    {
        int isUnique = 1;

        for(j = 0; j < 5; j ++)
        {
            if(i != j && arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }
        
        if(isUnique)
        {
            printf("%d ", arr[i]);
            UniqueCounter ++;
        }
    }
    printf("\n --------------------------------------------- \n");

    printf("The number of unique elements are: %d", UniqueCounter);

    printf("\n --------------------------------------------- \n");

        printf("The non-unique elements are: ");
    for(i = 0; i < 5; i++)
    {
        int count = 0;
        for(j = 0; j < 5; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > 1)
        {
            // print only first occurrence
            int alreadyPrinted = 0;
            for(j = 0; j < i; j++)
            {
                if(arr[i] == arr[j])
                {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if(!alreadyPrinted)
                printf("%d ", arr[i]);
        }
    }
    printf("\n --------------------------------------------- \n");

}

#include <stdio.h>

int main()
{
    int arr[5];
    int i, j;
    int NonUniqueCounter = 0;
    int alreadyPrinted[5] = {0}; // flags for printed values

    // Input
    for(i = 0; i < 5; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n------------------------------------------------------------------------\n");
    printf("The elements of this array that are not unique are: ");

    // Check for non-unique values
    for(i = 0; i < 5; i++)
    {
        int isNonUnique = 0;
        if(alreadyPrinted[i] == 0)
        {
            for(j = 0; j < 5; j++)
            {
                if(i != j && arr[i] == arr[j])
                {
                    isNonUnique = 1;
                    break;
                }
            }
            if(isNonUnique)
            {
                printf("%d ", arr[i]);
                NonUniqueCounter++;
                alreadyPrinted[i] = 1;
                // Mark all occurrences as printed
                for(j = i + 1; j < 5; j++)
                {
                    if(arr[i] == arr[j])
                        alreadyPrinted[j] = 1;
                }
            }
        }
    }

    printf("\n------------------------------------------------------------------------\n");
    printf("The number of non-unique elements in this array is: %d\n", NonUniqueCounter);

    return 0;
}



int main()
{
    int arr[i];
    int i, j;
    int NotUniqueCounter = 0;
    int alreadyPrinted[5] = {0};
}

int main()
{
    int arr[5];
    int i;
    int first;

    for(i = 0; i < 5; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    printf("The elements of the original array are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    first = arr[0];

    for(i = 0; i < 5; i++)
    {
        if(i < 4)
        {
            arr[i] = arr[i + 1];
        }
        if(i == 4)
        {
            arr[4] = first;
        }
    }

    printf("The elements of the new array are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n ---------------------------------------- \n");

}


#define SIZE 5

int main()
{
    int arr[SIZE];
    int i;
    int first;
    int num = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    printf("The elements of the original array are: ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    printf("Enter the number of positions you want to shift your array: ");
    scanf("%d", &num);

    for (int j = 0; j < num; j++)
    {
        first = arr[0];
        for(i = 0; i < SIZE; i++)
        {
            if(i < SIZE - 1)
            {
                arr[i] = arr[i + 1];
            }
            else
            {
                arr[i] = first;
            }
        }
    }

    printf("\n ---------------------------------------- \n");

    printf("The elements of the new array are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    return 0;
}

#define SIZE 5

int main()
{
    int arr[SIZE];
    int i;
    int last;
    int num = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    printf("The elements of the original array are: ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    printf("Enter the number of positions you want to shift your array: ");
    scanf("%d", &num);
    for(int j = 0; j < num; j++)
    {
        last = arr[SIZE - 1];
        for(i = SIZE - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }


    printf("\n ---------------------------------------- \n");

    printf("The elements of the new array are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n ---------------------------------------- \n");

    return 0;
}

#define SIZE 5
int main()
{
    int arr[SIZE];
    int i, j;
    int num;
    int last = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n -------------------------------------------------------------- \n");
    printf("The elements of the original array are: ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n -------------------------------------------------------------- \n");

    printf("Enter the number of positions to shift the array: ");
    scanf("%d", &num);

    num = num % SIZE;

    for(j = 0; j < num; j++)
    {
        last = arr[SIZE - 1];
        for(i = SIZE - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("\n -------------------------------------------------------------- \n");

    printf("The elements of the new array are: ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n -------------------------------------------------------------- \n");

    return 0;

}

#include <math.h>

#define SIZE 5
int main()
{
    int arr[SIZE];
    int index1 = 1; int index2 = 2;
    int i, j;
    int minSum = 0;
    int currentSum = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    minSum = arr[0] + arr[1];
    int index1Value = arr[0];int index2Value = arr[1];

    printf("\n -------------------------------------------------------------- \n");
    printf("The elements of the original array are: ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n -------------------------------------------------------------- \n");

    for(i = 0; i < SIZE; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
            currentSum = arr[i] + arr[j];
            if (abs(currentSum) < abs(minSum))
            {
                minSum = currentSum;
                index1 = i+1;
                index2 = j+1;
                index1Value = arr[i];
                index2Value = arr[j];
            }
            
        }
    }
    printf("The sum of the two elements (Index %d: %d, Index %d: %d) that are closest to zero is: %d",
       index1, index1Value, index2, index2Value, minSum);
    printf("\n -------------------------------------------------------------- \n");

    return 0;
}


#define SIZE 5
int SumOfArrays(int *pArr, int size)
{
    int i;
    int sum;
    
    for(i = 0; i < size; i++)
    {
        sum += pArr[i];
    }

    return sum;
}

int main()
{
    int arr[SIZE] = {1,2,3,4,5};
    int result = 0;
    result = SumOfArrays(arr, SIZE);

    printf("The sum of the elements of this array are: %d \n", result);

    return 0;
}

//reset all the elements of an array to zero

#define SIZE 5

void ResetArray(int *pArr, int size)
{
    int i;
    
    for(i = 0; i < size;i++)
    {
        pArr[i] = 0;
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ", pArr[i]);
    }

}   

int main()
{
    int arr[SIZE] = {1,2,3,4,5};
    int original_arr[SIZE];

    for(int i = 0; i < 5; i++)
    {
        original_arr[i] = arr[i];
    }

    printf("The original array is: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", original_arr[i]);
    }

    printf("\n ------------------------------- \n");

    printf("The reset array is: ");
    ResetArray(arr, SIZE);

    printf("\n ------------------------------- \n");

    return 0;
}

int main()
{
    int i;
    char firstName[10] = "Jashua";
    char lastName[10] = "Anish";

    printf("Your name is: ");

    for(i = 0; firstName[i] != '\0'; i++)
    {
        printf("%c", firstName[i]);
    }
    
    printf(" ");
    
    for(i = 0; lastName[i] != '\0'; i++)
    {
        printf("%c", lastName[i]);
    }

    printf("\n");
    return 0;
}

int LengthOfStrings(char *str)
{
    int i;
    int length = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')  // count only non-space, non-newline
        {
            length++;
        }

    }

    return length;
}


int main()
{
    char fullName[30];
    printf("Enter the full name: ");
    gets(fullName);

    int len = LengthOfStrings(fullName);

    printf("The length of the characters in your name is: %d", len);

    printf("\n");
    return 0;

}
int main()
{
    char str[100] = "Hello my name is Jashua    Anish     ";
    int i;
    int word_count = 0;
    int inWord = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && inWord == 0)
        {
            word_count++;
            inWord = 1;
        }
        else if(str[i] == ' ')
        {
            inWord = 0;
        }
    }

    printf("The number of words in this string are: %d\n", word_count);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char word[20] = "jashua";
    char reverse_word[20];
    int i, j;
    int len = 0;

    // Find length of the word
    while(word[len] != '\0') {
        len++;
    }

    // Reverse the word
    for(i = 0, j = len - 1; i < len; i++, j--) {
        reverse_word[j] = word[i];
    }
    reverse_word[len] = '\0'; // Null-terminate the reversed string

    printf("Reversed: %s\n", reverse_word);

    if(strcmp(reverse_word, word) == 0)
    {
        printf("This is a palindrome\n");
    }
    else
    {
        printf("This is NOT a palindrome\n");
    }

    return 0;
}


char *StrCopy(char *string1, char *string2)
{
    int i;

    for(i = 0; string1[i] != '\0'; i++)
    {
        string2[i] = string1[i];
    }
    string2[i] = '\0';
    return string2;
}


int main()
{
    char name[] = "Jashua Anish";
    char CopyOfName[30];
    char *temp;
    temp = StrCopy(name, CopyOfName);

    printf("%s", CopyOfName);
}

int fun(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return 1 + fun(n - 1);
    }
}


int main()
{
    int num = 1000;
    int result = fun(num);

    printf("%d", result);
}

int Factorial(int n)
{
    if (n == 0 || n == 1)
    return 1;
    else
    {
        return n * Factorial(n - 1);
    }
}

int main()
{
    int number = 0;
    int result = Factorial(number);

    printf("%d", result);
}

int SumOfAllNonNegativeIntegers(int n)
{
    if (n == 0 || n < 0)
    {
        return 0;
    }

    if (n > 0)
    {
        if (n == 1)
        return 1;
        else
        {
            return n + SumOfAllNonNegativeIntegers(n - 1);
        }
    }
}


int main()
{
    int number = 10;
    int result = SumOfAllNonNegativeIntegers(number);

    printf("%d", result);
}

int UniqueGridPaths(int n, int m)
{
    if(n == 1 || m == 1)
    {
        return 1;
    }
    else
    {
        return UniqueGridPaths(n, m - 1) + UniqueGridPaths(n - 1, m);
    }
}

int main()
{
    int result = UniqueGridPaths(3,3);
    printf("%d \n", result);
}

*/

//C program to calculate the number of ways n number of objects can be parted where 
//maximum number of objects each part can hold is m

//eg:
// if  n = 6, m = 4
// Visualization

/*
         0000 + 00                        -------PARTITION 1
         0000 + 0 + 0                     -------PARTITION 2
         000 + 000                        -------PARTITION 3
         000 + 00 + 0                     -------PARTITION 4
         000 + 0 + 0 + 0                  -------PARTITION 5
         00 + 00 + 00                     -------PARTITION 6 
         00 + 00 + 0 + 0                  -------PARTITION 7
         00 + 0 + 0 + 0 + 0               -------PARTITION 8
         0 + 0 + 0 + 0 + 0 + 0            -------PARTITION 9
*/

/*
int CountPartitions(int n, int m) //where n = The number of objects and m = the maximum number of objects each partition can hold
{
    if (n == 0 )
    {
        return 1;
    }
    else if (m == 0 || n < 0)
    {
        return 0;
    }
    else
    {
        return CountPartitions(n - m, m) + CountPartitions(n, m - 1); 
    }
}

int main()
{
    int result = CountPartitions(6,4);
    printf("%d \n", result);
}

//iterative method

int main()
{
    int i;
    int num = 5;
    int sum = 0;

    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("%d", sum);
}

int ArithmeticProgression(int num)
{
    if (num == 0)
    return 0;
    else
    {
        return num + ArithmeticProgression(num - 1);
    }
}


int main()
{
    int number = 3;
    int result = ArithmeticProgression(number);

    printf("%d", result);
    return 0;
}

int Factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}

int main()
{
    int result = Factorial(5);
    printf("%d", result);
    return 0;
}

int FibonacciSeries(int index)
{
    if(index == 0)
    {return 0;}
    else if (index == 1)
    {return 1;}
    else
    {
        return FibonacciSeries(index - 1) + FibonacciSeries(index - 2); 
    }
}

int main()
{
    int result = FibonacciSeries(6);
    printf("%d", result);
}


int SumOfDigits(int number)
{
    if(number == 0)
    return 0;
    else
    return number % 10 + SumOfDigits(number / 10);   
}

int main()
{
    int result = SumOfDigits(1);
    printf("%d", result);
    return 0;
}

int CountOfDigits(int number)
{   
    int counter = 0;
    if(number <= 9)
    {
    return 1;
    }
    else
    {
        return 1 + CountOfDigits(number / 10);
    }
}

int main()
{
    int result = CountOfDigits(123456789);
    printf("%d", result);
}


int TotalNumLessThanNum(int num)
{
    int inputUser;
    printf("Please enter your number: ");
    scanf("%d", &inputUser);

    if(inputUser == -1)
    return 0;
    if(inputUser < num)
    return 1 + TotalNumLessThanNum(num);
    else
    return TotalNumLessThanNum(num);

}

int main()
{
    int num = 4;
    int smallernumbers = TotalNumLessThanNum(num);
      printf("You entered %d numbers less than %d.\n", smallernumbers, num);
    return 0;
}

*/

/*

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfect(int num) {
    if (num < 2 || num % 2 != 0) return false; // Known perfect numbers are even

    int sum = 1;
    int sqrtNum = (int)sqrt(num);

    for (int i = 2; i <= sqrtNum; i++) {
        if (num % i == 0) {
            sum += i;
            int complement = num / i;
            if (complement != i) {
                sum += complement;
            }
        }
    }

    return sum == num;
}

int main() {
    int limit;

    printf("Enter the upper limit to find perfect numbers: ");
    scanf("%d", &limit);

    printf("Perfect numbers up to %d are:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}


*/

/*
int strLen(char *str)
{
    int i;
    int length = 0;  // Initialize to 0
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char string[100];   // Use char array
    printf("Enter your string: ");
    gets(string ); // Safe input

    int len = strLen(string);

    printf("The number of characters in the string are: %d\n", len);
    return 0;
}

#include <stdio.h>

int TotalNumLessThanNum(int num)
{
    int inputUser;
    printf("Please enter your number (-1 to stop): ");
    scanf("%d", &inputUser);

    if (inputUser == -1)   // base case
        return 0;

    if (inputUser < num)
        return 1 + TotalNumLessThanNum(num);  // count + recurse
    else
        return TotalNumLessThanNum(num);      // just recurse
}

int main()
{
    int num = 4;
    int smallernumbers = TotalNumLessThanNum(num);

    printf("You entered %d numbers less than %d.\n", smallernumbers, num);

    return 0;
}

int TotalOccurences(char character)
{
    char UserInput;
    printf("Enter your character: ");
    scanf("%c", &UserInput);

    if(UserInput == '$')
    {
        return 0;
    }


    if(UserInput == character)
    {
        return 1 + TotalOccurences(character);
    }
    else
    {
        return TotalOccurences(character);
    }
}

int main()
{
    int result = TotalOccurences('a');
    printf("%d", result);
}

int EvenNumbers()
{
  int UserInput;
  printf("Enter your numbers: ");
  scanf("%d", &UserInput);

  if(UserInput == -1)
  {
    return 0;
  }
  if(UserInput % 2 == 0)
  {
      return 1 + EvenNumbers();
  }
  else
  {
    return EvenNumbers();
  }
}


int main()
{
int result = EvenNumbers();
printf("The number of even numbers are: %d", result);
}

int SumOfAllEvenNumbers()
{
    int UserInput;
    printf("Enter your numbers: ");
    scanf("%d", &UserInput);

    if(UserInput == -1)
    {
        return 0;
    }

    if(UserInput % 2 == 0)
    {
        return UserInput + SumOfAllEvenNumbers();
    }
    else
    {
        return SumOfAllEvenNumbers();
    }
}

int main()
{
    int result = SumOfAllEvenNumbers();
    printf("The sum of all the even numbers in the sequence are: %d", result);

    return 0;
}
#include <stdio.h>

void PrintingNumbersUptoN(int number)
{
    if (number == 0)
    {
        return;  // base case
    }// recursive call
    else
    {
    PrintingNumbersUptoN(number - 1);
    printf("%d ", number);   
    }          // print after recursion
}


int main()
{
    PrintingNumbersUptoN(10);
    return 0;
}

void PrintNto1andViceVersaWithoutDupicates(int num)
{
    if (num == 1)
    {
        printf("%d  ", num);
    }
    else
    {
        printf("%d  ", num);
        PrintNto1andViceVersaWithoutDupicates(num - 1);
        printf("%d  ", num);
    }
}  


int main()
{
    PrintNto1andViceVersaWithoutDupicates(10);
}

int LucasSequence(int num)
{
    if (num == 0)
    {
        return 2;
    }
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return LucasSequence(num - 1) + LucasSequence(num - 2);
    }
}

int LucasIterative(int num)
{
    int i;
    int current = 1;
    int previous = 2;
    int temp;

    if (num == 0)
    {
        return previous;
    }
    if (num == 1)
    {
        return current;
    }
    for(i = 2; i <= num; i++)
    {
        temp = current + previous;
        previous = current;
        current = temp;
    }

    return current;
}

int main()
{   
    int num;
    printf("Enter the index position at which you want to find the Lucas value: ");
    scanf("%d", &num);

    int result = LucasIterative(num);

    printf("The Lucas Value at index %d = %d \n", num, LucasIterative(num));
    return 0;
}

int FindMaximumNumberInSquence(int num)
{
    int UserInput;
    int MaximumSoFar;

    printf("Enter your number: ");
    scanf("%d", &UserInput);

    if(num == 1)
    return UserInput;
    if(num > 1)
    {
        MaximumSoFar = FindMaximumNumberInSquence(num - 1);
        if(UserInput > MaximumSoFar)
        return UserInput;
        return MaximumSoFar;
    }
}

int main()
{
    int num;
    printf("How many elements in this sequence: ");
    scanf("%d", &num);
    int result = FindMaximumNumberInSquence(num);
    printf("The maximum number in the sequence is: %d", result);
}

int MinimumNumberInTheSquence(int num)
{
    int UserInput;
    int MinimumSoFar;
    int i;

    printf("Enter your number: ");
    scanf("%d", &UserInput);

    if(num == 1)
    return UserInput;
    if(num > 1)
    {
        MinimumSoFar = MinimumNumberInTheSquence(num - 1);
        if(UserInput < MinimumSoFar)
        return UserInput;
        return MinimumSoFar;
    }
}

int main()
{
    int number;
    printf("Enter the number of elements in this sequence: ");
    scanf("%d", &number);
    int result = MinimumNumberInTheSquence(number);

    printf("The minimum value in this sequence is: %d", result);
}

int PeilNumbers(int num)
{
    if (num == 0)
    return 0;
    if (num == 1)
    return 1;
    return 2 * PeilNumbers(num - 1) + PeilNumbers(num - 2);
}

int PeilNumbersIterative(int num)
{
    int i;
    int current = 1;
    int previous = 0;
    int peil_number;

    if(num == 0)
    return previous;
    if(num == 1)
    return current;
    for(i = 2; i <= num; i++)
    {
        peil_number = 2 * current + previous;
        previous = current;
        current = peil_number;
    }
    return current;
}

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    int result = PeilNumbers(number);
    int IterativeResult = PeilNumbersIterative(number);

    printf("The recursive solution for the peil number at index %d is: %d", number, PeilNumbers(number));
    printf("\n ----------------------------------------------------------------------------------------------- \n");
    printf("The iterative solution for the peil number at index %d is: %d", number, PeilNumbersIterative(number));
    printf("\n");
    
    return 0;
}

int sumOfDigits(int number)
{
    if (number == 0)
        return 0;
    return (number % 10) + sumOfDigits(number / 10);
}

int isSumOfDigitsEven(int number)
{
    int sum = sumOfDigits(number);
    if (sum % 2 == 0)
        return 1;  // even
    return 0;  // odd
}


int main()
{
    int result = isSumOfDigitsEven(125);
    printf("%d", result);
}

// MORE OPTIMISED SOLUTION

int isSumOfDigitsEven(int number)
{
    if (number < 10)
        return number % 2 ? 0 : 1;
    return number % 10 % 2 ? !isSumOfDigitsEven(number / 10) : isSumOfDigitsEven(number/10);
}


int main()
{
    int result = isSumOfDigitsEven(124);
    printf("%d", result);
}

int isSumOfDigitsOdd(int number)
{
    if(number < 10)
        return number % 2 ? 1 : 0;
    return number % 10 % 2 ? !isSumOfDigitsOdd(number / 10) : isSumOfDigitsOdd(number / 10);
}
*/

/*
Write a recursive function that gets some natural number n.

Return 1 if every digit at an even position has an even value as well as every digit at an odd position has an odd value.

Return 0 otherwise.

//MY ASS APPROACH

int checkEvenPositions(int number)
{
    if(number == 0)
        return 1;
    
    int digit = number % 10;

    if(digit % 2 != 0)
        return 0;
    return checkEvenPositions(number/100);
}

int checkOddPositions(int number)
{
    if(number < 10)
    return 1;

    number = number /10;
    int digit = number % 10;

    if(digit % 2 == 0)
        return 0;
    return checkOddPositions(number/100);
}

int RecursionBoss1(int number)
{
    return (checkEvenPositions(number) && checkOddPositions(number)) ? 1 : 0;
}

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    int result = RecursionBoss1(number);

    if(result == 1)
    {
        printf("The number %d has even digits and odd digits at its respective even and odd positions", number);
    }
    else
    {
        printf("The condition is not satisfied. Hence, the number %d does not come under the given category.", number);
    }

    printf("\n");
    return 0;
}

void PrintSequenceOfNum1sandNum2s(int total, int num1, int num2)
{
    if(total == 0)
        return;
    else
    {
        printf("%d", num1);
        PrintSequenceOfNum1sandNum2s(total - 1, num1, num2);
        printf("%d", num2);
    }
}

int main()
{
    int total, num1, num2;

    printf("Enter the number of times num1 and num2 needs to be printed: ");
    scanf("%d", &total);

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    PrintSequenceOfNum1sandNum2s(total, num1, num2);

    return 0;
}

void PrintSequenceOfChar1and2XChar2(int total, char char1, char char2)
{
    if(total == 0)
        return;
    else
    {
        printf("%c", char1);
        PrintSequenceOfChar1andChar2(total - 1, char1, char2);
        printf("%c", char2);
        printf("%c", char2);
    }
}

int main()
{
    int total;
    char c1, c2;

    printf("Enter the number of times num1 and num2 needs to be printed: ");
    scanf("%d", &total);

    printf("Enter char1: ");
    scanf(" %c", &c1);

    printf("\n");

    printf("Enter char2: ");
    scanf(" %c", &c2);

    PrintSequenceOfChar1andChar2(total, c1, c2);
    return 0;

}

void SequenceOfCharacter1andCharacter2InUpperCase(int total, char char1, char char2)
{
    char UpperCaseChar2;

    if(char2 >= 'a' && char2 <= 'z')
    {
        UpperCaseChar2 = char2 - 'a' + 'A';
    }
    else
    {
        UpperCaseChar2 = char2;
    }

    if(total >= 1)
    {
        printf("%c", char1);
        SequenceOfCharacter1andCharacter2InUpperCase(total - 1, char1, char2);
        printf("%c", UpperCaseChar2);
    }
}

int main()
{

    int total;
    char c1, c2;

    printf("Enter the number of times num1 and num2 needs to be printed: ");
    scanf("%d", &total);

    printf("Enter char1: ");
    scanf(" %c", &c1);

    printf("\n");

    printf("Enter char2: ");
    scanf(" %c", &c2);

    SequenceOfCharacter1andCharacter2InUpperCase(total, c1, c2);

    return 0;
}


int RecursiveAscending(int number)
{
    if(number < 10)
    {
        return 1;
    }
    
    int current_digit = number % 10;
    int next_digit = number / 10 % 10;

    return(current_digit >= next_digit) ? RecursiveAscending(number/10): 0;

}

int RecursiveDescending(int number)
{
    if(number < 10)
    {
        return 1;
    }

    int current_digit = number % 10;
    int next_digit = number / 10 % 10;

    if(current_digit <= next_digit)
    {
        return RecursiveDescending(number / 10);
    }
    else
    {
        return 0;
    }
}

int checkRecursiveAscendingOrDescending(int number)
{
    int Ascending = RecursiveAscending(number);
    int Descending = RecursiveDescending(number);

    if(!(Descending || Ascending))
    {
        return 0;
    }
    else if(Ascending)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int result = checkRecursiveAscendingOrDescending(123456789);
    printf("%d", result);
}

int TotalOccurencesOfDigits(int number, int index)
{
    if(number == 0)
    {return 0;}
    
    
    int digit = number % 10;
    if (digit == index)
    {
        return 1 + TotalOccurencesOfDigits(number/10,index);
    }
    else
    {
        return TotalOccurencesOfDigits(number/10, index);
    }
}

int checkIfTotalOccurencesAreEven(int number, int index)
{
    int EvenOrOdd = TotalOccurencesOfDigits(number, index);

    return EvenOrOdd % 2 == 0 ? 1 : 0;
}

int main()
{
    int result = checkIfTotalOccurencesAreEven(100, 0);
    printf("%d", result);
}

//NOW THE OPTIMIZED WAY

int CheckEvenOrOddOccurences(int number, int digit)
{
    if(number < 10) {
        if (number != digit)
            return 1;
        else
            return 0;
    }
    
    if(number % 10 != digit)
        return CheckEvenOrOddOccurences(number/10, digit);
    else
        return !CheckEvenOrOddOccurences(number/10, digit);
}

int main()
{
    int result = CheckEvenOrOddOccurences(10000,0);
    printf("%d", result);
}

struct point {
    int x;
    int y;
};


int main()
{
    struct point p1;
    printf("Enter your x coordinate: ");
    scanf("%d", &p1.x);
    printf("Enter your y coordinate: ");
    scanf("%d", &p1.y);

    printf("The point p1 is at coordinates (%d, %d)", p1.x, p1.y);
    printf("\n");
    return 0;
}

typedef struct date{
    int day;
    int month;
    int year;
}Date;

Date ReturnInputDate()
{
    Date dt;
    printf("Enter the day: ");
    scanf("%d", &dt.day);

    printf("Enter the month: ");
    scanf("%d", &dt.month);

    printf("Enter the year: ");
    scanf("%d", &dt.year);

    return dt;
}

Date ReturnNextDate(Date dt)
{
    if  (dt.month == 1 || dt.month == 3 || dt.month == 5 || dt.month == 7 || dt.month == 8 || dt.month == 10)
    {
        if(dt.day == 31)
        {    dt.day = 1;
            dt.month++;}
        else
        {    dt.day++;}
    }
    else if(dt.month == 4 || dt.month == 6 || dt.month == 9 || dt.month == 11)
    {
        if(dt.day == 30)
        {
            dt.day = 1;
            dt.month++;
        }
        else
        {
            dt.day++;
        }
    }
    else if(dt.month == 12)
    {
        if(dt.day == 31)
        {
            dt.day = 1;
            dt.month = 1;
            dt.year++;
        }
        else
        {
            dt.day++;
        }
    }
    else if(dt.month == 2)
    {
        if((dt.day == 28 && (dt.year % 400 == 0 || (dt.year % 4 == 0 && dt.year % 100 != 0))))
  {
            dt.day = 29;
        }
        else if(dt.day == 28 || dt.day == 29)
        {
            dt.day = 1;
            dt.month++;
        }
        else
        {
            dt.day++;
        }
    }

    return dt;
}

void PrintDate(Date dt)
{
    printf("The date is (%d/%d/%d)", dt.day, dt.month, dt.year);
}

int main()
{
    Date CurrentDate, NextDate;
    CurrentDate = ReturnInputDate();
    NextDate = ReturnNextDate(CurrentDate);
    PrintDate(NextDate);
}

//Initializing  a Struct
typedef struct point{
    int x;
    int y;
}Point;



Point ReceivePointVariable()
{
    Point p1;

    printf("Enter the x coordinate of the point: ");
    scanf("%d", &p1.x);

    printf("Enter the y coordinate of the point: ");
    scanf("%d", &p1.y);

    return p1;
}

void PrintInformation(Point p1)
{
    printf("The points are at the coordinates (%d, %d).", p1.x, p1.y);
}

int main()
{
    Point p1;
    p1 = ReceivePointVariable();
    PrintInformation(p1);

    return 0;
}

typedef struct point{
    int x;
    int y;
}Point;

int main()
{
    Point point_array[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter x-coordinate of point #%d: ", i+1);
        scanf("%d", &point_array[i].x);

        printf("Enter x-coordinate of point #%d: ", i+1);
        scanf("%d", &point_array[i].y);
    }

    for(i = 0; i < 5; i++)
    {
        printf("The coordinates of point #%d is (%d, %d). \n", i+1, point_array[i].x, point_array[i].y);
    }
}

typedef struct point {
    int x;
    int y;
} Point;

int main()
{
    Point point_array[2];
    int i;

    for(i = 0; i < 2; i++)
    {
        printf("Enter x-coordinate of point #%d: ", i+1);
        scanf("%d", &point_array[i].x);

        printf("Enter y-coordinate of point #%d: ", i+1);
        scanf("%d", &point_array[i].y);
    }

    if(point_array[0].x == point_array[1].x && point_array[0].y == point_array[1].y)
    {
        printf("They are equal points.\n");
    }
    else
    {
        printf("They are not equal points.\n");
    }

    return 0;
}

*/
/*
#include <stdio.h>

typedef struct rational {
    int numerator;
    int denominator;
} Rational;

// Input functions
Rational ReceiveRational(char name) {
    Rational r;
    printf("Enter numerator for number %c: ", name);
    scanf("%d", &r.numerator);

    printf("Enter denominator for number %c: ", name);
    scanf("%d", &r.denominator);

    return r;
}

// Increment
Rational Increment(Rational a) {
    Rational result;
    result.numerator = a.numerator + a.denominator;
    result.denominator = a.denominator;
    return result;
}

// Decrement
Rational Decrement(Rational a) {
    Rational result;
    result.numerator = a.numerator - a.denominator;
    result.denominator = a.denominator;
    return result;
}

// Addition
Rational Addition(Rational a, Rational b) {
    Rational result;
    result.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    return result;
}

// Subtraction
Rational Subtraction(Rational a, Rational b) {
    Rational result;
    result.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    return result;
}

// Multiplication
Rational Multiplication(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    return result;
}

// Division
Rational Division(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    return result;
}

// Comparisons
void BiggerThan(Rational a, Rational b) {
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;

    if (valA > valB)
        printf("%d/%d is bigger than %d/%d\n", a.numerator, a.denominator, b.numerator, b.denominator);
    else if (valA < valB)
        printf("%d/%d is bigger than %d/%d\n", b.numerator, b.denominator, a.numerator, a.denominator);
    else
        printf("%d/%d is equal to %d/%d\n", a.numerator, a.denominator, b.numerator, b.denominator);
}

void SmallerThan(Rational a, Rational b) {
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;

    if (valA < valB)
        printf("%d/%d is smaller than %d/%d\n", a.numerator, a.denominator, b.numerator, b.denominator);
    else if (valA > valB)
        printf("%d/%d is smaller than %d/%d\n", b.numerator, b.denominator, a.numerator, a.denominator);
    else
        printf("%d/%d is equal to %d/%d\n", a.numerator, a.denominator, b.numerator, b.denominator);
}

void isEqualTo(Rational a, Rational b) {
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;

    if (valA == valB)
        printf("%d/%d is equal to %d/%d\n", a.numerator, a.denominator, b.numerator, b.denominator);
    else
        printf("%d/%d is not equal to %d/%d\n", a.numerator, a.denominator, b.numerator, b.denominator);
}

// Utility function to print Rational
void PrintRational(Rational r) {
    printf("%d/%d\n", r.numerator, r.denominator);
}

int main() {
    Rational A = ReceiveRational('A');
    Rational B = ReceiveRational('B');

    printf("\nIncrement A: "); PrintRational(Increment(A));
    printf("Decrement A: "); PrintRational(Decrement(A));
    printf("Increment B: "); PrintRational(Increment(B));
    printf("Decrement B: "); PrintRational(Decrement(B));

    printf("\nAddition: "); PrintRational(Addition(A, B));
    printf("Subtraction: "); PrintRational(Subtraction(A, B));
    printf("Multiplication: "); PrintRational(Multiplication(A, B));
    printf("Division: "); PrintRational(Division(A, B));

    printf("\nComparisons:\n");
    BiggerThan(A, B);
    SmallerThan(A, B);
    isEqualTo(A, B);

    return 0;
}
*/

//STRUCT BOSS PROBLEM 

/*
Design and develop a rational number struct, called Rational.

A rational number consists of two parts:
numerator
denominator

For example: 1/3, 2/5, 7/3, …

Provide the following functions for Rational:

increment decrement addition subtraction multiplication division smaller bigger equal not-equal


#include <stdio.h>

typedef struct rational{
    int numerator;
    int denominator;
}Rational;

Rational ReceiveRationalNumberA()
{
    Rational a;
    printf("Enter numerator for number 1: ");
    scanf("%d", &a.numerator);
    
    printf("Enter denominator for number 1: ");
    scanf("%d", &a.denominator);

    return a;
}

Rational ReceiveRationalNumberB()
{
    Rational b;
    printf("Enter numerator for number 2: ");
    scanf("%d", &b.numerator);
    
    printf("Enter denominator for number 2: ");
    scanf("%d", &b.denominator);

    return b;
}

Rational Increment(Rational a)
{
    Rational result;
    result.numerator = a.numerator + a.denominator;
    result.denominator = a.denominator;
    printf("Incremented Value: %d/%d\n", result.numerator, result.denominator);
    return result;
}

Rational Decrement(Rational a)
{
    Rational result;
    result.numerator = a.numerator - a.denominator;
    result.denominator = a.denominator;
    printf("Decremented value: %d/%d\n", result.numerator, result.denominator);
    return result;
}

Rational Addition(Rational a, Rational b)
{
    Rational result;
    result.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    printf("Sum: %d/%d\n", result.numerator, result.denominator);
    return result;
}

Rational Subtraction(Rational a, Rational b)
{
    Rational result;
    result.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    printf("Difference: %d/%d\n", result.numerator, result.denominator);
    return result;
}

Rational Multiplication(Rational a, Rational b)
{
    Rational result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    printf("Product: %d/%d\n", result.numerator, result.denominator);
    return result;
}

Rational Division(Rational a, Rational b)
{
    Rational result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    printf("Division: %d/%d\n", result.numerator, result.denominator);
    return result;
}

Rational BiggerThan(Rational a, Rational b)
{
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;
    if(valA > valB)
    {
        printf("Rational number (%d/%d) is greater than (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    else if(valA < valB)
    {
        printf("Rational number (%d/%d) is greater than (%d/%d).\n", b.numerator,b.denominator,a.numerator,a.denominator);
    }
    else
    {
        printf("Rational number (%d/%d) is equal to (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    Rational dummy = {0,1}; return dummy;  // to satisfy return type
}

Rational SmallerThan(Rational a, Rational b)
{
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;
    if(valA < valB)
    {
        printf("Rational number (%d/%d) is smaller than (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    else if(valA > valB)
    {
        printf("Rational number (%d/%d) is smaller than (%d/%d).\n", b.numerator,b.denominator,a.numerator,a.denominator);
    }
    else
    {
        printf("Rational number (%d/%d) is equal to (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    Rational dummy = {0,1}; return dummy;
}

Rational isEqualTo(Rational a, Rational b)
{
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;
    if(valA == valB)
    {
        printf("Rational number (%d/%d) is equal to (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    else
    {
        printf("Rational number (%d/%d) is not equal to (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    Rational dummy = {0,1}; return dummy;
}

Rational isNotEqualTo(Rational a, Rational b)
{
    double valA = (double)a.numerator / a.denominator;
    double valB = (double)b.numerator / b.denominator;
    if(valA != valB)
    {
        printf("Rational number (%d/%d) is not equal to (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    else
    {
        printf("Rational number (%d/%d) is equal to (%d/%d).\n", a.numerator,a.denominator,b.numerator,b.denominator);
    }
    Rational dummy = {0,1}; return dummy;
}

int main()
{
    Rational A = ReceiveRationalNumberA();
    Rational B = ReceiveRationalNumberB();

    printf("\n --------------------------------------------------------------- \n");

    Increment(A);

    printf("\n --------------------------------------------------------------- \n");

    Increment(B);

    printf("\n --------------------------------------------------------------- \n");

    Addition (A,B);

    printf("\n --------------------------------------------------------------- \n");

    Subtraction(A, B);

    printf("\n --------------------------------------------------------------- \n");

    Multiplication(A, B);

    printf("\n --------------------------------------------------------------- \n");

    Division(A, B);

    printf("\n --------------------------------------------------------------- \n");

    SmallerThan(A, B);

    printf("\n --------------------------------------------------------------- \n");

    BiggerThan(A, B);

    printf("\n --------------------------------------------------------------- \n");

    isEqualTo(A, B);

    printf("\n --------------------------------------------------------------- \n");

    isNotEqualTo(A, B);

    printf("\n --------------------------------------------------------------- \n");

    return 0;
}

int main()
{
    int arr[5] = {0,0,1,1,0};

    int counter_0 = 0;
    int counter_1 = 0;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == 0)
        {
            counter_0++;
        }
        else if (arr[i] == 1)
        {
            counter_1++;
        }
        else
        {
            return 0;
        }
    }

    printf("%d \n", counter_0);
    printf("%d \n", counter_1);
}

#define SIZE 20

int main()
{
    int sample_arr[SIZE] = {1,2,0,0,1,2,0,2,1,1,5,4,3,3,3,2,5,5,1,0};
    int counter_arr[6] = {0};
    int i;

    for(i = 0; i < SIZE; i++)
    {
        counter_arr[sample_arr[i]]++;
    }

    printf("The number of 0s in the array are: %d \n", counter_arr[0]);
    printf("The number of 1s in the array are: %d \n", counter_arr[1]);
    printf("The number of 2s in the array are: %d \n", counter_arr[2]);
    printf("The number of 3s in the array are: %d \n", counter_arr[3]);
    printf("The number of 4s in the array are: %d \n", counter_arr[4]);
    printf("The number of 5s in the array are: %d \n", counter_arr[5]);
}

#define SIZE 20

int main()
{
    int sample_arr[SIZE] = {1,2,0,0,1,2,0,2,1,1,5,4,3,3,3,2,5,5,1,0};
    int counter_arr[6] = {0};
    int i;

    for(i = 0; i < SIZE; i++)
    {
        counter_arr[sample_arr[i]]++;
    }

    int max_appearances = counter_arr[0];
    int max_number = 0;

    for(i = 1; i < 6; i++)
    {
        if(counter_arr[i] > max_appearances)
        {
            max_appearances = counter_arr[i];
            max_number = i;
        }
    }

    printf("The number #%d has most number of appearances(%d).", max_number, max_appearances);

}

#define SIZE 8

int main()
{
    int sample_array[8] = {7,5,9,6,7,10,7,6};
    int counter_array[6] = {0};

    for(int i = 0; i < SIZE; i++)
    {
        counter_array[sample_array[i] - 5]++;
    }

    int numberof5s = counter_array[0];
    int numberof6s = counter_array[1];
    int numberof7s = counter_array[2];
    int numberof8s = counter_array[3];
    int numberof9s = counter_array[4];
    int numberof10s = counter_array[5];


    printf("The appearances of 5s in the array are: %d \n", numberof5s);
    printf("The appearances of 6s in the array are: %d \n", numberof6s);
    printf("The appearances of 7s in the array are: %d \n", numberof7s);
    printf("The appearances of 8s in the array are: %d \n", numberof8s);
    printf("The appearances of 9s in the array are: %d \n", numberof9s);
    printf("The appearances of 10s in the array are: %d \n", numberof10s);
    
}

#define SIZE 11

int main()
{
    char source_array[SIZE] = {'l','e','l','l','o','j','o','s','h','u','a'};
    char counter_array[26] = {0};

    int i;

    for(i = 0; i < SIZE; i++)
    {
        counter_array[source_array[i] - 'a' + 0]++;
    }

    int maximum_counter = counter_array[0];
    char maximum_character = 'a';

    for(i = 1; i < 26; i++)
    {
        if(counter_array[i] > maximum_counter)
        {
            maximum_counter = counter_array[i];
            maximum_character = i + 'a'; 
        }
    }

    printf("The characters %c appears the maximum times, i,e, %d times", maximum_character, maximum_counter);

    return 0;
}

#include <string.h>
#define SIZE 50

int main()
{
    char sample_array[SIZE] = "HelloJasHUAAnishPANtony";
    int counter_array[52] = {0};
    int i;

    int length = strlen(sample_array);

    for(i = 0; i < length; i++)
    {
        if(sample_array[i] >= 'a' && sample_array[i] <= 'z')
        {
            counter_array[sample_array[i] - 'a' + 0]++;
        }
        else if(sample_array[i] >= 'A' && sample_array[i] <= 'Z')
        {
            counter_array[26 + sample_array[i] - 'A']++;
        }
    }

    int max_appearance = 0;
    char max_counter = '\0';

    for(i = 0; i < 52; i++)
    {
        if(counter_array[i] > max_appearance)
        {
            max_appearance = counter_array[i];

            if(i < 26)
            {
                max_counter = i + 'a';
            }
            else
            {
                max_counter= (i - 26) + 'A'; 
            }
         }
        }
    
    if(max_counter != '\0')
        printf("The most frequent letter is '%c' with %d appearances.\n",
               max_counter, max_appearance);
    else
        printf("No alphabetic characters found.\n");
}

//FILES

int main()
{
    FILE * fp; //Step 1: create a pointer to your file
    
    
    //Step 2: Opening/accesing the files
    // fp = fopen(<file_name>, <type-of-operation>)
    // "w" - Writing, "r" - Reading, "a" - Appending    
    fp = fopen("myFile1.txt", "w");

    //Step 3: Make sure the opening was successful
    if (fp == NULL ) // to make sure the opening of the file was successful
    {
        printf("The file could not be opened. \n");
    }
    else
    {
        printf("The file has been opened and is ready for writing. \n");
    
    //Step 4: Working with the file
    //Code for working with the file(Either reading, writing, appending, etc.)

    

    //Step 5: Closing the file
    fclose(fp);
    }
    return 0;
}

*/
/*

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfect(int num) {
    if (num < 2 || num % 2 != 0) return false; // Known perfect numbers are even

    int sum = 1;
    int sqrtNum = (int)sqrt(num);

    for (int i = 2; i <= sqrtNum; i++) {
        if (num % i == 0) {
            sum += i;
            int complement = num / i;
            if (complement != i) {
                sum += complement;
            }
        }
    }

    return sum == num;
}

int main() {
    int limit;

    printf("Enter the upper limit to find perfect numbers: ");
    scanf("%d", &limit);

    printf("Perfect numbers up to %d are:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}


*/

#include <stdio.h>
/*
int strLen(char *str)
{
    int i;
    int length = 0;  // Initialize to 0
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char string[100];   // Use char array
    printf("Enter your string: ");
    gets(string ); // Safe input

    int len = strLen(string);

    printf("The number of characters in the string are: %d\n", len);
    return 0;
}

#include <stdio.h>

int TotalNumLessThanNum(int num)
{
    int inputUser;
    printf("Please enter your number (-1 to stop): ");
    scanf("%d", &inputUser);

    if (inputUser == -1)   // base case
        return 0;

    if (inputUser < num)
        return 1 + TotalNumLessThanNum(num);  // count + recurse
    else
        return TotalNumLessThanNum(num);      // just recurse
}

int main()
{
    int num = 4;
    int smallernumbers = TotalNumLessThanNum(num);

    printf("You entered %d numbers less than %d.\n", smallernumbers, num);

    return 0;
}

int TotalOccurences(char character)
{
    char UserInput;
    printf("Enter your character: ");
    scanf("%c", &UserInput);

    if(UserInput == '$')
    {
        return 0;
    }


    if(UserInput == character)
    {
        return 1 + TotalOccurences(character);
    }
    else
    {
        return TotalOccurences(character);
    }
}

int main()
{
    int result = TotalOccurences('a');
    printf("%d", result);
}

int EvenNumbers()
{
  int UserInput;
  printf("Enter your numbers: ");
  scanf("%d", &UserInput);

  if(UserInput == -1)
  {
    return 0;
  }
  if(UserInput % 2 == 0)
  {
      return 1 + EvenNumbers();
  }
  else
  {
    return EvenNumbers();
  }
}


int main()
{
int result = EvenNumbers();
printf("The number of even numbers are: %d", result);
}

int SumOfAllEvenNumbers()
{
    int UserInput;
    printf("Enter your numbers: ");
    scanf("%d", &UserInput);

    if(UserInput == -1)
    {
        return 0;
    }

    if(UserInput % 2 == 0)
    {
        return UserInput + SumOfAllEvenNumbers();
    }
    else
    {
        return SumOfAllEvenNumbers();
    }
}

int main()
{
    int result = SumOfAllEvenNumbers();
    printf("The sum of all the even numbers in the sequence are: %d", result);

    return 0;
}

#include <stdio.h>

void PrintingNumbersUptoN(int number)
{
    if (number == 0)
    {
        return;  // base case
    }// recursive call
    printf("%d ", number);             // print after recursion
    PrintingNumbersUptoN(number - 1);
}

int main()
{
    PrintingNumbersUptoN(10);
    return 0;
}

int main()
{
    FILE *fp;

    char myChar1;
     
    fp = fopen("file1.txt", "w");

    if (fp == NULL)
    {
        printf("This file could not be opened. ");
    }
    else
    {
        printf("This file is now opened.");

        fputc('H', fp);
        fputc('e', fp);
        fputc('l', fp);
        fputc('l', fp);
        fputc('o', fp);


        fclose(fp);
    }


}

//fgetc(<file-pointer>) ---> Gets a single character from the file being pointed at
//fputc(<file-pointer>) ---> Adds a single character to the file being pointed at
//fprintf(<file-pointer>, <placeholder>, <parameters>)
//fscanf(<file-pointer>, <placeholders>, <parameters>)
//fputs(<string>,<file-pointer>)
//gets(<string>,<int/length_limit>,<file-pointer>)

int main()
{
    FILE * fp;
    char Message[100] = "Hello World!";

    fp = fopen("myFile1.txt", "a");

    if(fp != NULL)
    {
        fprintf(fp ,"%s",  Message);
        fclose(fp);
    }

    return 0;
}

int main()
{
    FILE *fp;
    int num;

    fp = fopen("myFile1.txt", "r");

    if(fp != NULL)
    {
        fscanf(fp, "%d", &num);
        printf("The number from file = %d \n", num);
    }

    return 0;
}

int main()
{
    FILE * fp;
    
    fp = fopen("myFile1.txt", "a");

    if(fp != NULL)
    {
        fputs("\nHey there!", fp);
        fputs("\nThis is Jashua Anish", fp);
        fclose(fp);
    }

}

int main()
{
    FILE * fp;

    char myString[15];

    fp = fopen("myFile1.txt", "r");

    if(fp != NULL)
    {
        int i = 0;

    for (i = 0; fgets(myString, 7, fp) != NULL; i++) {
    printf("string read from line#%d: %s\n", i+1, myString);
}
        fclose(fp);
    }
}

//EOF ---> End of File which is stored with the help of value: -1 (not actually a PART of the FILE but is merely an 
// indicator to the lower level systems that this is the end of the file.)

#include <stdio.h>

int main()
{
    FILE *fp = fopen("myFile1.txt", "r");
    int myChar;
    int count = 0;
    int lines_count = 0;

    if (fp != NULL)
    {
        {
            printf("%c", myChar);

            // Count only non-space and non-newline characters
            if (myChar != ' ' && myChar != '\n')
            {
                count++;
            }

            else if(myChar == '\n')
            {
                lines_count++;
            }
        }

        fclose(fp);

        printf("\nTotal characters in this file (excluding spaces/newlines): %d\n", count);
        printf("\nTotal lines in this file: %d\n", lines_count + 1);
    }
    else
    {
        printf("Error: could not open file.\n");
    }

    return 0;
}

int Power(int num, int exponent)
{
    int power = 1;

    if(exponent == 0)
        return 1;
    else
    {   
        for(int i = 0; i < exponent; i++)
        {
            power *= num;
        }
    }
        return power;
}

int main()
{
    FILE * fp;
    fp = fopen("myFile1.txt", "a");
    int num = 1;
    int square;
    int power;

    if(fp != NULL)
    {
        fprintf(fp, "\n");
        for(num = 1; num <= 10; num++)
        {
            square = num * num;
            fprintf(fp, "Number: %d, Square: %d \n", num, square);
        }

        fprintf(fp, "\n");

        for(num = 1; num <= 10; num++)
        {
            power = Power(num, 3);
            fprintf(fp, "Number: %d, Cube: %d \n", num, power);
        }

        fclose(fp);
    }
}

int main()
{
    FILE * fp;
    fp = fopen("myFile2.txt", "w");

    if (fp != NULL){
        fprintf(fp,"Hello, My name is Jashua Anish");
        fclose(fp);
    }
    else{
        printf("The file could not be opened.");
    }

}

*/
