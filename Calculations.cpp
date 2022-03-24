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
		printf("\n��� ��������� ������������� ��� ������������ ������� �� ������������� ����� statistics.h.\n"
			"������� ����� ����� � �������� ������������������ � 1, 2, 3"
			"��� 4 ? (��� ���������� ������ ������� 0)\n");
		scanf_s("\n");
		ch = getchar();
		switch (ch) {

		case '1': 
			printf("������� �����\n");
			std::cin >> first;
			std::cout << "������� ��������: " << average(first) << "; �������������������� ����������: " << standard_deviation(first) << ".";
			break;
	
		case '2':
			printf("������� ������ �����\n");
			std::cin >> first;
			printf("������� ������ �����\n");
			std::cin >> second;
			std::cout << "������� ��������: " << average(first, second) << "; �������������������� ����������: " << standard_deviation(first, second) << ".";
			break;

		case '3': 
			printf("������� ������ �����\n");
			std::cin >> first;
			printf("������� ������ �����\n");
			std::cin >> second;
			printf("������� ������ �����\n");
			std::cin >> third;
			std::cout << "������� ��������: " << average(first, second, third) << "; �������������������� ����������: " << standard_deviation(first, second, third) << ".";
			break;
	
		case '4': 
			printf("������� ������ �����\n");
			std::cin >> first;
			printf("������� ������ �����\n");
			std::cin >> second;
			printf("������� ������ �����\n");
			std::cin >> third;
			printf("������� �������� �����\n");
			std::cin >> fourth;
			std::cout << "������� ��������: " << average(first, second, third, fourth) << "; �������������������� ����������: " 
				<< standard_deviation(first, second, third, fourth) << ".";
			break;

		case '0': return 0;
		default:
			printf("��� ����� �������\nPress any key");
			_getch();
		}

	} while (ch != '0');

	return 0;
}