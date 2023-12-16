#include <iostream>
#include <string>
using namespace std;
// int main()
// {
//     int num1, num2;
//     string ope;
//     cout << "Enter Number \t";
//     cin >> num1;
//     cout << "Enter Another Number \t";
//     cin >> num2;

//     cout << "Enter Operator \t";
//     cin >> ope;
//     // cout << num1 + num2;
//     if ("+" == ope)

//         cout << num1 + num2;

//     else if ("-" == ope)

//         cout << num1 - num2;

//     else if ("*" == ope)

//         cout << num1 * num2;

//     else if ("/" == ope)

//         cout << num1 / num2;

//     else
//         cout << "Incorrect Operator";
// }

// int main()
// {
//     int sub1, sub2, sub3, sub4, sub5, sub6;
//     int tMarks = 600;

//     cout << "Enter sub1 \t";
//     cin >> sub1;
//     cout << "Enter sub2 \t";
//     cin >> sub2;
//     cout << "Enter sub3 \t";
//     cin >> sub3;
//     cout << "Enter sub4 \t";
//     cin >> sub4;
//     cout << "Enter sub4 \t";
//     cin >> sub4;
//     cout << "Enter sub5 \t";
//     cin >> sub5;
//     cout << "Enter sub6 \t";
//     cin >> sub6;
//     int obtMarks = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
//     float percentage = obtMarks * 100 / tMarks;

//     cout << obtMarks << "\n";
//     cout << percentage << "% \n";

//     if (percentage <= 50)
//         cout << "Grade = E";
//     else if (percentage > 50 && percentage <= 60)
//         cout << "Grade = D";
//     else if (percentage > 60 && percentage <= 70)
//         cout << "Grade = C";
//     else if (percentage > 70 && percentage <= 80)
//         cout << "Grade = B";
//     else if (percentage > 80 && percentage <= 90)

//         cout << "Grade A";
//     else
//         cout << "Grade A+";
// }
int main()
{
    int sum = 0, count = 0, num = 2;

loop_start:
    if (num > 100)
        goto end;

    sum += num;
    count++;

    num += 2;
    goto loop_start;

end:
    if (count > 0)
    {
        double average = sum / count;
        cout << "Average of even numbers between 1 and 100: " << average << endl;
    }
    else
    {
        cout << "No even numbers found between 1 and 100." << endl;
    }

    //     return 0;
}

// FOR ODD NUMBERS
// int main()
// {
//     int odd =1;
//     Start:
//     if(odd > 100)
//     goto End;
//     if (odd % 2 ==1)
//     cout<<odd<<"\t";
//     odd++;
//     goto Start;
//     End:
//     return 0;
// }

// FOR EVEN NUMBERS
// int main()
// {
//     int even =1;
//     Start:
//     if(even > 100)
//     goto End;
//     if (even % 2==0)
//     cout<<even<<"\t";
//     even++;
//     goto Start;
//     End:
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num1, num2, num3;

//     // Input three numbers
//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << "Enter the third number: ";
//     cin >> num3;

//     // Find the largest, smallest, and middle numbers
//     int largest, smallest, middle;

//     // Assume the first number is both the largest and smallest initially
//     largest = smallest = num1;

//     // Compare with the second number
//     if (num2 > largest)
//         largest = num2;
//     else if (num2 < smallest)
//         smallest = num2;
//     else
//         middle = num2;

//     // Compare with the third number
//     if (num3 > largest)
//         largest = num3;
//     else if (num3 < smallest)
//         smallest = num3;
//     else
//         middle = num3;

//     // Display the results
//     cout << "Largest number: " << largest << endl;
//     cout << "Smallest number: " << smallest << endl;
//     cout << "Middle number: " << middle << endl;

// //     return 0;
// }

// int main()
// {
//     int num = 0;
// start:
//     if (num > 100)
//         goto End;
//     num % 2 == 0 ? cout << num << "even\t" : cout << num <<"odd\t";
//     num++;
//     goto start;
// End:
//     return 0;
// }