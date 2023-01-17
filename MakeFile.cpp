#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	//Start menu
	cout << "Hello" << endl;
	cout << "Enter filename and choose what filetype to create" << endl;
	
	cout << "1 - C++ project" << endl;
	cout << "2 - C# file" << endl;
	cout << "3 - Java project" << endl;
	cout << "4 - HTML file" << endl;

	//Enter choices
	int choice;
	string name;
	cin >> name;
	cin >> choice;

	//user naming the fille
	ofstream Workfile;
	Workfile.open(name.c_str());


	// TODO fix this
	cout << "Enter file dir" << endl;
	string dir;
	cin >> dir;
	ofstream workfile(dir + name);


	//c++ if
	 
	if (choice == 1)
	{
		//TODO fix file extension
		workfile.open(name + ".cpp");


		workfile << "#include <iostream>" << endl;
		workfile << "using namespace std;" << endl;
		workfile << "int main();" << endl;
		workfile << '{' << endl;
		workfile << "return 0;" << endl;
		workfile << '}';
		workfile.close();
	}


	//c# if
	if (choice == 2)
	{
		cout << choice;
	}

	//java if
	if (choice == 3)
	{
		cout << choice;
	}

	//html if
	if (choice == 4)
	{
		cout << choice;
	}
}

