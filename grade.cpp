#include <iostream>
#include <Windows.h>
#include <fstream>
#include <algorithm> 
#include <string> 
#include "Main.h"
using namespace std;

//1 завдання
struct Pers {
    string name;
    string last_name;
    int ball;
};

bool Poriv(Pers n1, Pers n2) {
    return n1.ball > n2.ball;
}

int grade() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream file("list.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }

    Pers* array = new Pers[10];
    int kill = 0;
    for (int i = 0; i < 10; i++) {
        if (file >> array[i].name >> array[i].last_name >> array[i].ball) {
            kill++;
        }
        else break;
    }
    file.close();

    sort(array, array + kill, Poriv);
    for (int i = 0; i < kill; i++) {
        cout << i + 1 << ") " << array[i].name << " " << array[i].last_name << " " << array[i].ball << endl;
    }

    delete[]array;

    int choiseMenu;
    cout << "\nПовернутись на головне меню? 1-так 2-ні: ";
    cin >> choiseMenu;
    if (choiseMenu == 1) {
        main();
    }
    return 0;
}