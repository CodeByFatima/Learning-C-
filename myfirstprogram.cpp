// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }

// Another way to write the same code

// #include <iostream>

// int main() {
//   std::cout << "Fatima here!";
//   std::cout << "ALulu here!";
//   return 0;
// }

// Challenge: Create a Simple C++ Program
// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Hello, C++!";
//     return 0;
// }

// Printing numbers
// #include <iostream>
// using namespace std;

// int main(){
//     cout << 17;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     cout << "I am ";
//     cout << 17;
//     return 0;
// }

// Performing calculations
// #include <iostream>
// using namespace std;

// int main(){
//     cout << 17 + 1;
//     cout << 17 - 1;
//     cout << 17 * 1;
//     cout << 16 / 2;
//     return 0;
// }

// Using next line
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Hello World!\n\n";
//     cout << "I am learning C++\n";
//     cout << "Hello World!\n";
//     cout << "I am learning C++\n";
//     cout << "Hello World!" << endl;
//     cout << "I am learning C++";
//     return 0;
// }

// tab
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Hello World!\t";
//     cout << "ftm";
//     return 0;
// }

// Challenge: Print Name and Age
// #include <iostream>
// using namespace std;

// int main() {
//    cout << "fatima\n";
//    cout << 17;
//   return 0;
// }

// Variables
// #include <iostream>
// using namespace std;
// int main()
// {
// int myNum = 5;            // Integer (whole number without decimals)
// double myFloatNum = 5.99; // Floating point number (with decimals)
// char myLetter = 'D';      // Character
// string myText = "Hello";  // String (text)
// bool myBoolean = true;    // Boolean (true or false)

// // First and stupid way
// cout << myNum << endl;
// cout << myFloatNum << endl;
// cout << myLetter << endl;
// cout << myText << endl;
// cout << myBoolean << endl;

// // Second way
// cout << myNum << myFloatNum << myLetter << myText << myBoolean << endl;

// // My sentence w age
// int myAge = 17;
// cout << "I am " << myAge << " years old.";

// Storing different data about a college student:
// Student data
// int studentID = 15;
// int studentAge = 23;
// float studentFee = 75.25;
// char studentGrade = 'B';

// // Print variables
// cout << "Student ID: " << studentID << "\n";
// cout << "Student Age: " << studentAge << "\n";
// cout << "Student Fee: " << studentFee << "\n";
// cout << "Student Grade: " << studentGrade << "\n";

// // calculate the area of a rectangle
// // Create integer variables
// int length = 4;
// int width = 6;

// // Calculate the area of a rectangle
// int area = length * width;

// // Print the variables
// cout << "Length is: " << length << "\n";
// cout << "Width is: " << width << "\n";
// cout << "Area of the rectangle is: " << area << "\n";
//}

// Challenge: Calculate the Area of a Rectangle
// #include <iostream>
// using namespace std;

// int main()
// {
  // Write length here
  // int length = 5;
  // Write width here
  // int width = 9;
  // Write area here (length * width)
  // int area = length * width;

  // Print area here
  // cout << area;
  // return 0;

  // Getting user input
  // string name;
  // cout << "Enter your name: ";
  // cin >> name;

  // int age;
  // cout << "Type your age: ";
  // cin >> age;
  // cout << "Your name is " << name << " and your age is: " << age << endl;

  // Float and Double
  // float f1 = 35e3;
  // double d1 = 35E3;
  // cout << f1 << endl;
  // cout << d1;

  // bool isCodingFun = true;
// bool isFishTasty = false;
// cout << isCodingFun << endl; 
// cout << isFishTasty;  
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//   int studentId = 725;
//   double score = 99.99;
//   char grade = 'A';

//   cout << studentId << endl;
//   cout << score << endl;
//   cout << grade << endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int x = 10;
// int y = 3;

// cout << (x + y) << "\n"; // 13
// cout << (x - y) << "\n"; // 7
// cout << (x * y) << "\n"; // 30
// cout << (x / y) << "\n"; // 3 (integer division)
// cout << (x % y) << "\n"; // 1

