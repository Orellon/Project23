#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct Student
{
	int id{};
	string fio;
	int age{};
	char pol{};
	int ves{};
	float rost{};
	int stependiya{};
	string gruppa;

	void Display()
	{
		cout << setw(3) << left << id << setw(18) << left << fio
			<< setw(7) << left << age << setw(7) << left << pol
			<< setw(7) << left << ves << setw(7) << left << rost
			<< setw(7) << left << stependiya << setw(7) << left << gruppa << endl;
	}
	
}st ;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student Ivan{ 1, "������ ����", 2007, '�', 65, 1.77, 900, "2�����1122" };
	Student Fedor{ 2, "������ Ը���", 2006, '�', 69, 1.68, 1200, "2�����1222" };
	Student Anna{ 3, "������� ����", 2005, '�',  58, 1.59, 900, "2�����1022" };
	Student Lena{ 4, "�������� ����", 2007, '�', 59, 1.61, 1200, "2�����922" };
	Student Peter{ 5, "������ ϸ��", 2006, '�',  66, 1.7, 0, "2�����1122" };
	Student Aleksey{ 6, "�������� �������", 2005, '�', 68, 1.72, 1200, "2�����1222" };
	Student Nikolay{ 7, "������� �������", 2006, '�', 71, 1.66, 900, "2�����1122" };
	Student Timur{ 8, "������ �����", 2007, '�', 70, 1.65, 1200, "2�����1022" };
	Student Asya{ 9, "������ ���", 2009, '�', 52, 1.78, 0, "2�����1322" };
	Student Sonya{ 10, "������� ����", 2008, '�', 53, 1.75, 900, "2�����922" };
	
	Student st[10] = { Ivan, Fedor, Anna, Lena, Peter, Aleksey, Nikolay, Timur, Asya, Sonya };
	for (int  i = 0; i < 10; i++)
	{
		st[i].Display();
	}
}

