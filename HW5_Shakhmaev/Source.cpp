#include<iostream>
#include<cctype>
#include<conio.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define Escape 27

//#define EX_1
//#define EX_2
//#define EX_3
//#define EX_4
#define EX_5
//#define EX_6
//#define EX_7

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef EX_1
	int number;
	int degree;
	char key = 0;
	cout << "Данная программа позволяет возвести введенное Вами число в указанную степень." << endl;
	while (key != Escape)
	{
		number = 0;
		degree = 0;
		cout << "Пожалуйста, введите число -> "; cin >> number;
		cout << "Введите степень, в которую будем возводить число -> "; cin >> degree;
		if (cin.good())
		{
			if (degree == 0) cout << "Результат введеного выражения: " << endl << number << " в степени " << degree << " = " << "1" << endl;
			else if (degree > 0)
			{
				int result = 1;
				for (int i = 1; i <= degree; i++)
				{
					
					result *= number;
				}
				cout << "Результат введеного выражения: " << endl << number << " в степени " << degree << " = " << result << endl;
				result = 0;
			}
			else
			{
				double result = 1;
				for (int i = degree; i < 0; i++)
				{

					result = result/ number;
				}
				cout << "Результат введеного выражения: " << endl << number << " в степени " << degree << " = " << result << endl;
				result = 0;
			}
		}
		else
		{
			cout << endl << "Некоректно введены данные" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		cout << "Проверить еще одно число? (для продолжения нажмите любую клавишу, для выхода esc) -> " << endl;
		key = _getch();
	}
#endif

#ifdef EX_2
	cout << "Данная программа позволяет вывести на экран таблицу ASCII-символов." << endl;
	char number = 0;
	int t = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			setlocale(LC_ALL, "LINUX");
			cout << t << " ";
			if (t == 0)cout << "nul" << "\t";
			else if (t == 1)cout << "sox" << "\t";
			else if (t == 2)cout << "stx" << "\t";
			else if (t == 3)cout << "etx" << "\t";
			else if (t == 4)cout << "eot" << "\t";
			else if (t == 5)cout << "enq" << "\t";
			else if (t == 6)cout << "ack" << "\t";
			else if (t == 7)cout << "bel" << "\t";
			else if (t == 8)cout << "bs" << "\t";
			else if (t == 9)cout << "ht" << "\t";
			else if (t == 10)cout << "nl" << "\t";
			else if (t == 11)cout << "vt" << "\t";
			else if (t == 12)cout << "ff" << "\t";
			else if (t == 13)cout << "cr" << "\t";
			else if (t == 14)cout << "so" << "\t";
			else if (t == 15)cout << "si" << "\t";
			else if (t == 16)cout << "dle" << "\t";
			else if (t == 17)cout << "dc1" << "\t";
			else if (t == 18)cout << "dc2" << "\t";
			else if (t == 19)cout << "dc3" << "\t";
			else if (t == 20)cout << "dc4" << "\t";
			else if (t == 21)cout << "nak" << "\t";
			else if (t == 22)cout << "syn" << "\t";
			else if (t == 23)cout << "etb" << "\t";
			else if (t == 24)cout << "can" << "\t";
			else if (t == 25)cout << "em" << "\t";
			else if (t == 26)cout << "sub" << "\t";
			else if (t == 27)cout << "esc" << "\t";
			else if (t == 28)cout << "fs" << "\t";
			else if (t == 29)cout << "gs" << "\t";
			else if (t == 30)cout << "rs" << "\t";
			else if (t == 31)cout << "us" << "\t";
			else if (t == 32)cout << "space";
			else cout << number << "\t";
			number++;
			t++;
		}
		cout << endl << endl;
	}

#endif

