#include <iostream>
#include "Statistics.h"
#include <conio.h>
#include <Windows.h>

int main()
{
	char ch = 0;
	int first = 0, second = 0, third = 0, fourth = 0;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	do {
		printf("\nЁта программа предназначена дл€ тестировани€ функций из заголовочного файла statistics.h.\n"
			"—колько чисел будет в тестовой последовательности Ц 1, 2, 3"
			"или 4 ? (дл€ завершени€ работы введите 0)\n");
		scanf_s("\n");
		ch = getchar();
		switch (ch) {

		case '1': 
			printf("¬ведите число\n");
			std::cin >> first;
			std::cout << "—реднее значение: " << average(first) << "; —реднеквадратическое отклонение: " << standard_deviation(first) << ".";
			break;
	
		case '2':
			printf("¬ведите первое число\n");
			std::cin >> first;
			printf("¬ведите второе число\n");
			std::cin >> second;
			std::cout << "—реднее значение: " << average(first, second) << "; —реднеквадратическое отклонение: " << standard_deviation(first, second) << ".";
			break;

		case '3': 
			printf("¬ведите первое число\n");
			std::cin >> first;
			printf("¬ведите второе число\n");
			std::cin >> second;
			printf("¬ведите третье число\n");
			std::cin >> third;
			std::cout << "—реднее значение: " << average(first, second, third) << "; —реднеквадратическое отклонение: " << standard_deviation(first, second, third) << ".";
			break;
	
		case '4': 
			printf("¬ведите первое число\n");
			std::cin >> first;
			printf("¬ведите второе число\n");
			std::cin >> second;
			printf("¬ведите третье число\n");
			std::cin >> third;
			printf("¬ведите четвЄртое число\n");
			std::cin >> fourth;
			std::cout << "—реднее значение: " << average(first, second, third, fourth) << "; —реднеквадратическое отклонение: " 
				<< standard_deviation(first, second, third, fourth) << ".";
			break;

		case '0': return 0;
		default:
			printf("Ќет такой команды\nPress any key");
			_getch();
		}

	} while (ch != '0');

	return 0;
}