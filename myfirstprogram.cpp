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

// Omitting Namespace
//  #include <iostream>

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

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
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

// While statements
//  int i = 0;
//  while (i < 5) {
//    cout << i << "\n";
//    i++;
//  }

// int countdown = 3;

// while (countdown > 0) {
//   cout << countdown << "\n";
//   countdown--;
// }

// cout << "Eid Mubarak!!! \n";

// int number;
// do {
//   cout << "Enter a positive number: ";
//   cin >> number;
// } while (number > 0);

// for (int i = 0; i <= 5; i++){
//   cout << "Fatima" << endl;
// }

// for (int i = 1; i <= 2; i++) {
//   for (int j = 1; j <= 3; j++) {
//     cout << i * j << " ";
//   }
// }

// for (int i = 0; i < 10; i++) {
//   if (i == 4) {
//     break; //exit loop at 4
//   }
//   cout << i << "\n";
// }

// for (int i = 0; i < 10; i++) {
//   if (i == 4) {
//     continue; //skip and move
//   }
//   cout << i << "\n";
// }
//}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
  // Array
  //   string cars[3] = {"BMW", "Porche", "Bentley"};

  //   for (int i = 0; i < 5; i++) {
  //   cout << cars[i] << "\n";
  // }

  // Using foreach
  //  Create an array of integers
  // int myNumbers[] = {10, 20, 30, 40, 50};

  // // Loop through integers
  // for (int num : myNumbers)
  // {
  //   cout << num << "\n";
  // }

  // Fixed Size (Arrays) vs. Dynamic Size (Vectors)
  // A vector with 3 elements
  // vector<string> cars = {"Volvo", "BMW", "Ford"};

  // // Adding another element to the vector
  // cars.push_back("Tesla");

  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // cout << sizeof(myNumbers); // return 20 as its in bytes

  // To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array:
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  // cout << getArrayLength;

  //   // looping thru an array
  //   int myNumbers[5] = {10, 20, 30, 40, 50};
  // for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
  //   cout << myNumbers[i] << "\n";
  //}

  // Structures
  // // Create a structure variable called myStructure
  // struct {
  //   int myNum;
  //   string myString;
  // } myStructure;

  // // Assign values to members of myStructure
  // myStructure.myNum = 1;
  // myStructure.myString = "Hello World!";

  // // Print members of myStructure
  // cout << myStructure.myNum << "\n";
  // cout << myStructure.myString << "\n";

  // One Structure in Multiple Variables
  // Declare a structure named "car"
  // struct car {
  //   string brand;
  //   string model;
  //   int year;
  // };

  // int main() {
  //   // Create a car structure and store it in myCar1;
  //   car myCar1;
  //   myCar1.brand = "BMW";
  //   myCar1.model = "X5";
  //   myCar1.year = 1999;

  //   // Create another car structure and store it in myCar2;
  //   car myCar2;
  //   myCar2.brand = "Ford";
  //   myCar2.model = "Mustang";
  //   myCar2.year = 1969;

  //   // Print the structure members
  //   cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  //   cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  //   return 0;
  // }

  // Challenge
  // struct student
  // {
  //   string name;
  //   int age;
  //   char grade;
  // };

  // student student1;

  // student1.name = "Fatima";
  // student1.age = 17;
  // student1.grade = 'A';

  // cout << "Her name is " << student1.name
  //      << " She is " << student1.age
  //      << " and took a grade " << student1.grade;

  // return 0;

  // An enum is a special type that represents a group of constants
//}

//Pointers
// A pointer is a variable that stores the memory address of another variable.
#include <iostream>
using namespace std;

int main()
{
    // int var = 10;

    // // declare pointer and store address of x
    // int *ptr = &var;

    // // print value and address
    // cout << "Value of x: " << var << endl;
    // cout << "Address of x: " << &var << endl;
    // cout << "Value stored in pointer ptr: " << ptr << endl;
    // cout << "Value pointed to by ptr: " << *ptr << endl;

    // return 0;

//     string food = "Pizza";
// string* ptr = &food;

// // Output the value of food (Pizza)
// cout << food << "\n";

// // Output the memory address of food (0x6dfed4)
// cout << &food << "\n";

// // Access the memory address of food and output its value (Pizza)
// cout << *ptr << "\n";

// // Change the value of the pointer
// *ptr = "Hamburger";

// // Output the new value of the pointer (Hamburger)
// cout << *ptr << "\n";

// // Output the new value of the food variable (Hamburger)
// cout << food << "\n";

// C++ new and delete
int* ptr = new int;
// new int creates memory space for one integer, ptr stores the address of that space
*ptr = 35;
// *ptr = 35; stores the number 35
cout << *ptr;
// cout << *ptr; prints the value

// The delete Keyword
delete ptr;

}