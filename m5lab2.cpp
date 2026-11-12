// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

void getLength();
void getWidth();
void getArea(double, double);
void displayData(double, double, double);


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length;    // The rectangle's length
   double width;     // The rectangle's width
   double area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(width, lenght);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

void getLength() {
   double length;
   cout << "What is the length?" << endl;
   cin >> length;
   return length;
}
void getWidth() {
   double Width;
   cout << "What is the Width?" << endl;
   cin >> Width;
   return Width;
}
void getArea() {
   double length;
   cout << "What is the length?" << endl;
   cin >> length;
   return length;
}
void displayArea(){


}