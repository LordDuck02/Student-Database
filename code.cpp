#include <iostream>
#include <windows.h>
using namespace std;

struct Estudante {
    string nome;
    int idade;
    double nota;
};

int main() {
    Estudante estudantes[3];
    while (true) {
        int escolha;
        cout << "Choose one of the options:\n";
        cout << "[1]-Add Students\n";
        cout << "[2]-View Students\n";
        cin >> escolha;
        system("cls");
        switch (escolha) {
            case 1:
                for (int i = 0; i < 3; i++) {
                    cout << "Enter the student's name: ";
                    cin >> estudantes[i].nome;
                    system("cls");
                    cout << "Enter the student's age: ";
                    cin >> estudantes[i].idade;
                    system("cls");
                    cout << "Enter the student's grade: ";
                    cin >> estudantes[i].nota;
                    system("cls");
                }
                break;
            case 2:
                cout << "List of students:" << endl;
                for (int i = 0; i < 3; i++) {
                    cout << "Name: " << estudantes[i].nome << endl;
                    cout << "Age: " << estudantes[i].idade << endl;
                    cout << "Grade: " << estudantes[i].nota << endl;
                    cout << endl;
                }
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                system("cls");
                break;
        }
    }
    return 0;
}
