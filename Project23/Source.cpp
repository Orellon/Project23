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
	Student Ivan{ 1, "Èâàíîâ Èâàí", 2007, 'Ì', 65, 1.77, 900, "2ÎÈÁÀÑ1122" };
	Student Fedor{ 2, "Ïåòðîâ Ô¸äîð", 2006, 'Ì', 69, 1.68, 1200, "2ÎÈÁÀÑ1222" };
	Student Anna{ 3, "Èâàíîâà Àííà", 2005, 'Æ',  58, 1.59, 900, "2ÎÈÁÀÑ1022" };
	Student Lena{ 4, "Ñìèðíîâà Ëåíà", 2007, 'Æ', 59, 1.61, 1200, "2ÎÈÁÀÑ922" };
	Student Peter{ 5, "Ïåòðîâ Ï¸òð", 2006, 'Ì',  66, 1.7, 0, "2ÎÈÁÀÑ1122" };
	Student Aleksey{ 6, "Íèêîëàåâ Àëåêñåé", 2005, 'Ì', 68, 1.72, 1200, "2ÎÈÁÀÑ1222" };
	Student Nikolay{ 7, "Ðîìàíîâ Íèêîëàé", 2006, 'Ì', 71, 1.66, 900, "2ÎÈÁÀÑ1122" };
	Student Timur{ 8, "Ãàéäàð Òèìóð", 2007, 'Ì', 70, 1.65, 1200, "2ÎÈÁÀÑ1022" };
	Student Asya{ 9, "Áåëîâà Àñÿ", 2009, 'Æ', 52, 1.78, 0, "2ÎÈÁÀÑ1322" };
	Student Sonya{ 10, "Ãðîìîâà Ñîíÿ", 2008, 'Æ', 53, 1.75, 900, "2ÎÈÁÀÑ922" };
	
	Student st[10] = { Ivan, Fedor, Anna, Lena, Peter, Aleksey, Nikolay, Timur, Asya, Sonya };
	for (int  i = 0; i < 10; i++)
	{
		st[i].Display();
	}
}

