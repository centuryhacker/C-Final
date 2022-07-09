#include <iostream>


using namespace std;



/**
File Handling with C++ using ifstream & ofstream class object
To write the Content in File
 Then to read the content of file
#include <iostream>

ifstream header file for ifstream, ofstream,
fstream classes 
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	// Creation of ofstream class object
	ofstream fout;

	string line;

	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	// fout.open("sample.txt", ios::app)
	fout.open("sample.txt");

	// Execute a loop If file successfully opened
	while (fout) {

		// Read a Line from standard input
		getline(cin, line);

		// Press -1 to exit
		if (line == "-1")
			break;

		// Write line in file
		fout << line << endl;
	}

	// Close the File
	fout.close();

	// Creation of ifstream class object to read the file
	ifstream fin;

	// by default open mode = ios::in mode
	fin.open("sample.txt");

	// Execute a loop until EOF (End of File)
	while (fin) {

		// Read a Line from File
		getline(fin, line);

		// Print line in Console
		cout << line << endl;
	}

	// Close the file
	fin.close();

	return 0;
}

*/

/**
Q: write a single file handling program in c++ to reading and writing data on a file.

#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int rno,fee;
	char name[50];

	cout<<"Enter the Roll Number:";
	cin>>rno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fee:";
	cin>>fee;

	ofstream fout("d:/student.doc");

	fout<<rno<<"\t"<<name<<"\t"<<fee; //write data to the file student

	fout.close();

	ifstream fin("d:/student.doc");

	fin>>rno>>name>>fee; //read data from the file student

	fin.close();

	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

	return 0;
}

*/

/**
// C++ program to demonstrate read/write of class
// objects in C++.
#include <iostream>
#include <fstream>
using namespace std;

// Class to define the properties
class Contestant {
public:
	// Instance variables
	string Name;
	int Age, Ratings;

	// Function declaration of input() to input info
	int input();

	// Function declaration of output_highest_rated() to
	// extract info from file Data Base
	int output_highest_rated();
};

// Function definition of input() to input info
int Contestant::input()
{
	// Object to write in file
	ofstream file_obj;

	// Opening file in append mode
	file_obj.open("Input.txt", ios::app);

	// Object of class contestant to input data in file
	Contestant obj;

	// Feeding appropriate data in variables
	string str = "Michael";
	int age = 18, ratings = 2500;

	// Assigning data into object
	obj.Name = str;
	obj.Age = age;
	obj.Ratings = ratings;

	// Writing the object's data in file
	file_obj.write((char*)&obj, sizeof(obj));

	// Feeding appropriate data in variables
	str = "Terry";
	age = 21;
	ratings = 3200;

	// Assigning data into object
	obj.Name = str;
	obj.Age = age;
	obj.Ratings = ratings;

	// Writing the object's data in file
	file_obj.write((char*)&obj, sizeof(obj));

	return 0;
}

// Function definition of output_highest_rated() to
// extract info from file Data Base
int Contestant::output_highest_rated()
{
	// Object to read from file
	ifstream file_obj;

	// Opening file in input mode
	file_obj.open("Input.txt", ios::in);

	// Object of class contestant to input data in file
	Contestant obj;

	// Reading from file into object "obj"
	file_obj.read((char*)&obj, sizeof(obj));

	// max to store maximum ratings
	int max = 0;

	// Highest_rated stores the name of highest rated contestant
	string Highest_rated;

	// Checking till we have the feed
	while (!file_obj.eof()) {
		// Assigning max ratings
		if (obj.Ratings > max) {
			max = obj.Ratings;
			Highest_rated = obj.Name;
		}

		// Checking further
		file_obj.read((char*)&obj, sizeof(obj));
	}

	// Output is the highest rated contestant
	cout << Highest_rated;
	return 0;
}

// Driver code
int main()
{
	// Creating object of the class
	Contestant object;

	// Inputting the data
	object.input();

	// Extracting the max rated contestant
	object.output_highest_rated();

	return 0;
}

*/

/**
// C++ implementation to create a file
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	// fstream is Stream class to both
	// read and write from/to files.
	// file is object of fstream class
fstream file;

// opening file "Gfg.txt"
// in out(write) mode
// ios::out Open for output operations.
file.open("Gfg.txt",ios::out);

// If no file is created, then
// show the error message.
if(!file)
{
	cout<<"Error in creating file!!!";
	return 0;
}

cout<<"File created successfully.";

// closing the file.
// The reason you need to call close()
// at the end of the loop is that trying
// to open a new file without closing the
// first file will fail.
file.close();

return 0;
}

*/

/**
void create()
{
	// file pointer
	fstream fout;

	// opens an existing csv file or creates a new file.
	fout.open("reportcard.csv", ios::out | ios::app);

	cout << "Enter the details of 5 students:"
		<< " roll name maths phy chem bio";
	<< endl;

	int i, roll, phy, chem, math, bio;
	string name;

	// Read the input
	for (i = 0; i < 5; i++) {

		cin >> roll
			>> name
			>> math
			>> phy
			>> chem
			>> bio;

		// Insert the data to file
		fout << roll << ", "
			<< name << ", "
			<< math << ", "
			<< phy << ", "
			<< chem << ", "
			<< bio
			<< "\n";
	}
}


*/

