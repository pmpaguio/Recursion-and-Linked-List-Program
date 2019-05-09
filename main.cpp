#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist & list, string & file) {
  ifstream theFile;
	theFile.open(file);

  int intNumber;
	while (theFile)
	{
		theFile >> intNumber;
		if (!theFile)
			break;
		list.addToFront(intNumber);
	}
	theFile.close();
}

int main() {
    string fileName = "list.txt";
    linkedlist linkList;
    readFile(linkList, fileName);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average is: " << linkList.average() << endl;
    linkList.writeInorder(fileName);
    linkList.writeReversed(fileName);
    return 0;
}
