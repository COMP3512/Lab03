#include <iostream>

using namespace std;

class Matrix {

private:
	int values[];
	int size; //simply store the size upon creation instead of repeatedly checking

	int * matrixP;
	//in const5ructor, depending on value of n, go:
	//Matrix = new int [n*n]; 
	//simply use offseets for row and col

public:
	//constructors
	Matrix();
	Matrix(int);
	Matrix(int[]); //what happens if size not square root? check before calling?s

	//destructor
	~Matrix();

	//accesors/mutators
	void set_value(int, int, int);
	int get_value(int, int) const;
	int get_size(Matrix) const; //for creating identity Matrix from a specified Matrix

	//member methods
	int clear();
	Matrix identity(Matrix); //needs accessor for size

	//overloaded operators needed to perform Matrix operations --------------------------
	
	//insertion
	friend ostream& operator<<(ostream& os, const Matrix&);

	//unary

	//assignment

	//binary arithmetic



};