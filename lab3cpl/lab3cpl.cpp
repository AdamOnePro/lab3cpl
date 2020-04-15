#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <windows.h>


using namespace std;

void task1()
{
	cout << "\t\t\tTask 1(base lvl)" << endl;
	int count = 0;
	char* pS;
	char S[] = "baby, loser, cry, car, back, school, best";
	pS = strtok(S, ", ");// инициализирует указатель адресом первого слова c разделителями
	while (pS)// пока указатель != NULL
	{
		if (pS[0] == 'b')
		{
			count++;
		}
		pS = strtok(NULL, " ,");;// указатель получает адрес очередного слова 
	}

	 cout << "Количество слов, которые начинаются на букву b равна =  " <<  count;
	 cout << endl;
}

void task2()
{
	cout << endl << "\t\t\tTask 2 (medium lvl)" << endl;
	char words[] = "university,table,room,microphone,computer,engineer,backK";
	int num,count = 0;
	
	for (size_t i = 0; i < strlen(words); i++)
	{
		if (words[i] == ',')
		{
		 count++;
		 num = i;
		 
		}

	}
	
	
	count = 0;
	for (int i = num + 1; i < strlen(words); i++)
	{
		if (words[i] == 'k' || words[i] ==  'K')
		{
			count++;
		}
	}
	cout << "Количество символа k в последнем слове = " << count << endl ;
}



void task3()
{
	char syms[17];
	cout << "Введите массив символов из 17 эллементов:" << endl;
	cin.getline(syms, 17);
	cout << "string: " << syms << endl;
}
int main()
{
	SetConsoleCP (1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");
	//task1();
	//task2();
	task3();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