#ifdef EX_3
	char key = 0;
	cout << "Данная программа позволяет вывести числа из ряда Фибоначчи, до указанного предела." << endl;
	while (key != Escape)
	{
		int limit = 0;
		cout << "Пожалуйста, предел ряда -> "; cin >> limit;
		if (cin.good())
		{
			if (limit == 0) cout << 0;
			else if (limit < 0) cout << "Введите число больше 0";
			else
			{
				int first_number = 0;
				int second_number = 1;
				int result = 0;
				cout << first_number << " "<<second_number << " ";
				while ((first_number + second_number) <= limit)
				{
					if ((first_number + second_number) <= limit)
					{
						result = first_number + second_number;
						first_number = second_number;
						second_number = result;
						cout << result << " ";
					}
				}
			}
		}
		else
		{
			cout << endl << "Некоректно введен предел ряда" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		cout <<endl<< "Проверить еще одно число? (для продолжения нажмите любую клавишу, для выхода esc) -> " << endl;
		key = _getch();
	}
#endif 

#ifdef EX_4
	char key = 0;
	cout << "Данная программа позволяет вывести заданное количество чисел из ряда Фибоначчи." << endl;
	while (key != Escape)
	{
		int	amount = 0;
		cout << "Пожалуйста, введите требуемое количество чисел -> "; cin >> amount;
		if (cin.good())
		{
			if (amount == 0) cout << " Тут совсем нет цифр ";
			else if (amount < 0) cout << "Введите число больше 0";
			else if (amount == 1) cout << " 0 ";
			else if (amount == 2) cout << " 0 1";
			else
			{
				int first_number = 0;
				int second_number = 1;
				int result = 0;
				cout << first_number << " " << second_number << " ";
				for (int i=3;i<=amount;i++)
				{
					result = first_number + second_number;
					first_number = second_number;
					second_number = result;
					cout << result << " ";
				}
			}
		}
		else
		{
			cout << endl << "Некоректно введено требуемое количество чисел" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		cout << endl << "Выполнить еще раз? (для продолжения нажмите любую клавишу, для выхода esc) -> " << endl;
		key = _getch();
	}
#endif

#ifdef EX_5
	char key = 0;
	cout << "Данная программа позволяет вывести ряд простых чисел до указанного предела." << endl;
	while (key != Escape)
	{
		int	limit = 0;
		cout << "Пожалуйста, введите значение предела ряда простых чисел -> "; cin >> limit;
		if (cin.good())
		{
			if (limit < 0) cout << "Необходимо ввести положительное число";
			else if (limit == 0 || limit == 1) cout << "Нет простых чисел до указанного Вами предела";
			else
			{
				int result = 2;
				int ost = 0;
				int counter = 0;
				while (result <= limit)
				{
					for (int i = 1; i <= result; i++)
					{
						ost = result % i;
						if (ost == 0) counter++;
					}
					if (counter == 2) cout << result << " ";
					counter = 0;
					result++;
				}
			}
		}
		else
		{
			cout << endl << "Некоректно введен предел ряда простых чисел" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		cout << endl << "Выполнить еще раз? (для продолжения нажмите любую клавишу, для выхода esc) -> " << endl;
		key = _getch();
	}
#endif

#ifdef EX_6
	cout << "Данная программа выводит на экран таблицу умножения." << endl;
	for (int i = 1; i <= 9; i++)
	{ 
		for (int j = 1; j <= 10; j++)
		{
			int result = 0;
			result = i * j;
			cout << i << " * " << j << " = " << result << endl;
		}
		cout << endl;
	}	
#endif

#ifdef EX_7
	cout << "Данная программа выводит на экран таблицу Пифагора:" << endl << endl;
	cout.width(5);
	cout << "X" << "\t";
	for (int top = 1; top <= 10; top++)
	{
		cout.width(5);
		cout << top << "\t";
	}
	cout << endl << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout.width(5);
		cout << i << "\t";
		for (int j = 1; j <= 10; j++)
		{
			int result = 0;
			result = i * j;
			cout.width(5);
			cout << result << "\t";
		}
		cout << endl;
	}
#endif
}