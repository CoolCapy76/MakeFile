#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  // Start menu
  cout << "Hello" << endl;
  cout << "Enter filename , what filetype to create and add the directory where the file should be" << endl;
  cout << "1 - C++ project" << endl;
  cout << "2 - C# file" << endl;
  cout << "3 - Java project" << endl;
  cout << "4 - HTML file" << endl;
  cout << "5 - Kotlin file" << endl;

  // Enter choices
  int choice;
  string name;
  cin >> name;
  cin >> choice;

  // User naming the file
  ofstream workFile;

  //Get directory
  cout << "Enter file directory: ";
  string dir;
  cin >> dir;

  // Add a slash if not there

  if (dir[dir.length() - 1] != '/') {
    dir += '/';
  }
switch (choice) {
 case 1:
   workFile.open(dir + name + ".cpp");
   workFile << "#include <iostream>" << endl;
   workFile << "using namespace std;" << endl;
   workFile << "int main() {" << endl;
   workFile << " cout << \"\" << endl;" << endl;
   workFile << " return 0;" << endl;
   workFile << "}" << endl;
   workFile.close();
   break;

 case 2:
   workFile.open(dir + name + ".cs");
   workFile << "using System;" << endl;
   workFile << "class Program {" << endl;
   workFile << " static void Main(string[] args) {" << endl;
   workFile << " Console.WriteLine(\"\");" << endl;
   workFile << " }" << endl;
   workFile << "}" << endl;
   workFile.close();
   break;

 case 3:
   workFile.open(dir + name + ".java");
   workFile << "public class Main {" << endl;
   workFile << " public static void main(String[] args) {" << endl;
   workFile << " System.out.println(\"\");" << endl;
   workFile << " }" << endl;
   workFile << "}" << endl;
   workFile.close();
   break;

 case 4:
	workFile.open(dir + name + ".html");
	workFile << "<!DOCTYPE html>" << endl;
	workFile << "<html>" << endl;
	workFile << "<head>" << endl;
	workFile << " <title>Hello World</title>" << endl;
	workFile << "</head>" << endl;
	workFile << "<body>" << endl;
	workFile << " <h1>Hello World</h1>" << endl;
	workFile << "</body>" << endl;
	workFile << "</html>" << endl;
	workFile.close();

 case 5:
   workFile.open(dir + name + ".kt");
   workFile << "fun main() {" << endl;
   workFile << "println("")" << endl;
   workFile << "}" << endl;
   workFile.close();
   break;

 case 6:
	workFile.open(dir + name + ".html");
	workFile << "<!DOCTYPE html>" << endl;
	workFile << "<html>" << endl;
	workFile << "<body>" << endl;
	workFile << "<?php" << endl;
	workFile << "echo "!";"<< endl;
	workFile << "?>" << endl;
	workFile << "</body>" << endl;
	workFile << "</html>" << endl;
	workFile.close();
}
return 0;
}
