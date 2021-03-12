#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream my_filee;
	my_filee.open("my_filee.txt", ios::out);
	if (!my_filee) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_filee << "Guru99";
		my_filee.close();
	}
	return 0;
}