#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

// Добавить перегрузку к символам
int printVector(vector<int> vec)
{
	cout << endl;
	for (int i = 0; i < sizeof(vec); i++)
	{
		cout << vec[i];
	}

	return 0;
}
int printVector(vector<int64_t> vec)
{
	cout << endl;
	for (int i = 0; i < sizeof(vec); i++)
	{
		cout << vec[i];
	}

	return 0;
}
int printVector(vector<string> vec)
{
	cout << endl;
	for (int i = 0; i < sizeof(vec); i++)
	{
		cout << vec[i];
	}

	return 0;
}

int fillVector(vector<int>& vec)
{
	for (int i = 0; i < sizeof(vec); i++)
	{
		cin >> vec[i];
	}

	return 0;
}

int main()
{
	vector<int> inputVec;
	inputVec.resize(3);
	char val;

	string swich;

	vector<string> numbers = { "00110000", "00110001", "00110010", "00110011", "00110100", "00110101", "00110110", "00110111", "00111000", "00111001" };

	vector<string> lettersDown = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w","x", "y", "z"};
	vector<string> lettersUp   = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

	vector<string> lettersKeyDown = { "01100001", "00100000", "01100010", "00100000", "01100011", "00100000", "01100100", "00100000", "01100101",
		"00100000", "01100110", "00100000", "01100111", "00100000", "01101000", "00100000", "01101001", "00100000", "01101010", "00100000", "01101011",
		"00100000", "01101100", "00100000", "01101101", "00100000", "01101110", "00100000", "01101111", "00100000", "01110000", "00100000", "01110001",
		"00100000", "01110010", "00100000", "01110011", "00100000", "01110100", "00100000", "01110101", "00100000", "01110110", "00100000", "01110111",
		"00100000", "01111000", "00100000", "01111001", "00100000", "01111010", };
	//vector<string> lettersKeyUp   = {  };

	int64_t num, y, size_of_numbers = 0, del = 1;

	Beep(100, 100);
	Beep(200, 100);

	cout << "Input value:" << endl;
	cin >> num;
	cout << "Include space ? (y/n):" << endl;
	cin >> swich;
	y = num;

	// Количество чисел
	for (; y != 0; size_of_numbers++)
	{
		//cout << num << endl;
		y /= 10;
	}

	// Поиск максимального делителя (напр если число 235 то делитель 100)
	for (int64_t size_of_numbers2 = size_of_numbers; size_of_numbers2 != 0; size_of_numbers2--)
	{
		del *= 10;
	}
	del /= 10;    // Избавление от лишнего нуля

	int64_t num2 = num;   // Создание клона

	while (num != 0)    //>>555
	{
		num2 /= del;    // 5
		//cout << num2 << endl;

		for (int i = 0; i < 10; i++)
		{
			if (num2 == i && swich == "y")
			{
				cout << numbers[i] << " ";
			}
			else if (num2 == i && swich == "n")
			{
				cout << numbers[i];
			}
		}

		num = num - (del * num2);   // 55 (создание тогоже числа но без первого знака
		num2 = num;   // 55                напр 235 то num = 35
		del /= 10;    // 10   Сокращение делителя потомучто от первого числа уже избавились
	}


	//fillVector(inputVec);
	//printVector(inputVec);

	//printVector(numbers);

	cout << endl << endl;
	system("pause");
	return 0;
}