// int z = 5;
// ++z;
// cout << z << "\n"; // 6
// --z;
// cout << z << "\n"; // 5

// int x = 5;
// int y = 3;
// cout << (x > y); //1 means true

// int result1 = 2 + 3 * 4;    
// int result2 = (2 + 3) * 4; //use () if you want the addition to happen first

// cout << result1 << "\n";
// cout << result2 << "\n";
// }

// String 
// #include <iostream>
// using namespace std;

// int main(){
//   string firstName = "John";
// string lastName = "Doe";
// string fullName = firstName + " " + lastName;
// cout << fullName;

// String methods
// 1. Append
// string firstName = "Fatima ";
// string lastName = "Saif";
// string fullName = firstName.append(lastName);
// cout << fullName;

// 2. Length
// string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// cout << "The length of the txt string is: " << txt.length(); //size can also be used

// 3. Access 
// string myString = "Hello";
// cout << myString[0, 3];

// 4. Change String Characters
// string myString = "Hello";
// myString[0] = 'J';
// cout << myString;
// Outputs Jello instead of Hello

// at() function
// string myString = "Hello";
// cout << myString << endl; // Outputs Hello

// cout << myString.at(0) << endl;  // First character
// cout << myString.at(1) << endl;  // Second character
// cout << myString.at(myString.length() - 1) << endl;  // Last character

// myString.at(0) = 'J';
// cout << myString;  // Outputs Jello

// // inserts a backslach
// /' insert single commas
// /" inserts double commas

// getline function
// string fullName;
// cout << "Type your full name: ";
// getline (cin, fullName);
// cout << "Your name is: " << fullName;
// }

//Omitting Namespace
// #include <iostream>

// int main() {
//   std::string greeting = "Hello";
//   std::cout << greeting;
//   return 0;
// }

// Booleans
// #include <iostream>
// using namespace std;

// int main(){
//   bool isCodingFun = true;
// bool isFishTasty = false;

// cout << isCodingFun << "\n"; 
// cout << isFishTasty << "\n"; 
// Output is always 1 and 0, if you want to print true and false, use boolalpha;
// bool isCodingFun = true;
// bool isFishTasty = false;

// cout << boolalpha; // enable printing "true"/"false"

// cout << isCodingFun << "\n"; 
// cout << isFishTasty << "\n";  

// If you want to go back to the default behavior (printing 1 and 0), you can use noboolalpha

// }

#include <iostream>
#include <string>
using namespace std;

int main(){
//   int age = 18;
//  string result = (age >= 18) ? "Adult" : "Kid";
//  cout << result;

  // Ternary operators are the shorthand for the else if statements
//   int time = 20;
// string result = (time < 18) ? "Good day." : "Good evening.";
// cout << result;

// Nested if statements
// int age = 20;
// bool isCitizen = true;

// if (age >= 18) {
//   cout << "Old enough to vote.\n";

//   if (isCitizen) {
//     cout << "And you are a citizen, so you can vote!\n";
//   } else {
//     cout << "But you must be a citizen to vote.\n";
//   }
// } else {
//   cout << "Not old enough to vote.\n";
// }

// Switch statements
// int day = 4;
// switch (day) {
//   case 1:
//     cout << "Monday";
//     break;
//   case 2:
//     cout << "Tuesday";
//     break;
//   case 3:
//     cout << "Wednesday";
//     break;
//   case 4:
//     cout << "Thursday";
//     break;
//   case 5:
//     cout << "Friday";
//     break;
//   case 6:
//     cout << "Saturday";
//     break;
//   case 7:
//     cout << "Sunday";
//     break;
// }

//While statements
// int i = 0;
// while (i < 5) {
//   cout << i << "\n";
//   i++;
// }

int countdown = 3;

while (countdown > 0) {
  cout << countdown << "\n";
  countdown--;
}

cout << "Eid Mubarak!!! \n";

int number;
do {
  cout << "Enter a positive number: ";
  cin >> number;
} while (number > 0);
}