#include <iostream>
#include <windows.h>

using namespace std;

int chislo;
int chislo2;
int slozhenie;
int raznost;
int umnozhenie;
float delenie;
float arifmeticheskoe;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� 2 �����: ";
    cin >> chislo >> chislo2;

    slozhenie = chislo + chislo2;
    raznost = chislo - chislo2;
    umnozhenie = chislo * chislo2;
    delenie = chislo / chislo2;
    arifmeticheskoe = (chislo + chislo2) / 2;
    cout << slozhenie << "\t" << raznost << "\t" << umnozhenie << "\t" << delenie << "\t" << arifmeticheskoe << "\n";

    cout << "��� ������ ������� <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;

}
