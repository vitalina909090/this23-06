#include <iostream>
#include <Windows.h>
#include <fstream>
#include <algorithm> 
#include <string> 
#include "Main.h"
using namespace std;

//2 ��������
struct List{
	char leter;
	const char* morze;
};

List mas[] = {
{'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
{'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
{'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
{'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
{'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
{'Z', "--.."}
};

int raid() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	string text;
	cin.ignore();
	cout << "������ ��� ����� ����������: ";
	getline(cin, text);

	string textAp = "", newtext="";
	for (int i = 0; i < text.size(); i++) {
		textAp += toupper(text[i]);
	}
	/*cout << textAp<<endl;*/

	for (char s: textAp) {
		for (List i : mas) {
			if (i.leter == s) newtext += i.morze;
		}
	}

	/*cout << newtext;*/
	string name;
	cout << "������ ����� �����: ";
	getline(cin, name);

	ofstream file(name+".txt");
	if (file) {
		file << "���� �����������: " << text << endl << "����������� �����������: " << newtext << endl;
		file.close();
		cout << "���� �������� � ����";
	}
	else cout << "������� ������ � ����";

	
	int choiseMenu;
	cout<< "\n����������� �� ������� ����? 1-��� 2-�: ";
	cin >> choiseMenu;
	if (choiseMenu == 1) {
		main();
	}
	return 0;
}