/**
void read_record()
{

	// File pointer
	fstream fin;

	// Open an existing file
	fin.open("reportcard.csv", ios::in);

	// Get the roll number
	// of which the data is required
	int rollnum, roll2, count = 0;
	cout << "Enter the roll number "
		<< "of the student to display details: ";
	cin >> rollnum;

	// Read the Data from the file
	// as String Vector
	vector<string> row;
	string line, word, temp;

	while (fin >> temp) {

		row.clear();

		// read an entire row and
		// store it in a string variable 'line'
		getline(fin, line);

		// used for breaking words
		stringstream s(line);

		// read every column data of a row and
		// store it in a string variable, 'word'
		while (getline(s, word, ', ')) {

			// add all the column data
			// of a row to a vector
			row.push_back(word);
		}

		// convert string to integer for comparision
		roll2 = stoi(row[0]);

		// Compare the roll number
		if (roll2 == rollnum) {

			// Print the found data
			count = 1;
			cout << "Details of Roll " << row[0] << " : \n";
			cout << "Name: " << row[1] << "\n";
			cout << "Maths: " << row[2] << "\n";
			cout << "Physics: " << row[3] << "\n";
			cout << "Chemistry: " << row[4] << "\n";
			cout << "Biology: " << row[5] << "\n";
			break;
		}
	}
	if (count == 0)
		cout << "Record not found\n";
}


*/

/**
void update_recode()
{

	// File pointer
	fstream fin, fout;

	// Open an existing record
	fin.open("reportcard.csv", ios::in);

	// Create a new file to store updated data
	fout.open("reportcardnew.csv", ios::out);

	int rollnum, roll1, marks, count = 0, i;
	char sub;
	int index, new_marks;
	string line, word;
	vector<string> row;

	// Get the roll number from the user
	cout << "Enter the roll number "
		<< "of the record to be updated: ";
	cin >> rollnum;

	// Get the data to be updated
	cout << "Enter the subject "
		<< "to be updated(M/P/C/B): ";
	cin >> sub;

	// Determine the index of the subject
	// where Maths has index 2,
	// Physics has index 3, and so on
	if (sub == 'm' || sub == 'M')
		index = 2;
	else if (sub == 'p' || sub == 'P')
		index = 3;
	else if (sub == 'c' || sub == 'C')
		index = 4;
	else if (sub == 'b' || sub == 'B')
		index = 5;
	else {
		cout << "Wrong choice.Enter again\n";
		update_record();
	}

	// Get the new marks
	cout << "Enter new marks: ";
	cin >> new_marks;

	// Traverse the file
	while (!fin.eof()) {

		row.clear();

		getline(fin, line);
		stringstream s(line);

		while (getline(s, word, ', ')) {
			row.push_back(word);
		}

		roll1 = stoi(row[0]);
		int row_size = row.size();

		if (roll1 == rollnum) {
			count = 1;
			stringstream convert;

			// sending a number as a stream into output string
			convert << new_marks;

			// the str() converts number into string
			row[index] = convert.str();

			if (!fin.eof()) {
				for (i = 0; i < row_size - 1; i++) {

					// write the updated data
					// into a new file 'reportcardnew.csv'
					// using fout
					fout << row[i] << ", ";
				}

				fout << row[row_size - 1] << "\n";
			}
		}
		else {
			if (!fin.eof()) {
				for (i = 0; i < row_size - 1; i++) {

					// writing other existing records
					// into the new file using fout.
					fout << row[i] << ", ";
				}

				// the last column data ends with a '\n'
				fout << row[row_size - 1] << "\n";
			}
		}
		if (fin.eof())
			break;
	}
	if (count == 0)
		cout << "Record not found\n";

	fin.close();
	fout.close();

	// removing the existing file
	remove("reportcard.csv");

	// renaming the updated file with the existing file name
	rename("reportcardnew.csv", "reportcard.csv");
}


*/

/**
void delete_record()
{

	// Open FIle pointers
	fstream fin, fout;

	// Open the existing file
	fin.open("reportcard.csv", ios::in);

	// Create a new file to store the non-deleted data
	fout.open("reportcardnew.csv", ios::out);

	int rollnum, roll1, marks, count = 0, i;
	char sub;
	int index, new_marks;
	string line, word;
	vector<string> row;

	// Get the roll number
	// to decide the data to be deleted
	cout << "Enter the roll number "
		<< "of the record to be deleted: ";
	cin >> rollnum;

	// Check if this record exists
	// If exists, leave it and
	// add all other data to the new file
	while (!fin.eof()) {

		row.clear();
		getline(fin, line);
		stringstream s(line);

		while (getline(s, word, ', ')) {
			row.push_back(word);
		}

		int row_size = row.size();
		roll1 = stoi(row[0]);

		// writing all records,
		// except the record to be deleted,
		// into the new file 'reportcardnew.csv'
		// using fout pointer
		if (roll1 != rollnum) {
			if (!fin.eof()) {
				for (i = 0; i < row_size - 1; i++) {
					fout << row[i] << ", ";
				}
				fout << row[row_size - 1] << "\n";
			}
		}
		else {
			count = 1;
		}
		if (fin.eof())
			break;
	}
	if (count == 1)
		cout << "Record deleted\n";
	else
		cout << "Record not found\n";

	// Close the pointers
	fin.close();
	fout.close();

	// removing the existing file
	remove("reportcard.csv");

	// renaming the new file with the existing file name
	rename("reportcardnew.csv", "reportcard.csv");
}

*/
int main()
{
   




    return 0;
}
