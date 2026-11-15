// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double, double);
double displayData(double, double, double);


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
   area = getArea(width, length);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
   double length;
   cout << "What is the length?" << endl;
   cin >> length;
   return length;
}
double getWidth() {
   double Width;
   cout << "What is the Width?" << endl;
   cin >> Width;
   return Width;
}
double getArea(double length, double width) {
   double area;
   area = length * width;
   return area;
}
double displayData(double length, double width, double area){
   cout << "______________________________" << endl;
   cout << " Length: \t\t" << length << endl;
   cout << "  Width: \t\t" << width << endl;
   cout << "______________________________" << endl;
   cout << "   Area: \t\t" << area << endl;
   cout << "______________________________" << endl;
   return 0;
}