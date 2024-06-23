#include <iostream>
#include <Windows.h>
#include <fstream>
#include <algorithm> 
#include <string> 
#include "Main.h"
using namespace std;

//2 завдання
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
	cout << "Введіть ваш текст англійською: ";
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
	cout << "Введіть назву файла: ";
	getline(cin, name);

	ofstream file(name+".txt");
	if (file) {
		file << "Ваше повідомлення: " << text << endl << "Зашифроване повідомлення: " << newtext << endl;
		file.close();
		cout << "Данні збережені у файл";
	}
	else cout << "Помилка запису у файл";

	
	int choiseMenu;
	cout<< "\nПовернутись на головне меню? 1-так 2-ні: ";
	cin >> choiseMenu;
	if (choiseMenu == 1) {
		main();
	}
	return 0;
}