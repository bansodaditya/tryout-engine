// program 1 Add two numbers: Take two numbers as input and produce output
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num1, num2;
//     printf("enter num1: ");
//     scanf("%d", &num1);
//     printf("enter num2:");
//     scanf("%d", &num2);
//     int z;
//     z = num1 + num2;
//     printf("your sum is"
//            " %d",
//            z);

//     return 0;
// }
/********************************************************/
// PROGRAM 2 Subtract numbers: Take two numbers as input and produce output
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num1, num2;
//     printf("enter num1: ");
//     scanf("%d", &num1);
//     printf("enter num2:");
//     scanf("%d", &num2);
//     int z;
//     z = num1 - num2;
//     printf("your answer is"
//            " %d",
//            z);

//     return 0;
// }
/*******************************************************/
// PROGRAM3 Multiply numbers: Take two numbers as input and produce output
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num1, num2;
//     printf("enter num1: ");
//     scanf("%d", &num1);
//     printf("enter num2:");
//     scanf("%d", &num2);
//     int z;
//     z = num1 * num2;
//     printf("your answer is"
//            " %d",
//            z);

//     return 0;
// }
/********************************************************/
// PROGRAM4  Divide numbers:
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float num1, num2;
//     printf("enter num1: ");
//     scanf("%d", &num1);
//     printf("enter num2:");
//     scanf("%d", &num2);
//     float z;
//     z = num1 / num2;
//     printf("your answer is"
//            " %f",
//            z);

//     return 0;
// }
// /*****************************************************************/
// program 4a   Take two numbers as input and produce an output in decimals
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num1, num2;
//     printf("enter num1: ");
//     scanf("%d", &num1);
//     printf("enter num2:");
//     scanf("%d", &num2);
//     float z;
//     z = num1 / num2;
//     printf("your answer is"
//            " %f",
//            z);

//     return 0;
// }
// /***************************************************************************/
// // program4b Take two numbers as input and produce output as dividend and remainder
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num1, num2;
//     printf("enter num1: ");
//     scanf("%d", &num1);
//     printf("enter num2:");
//     scanf("%d", &num2);
//     int z;
//     z = num1 % num2;
//     printf("your answer is"
//            " %d",
//            z);

//     return 0;
// }
// /***********************************************/
// // program 5   Prime Number: Take one number as input and tell whether it’s a prime number or not
// #include <stdio.h>
// intmain()
// {
//     int n, i, flag = 0;
//     printf("enter positive integer :");
//     scanf("%d", &n);
//     if (n == 0 || n == 1)
//         flag = 1;

//     for (i = 2; i <= n / 2; ++i)
//     {

//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("%d is a prime number.", n);
//     else
//         printf("%d is not a prime number.", n);
//     return 0;
// }
// // // program 6 Celsius to Fahrenheit: Take a number input and output its Fahrenheit equivalent
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float c;

//     printf("enter your no. which you want to convert in fahrenheit:");
//     scanf("%f", &c);
//     float y = (1.8 * c) + 32;
//     printf("you value in fahrenheit is %f", y);

//     return 0;
// }
// /**************************************/
// // program7 Area of Circle: Take radius of a circle as input and produce its area as output.
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float pi = 3.14;
//     float r;
//     printf("enter radius: ");
//     scanf("%f", &r);

//     float z;
//     z = pi * r * r;
//     printf(" area of circle is %f", z);

//     return 0;
// }
// /********************************************************/
// // program 8 Area of a rectangle: Take two sides as input and produce area as output.
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float side1, side2;
//     printf("enter side1: ");
//     scanf("%f", &side1);
//     printf("enter side2:");
//     scanf("%f", &side2);
//     float z;
//     z = side1 * side2;
//     printf("area of ractangle is:"
//            " %f",
//            z);

//     return 0;
// }
// /********************************************************/
// // program9 Percentage: Take five numbers in input and produce each one’s percentage as output.
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float num1, num2, num3, num4, num5;
//     printf("enter num1: ");
//     scanf("%f", &num1);
//     printf("enter num2:");
//     scanf("%f", &num2);
//     printf("enter num3: ");
//     scanf("%f", &num3);
//     printf("enter num4:");
//     scanf("%f", &num4);
//     printf("enter num5: ");
//     scanf("%f", &num5);
//     float sum = num1 + num2 + num3 + num4 + num5;
//     float a = (num1 / sum) * 100;
//     float b = (num2 / sum) * 100;
//     float c = (num3 / sum) * 100;
//     float d = (num4 / sum) * 100;
//     float e = (num5 / sum) * 100;
//     printf("percentage num1"
//            " %f\n",
//            a);
//     printf("percentage num2"
//            " %f\n",
//            b);
//     printf("percentage num3"
//            " %f\n",
//            c);
//     printf("percentage num4"
//            " %f\n",
//            d);
//     printf("percentage num5"
//            " %f\n",
//            e);

//     return 0;
// }
// /***********************************************************/
// // progam 10 Print an ASCII character for a given number: Take a number as input and print its corresponding ASCII character.

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int z;
//     printf("enter your number:");
//     scanf("%d", &z);

//     printf("ASCII conversion is: %d is %c", z, z);

//     return 0;
// }