#include <iostream>  //input-output standard stream lib for c++
#include <iomanip>   //input-output manipulator lib
#include <fstream>   //file input-output lib
#include <string>
using namespace std; //standard library namespace

int main()
{
	//first write a file
	fstream outFile; 
	//fstream does both, read and write.
	//if it confuses you to distinguish which file is written  
	//and which is read we can do this also
	//ofstream outFile;
	outFile.open("outF.txt",ios::out|ios::trunc);
	// outFile is an object of type fstream
	// 'open' func. allows to open the file
	// ios::trunc will delete a file with same name if exists
	// and open the file
	// ios::out will allow to write into this file
	outFile << "Day" << setw(10) << "Month" << setw(10) << "Year" << endl;
	outFile << "Sun" << setw(10) << "May" << setw(10) << 2020 << endl;
	outFile.close(); // close the file once write is done.
	
	//reading a file is only possible if you know what is there
	//inside the file and the format
	//Let's open the file
	fstream inFile; // or ifstream inFile
	inFile.open("outF.txt", ios::in);
	//pretend that we don't know what is written in this file
	//so read every line as a whole until we reach end of file
	string input;
	while(!inFile.eof())
	{
		getline(inFile,input); //getline will read each line
		if(inFile.eof()) break;//check commenting out this 
		cout << input << " -- \t" << "size of input string: " << input.size() <<endl;

	}
	inFile.close();
	return 0;
}

