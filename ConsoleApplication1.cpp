//#include <iostream>
//#include <Windows.h>
//#include <fstream>
//#include <algorithm> 
//#include <string> 
//using namespace std;

////1 завдання
//struct Pers {
//    string name;
//    string last_name;
//    int ball;
//};
//
//bool Poriv(Pers n1, Pers n2){
//    return n1.ball > n2.ball;
//}
//
//int main(){
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    
//    ifstream file("list.txt");
//    if (!file) {
//        cout << "Файл не знайдено!" << endl;
//        return 1;
//    }
//
//    Pers* array = new Pers[10];
//    int kill = 0;
//    for (int i = 0; i < 10; i++){
//        if (file >> array[i].name >> array[i].last_name >> array[i].ball) {
//            kill++;
//        }
//        else break;
//    }
//    file.close();
//
//    sort(array, array + kill, Poriv);
//    for (int i = 0; i < kill; i++) {
//        cout << i + 1 << ") " << array[i].name << " " << array[i].last_name << " " << array[i].ball << endl;
//    }
//
//    delete []array;
//}



//#include <iostream>
//#include <Windows.h>
//#include <fstream>
//#include <algorithm> 
//#include <string> 
//using namespace std;

////2 завдання
//struct List{
//	char leter;
//	const char* morze;
//};
//
//List mas[] = {
//{'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
//{'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
//{'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
//{'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
//{'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
//{'Z', "--.."}
//};
//
//int main() {
//	SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//	string text;
//	cout << "Введіть ваш текст англійською: ";
//	getline(cin, text);
//
//	string textAp = "", newtext="";
//	for (int i = 0; i < text.size(); i++) {
//		textAp += toupper(text[i]);
//	}
//	/*cout << textAp<<endl;*/
//
//	for (char s: textAp) {
//		for (List i : mas) {
//			if (i.leter == s) newtext += i.morze;
//		}
//	}
//
//	/*cout << newtext;*/
//	string name;
//	cout << "Введіть назву файла: ";
//	getline(cin, name);
//
//	ofstream file(name+".txt");
//	if (file) {
//		file << "Ваше повідомлення: " << text << endl << "Зашифроване повідомлення: " << newtext << endl;
//		file.close();
//		cout << "Данні збережені у файл";
//	}
//	else cout << "Помилка запису у файл";
//
//	return 0;
//}

#include <iostream>
#include <Windows.h>
#include "Grade.h"
#include "Raid.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choise;
	cout << "Меню завдань\nСортування оцінок (1)\nШифрування повідомлення (2)\nВаш вибір: ";
	cin >> choise;
	if (choise == 1) {
		cout << "\033[2J\033[1;1H"; //очищення екрана 
		grade();
	}
	else if (choise == 2) {
		cout << "\033[2J\033[1;1H"; //очищення екрана 
		raid();
	}
	return 0;
}