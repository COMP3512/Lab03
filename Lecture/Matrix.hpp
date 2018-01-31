#include <iostream>
#include <stdexcept>

using namespace std;

class Matrix {

private:
	int values[][];
	int size; //simply store the size upon creation instead of repeatedly checking
	int numRows; //to keep track of when looping
	int numCols; //to keep track of when looping

public:
	//constructors
	Matrix();
	Matrix(int);
	Matrix(int[]); //throw invalid arg exception if size of array passed != square

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