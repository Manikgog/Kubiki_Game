#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

void draw_function(int n);

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // ��������� ������� �������� �� ���� ������
	srand(time(NULL));
	std::cout << "[ ][ ][ ][ ][ ][ ][ ][ ] ���� ������ [ ][ ][ ][ ][ ][ ][ ][ ]\n������� ����:\n������ ������ �� ���� ���. � ���� � ����� �������� ������ ����� ������ ��� � �������.\n";
	std::cout << "���������� ��� ����� ������ ������.";
	char c;
	int player_points = 0;
	int summ_player_points_one_move = 0;
	int summ_player_points = 0;
	int comp_points = 0;
	int summ_comp_points_one_move = 0;
	int summ_comp_points = 0;
	std::cout << "������� \'i\' ���� ������ ������ ������: ";
	std::cin >> c;
	if (c == 'i') {
		for (int i = 0; i < 5; ++i) {
			// ������ ������
			for (int j = 0; j < 2; ++j) {
				std::cout << "������� ����� ������� ��� ������";
				if (j == 0)
					std::cout << " ������ �����.\n";
				else
					std::cout << " ������ �����.\n";
				system("pause");
				player_points = rand() % 6 + 1;
				draw_function(player_points);
				std::cout << "� ������ ������ " << player_points << '\n';
				summ_player_points_one_move += player_points;
			}
			std::cout << "� ����� �� ��� ������ ������ " << summ_player_points_one_move << '\n';

			summ_player_points += summ_player_points_one_move;
			summ_player_points_one_move = 0;
			
			// ������ ����������
			for (int j = 0; j < 2; ++j) {
				if (j == 0)
					std::cout << "������ ������ ����������.\n";
				else
					std::cout << "������ ������ ����������.\n";
				system("pause");
				comp_points = rand() % 6 + 1;
				draw_function(comp_points);
				std::cout << "� ���������� ������ " << comp_points << '\n';
				summ_comp_points_one_move += comp_points;
			}
			std::cout << "� ����� �� ��� ������ ������ " << summ_comp_points_one_move << '\n';

			summ_comp_points += summ_comp_points_one_move;
			summ_comp_points_one_move = 0;
		}
		std::cout << "� ����� �� ���� ������� � ���������� ������ " << summ_comp_points << '\n';
	}
	else {
		for (int i = 0; i < 5; ++i) {
		// ������ ����������
		for (int j = 0; j < 2; ++j) {
			if (j == 0)
				std::cout << "������ ������ ����������.\n";
			else
				std::cout << "������ ������ ����������.\n";
			system("pause");
			comp_points = rand() % 6 + 1;
			draw_function(comp_points);
			std::cout << "� ���������� ������ " << comp_points << '\n';
			summ_comp_points_one_move += comp_points;
		}
		std::cout << "� ����� �� ��� ������ ������ " << summ_comp_points_one_move << '\n';

		summ_comp_points += summ_comp_points_one_move;
		summ_comp_points_one_move = 0;

		// ������ ������
		for (int j = 0; j < 2; ++j) {
			std::cout << "������� ����� ������� ��� ������";
			if (j == 0)
				std::cout << " ������ �����.\n";
			else
				std::cout << " ������ �����.\n";
			system("pause");
			player_points = rand() % 6 + 1;
			draw_function(player_points);
			std::cout << "� ������ ������ " << player_points << '\n';
			summ_player_points_one_move += player_points;
		}
		std::cout << "� ����� �� ��� ������ ������ " << summ_player_points_one_move << '\n';

		summ_player_points += summ_player_points_one_move;
		summ_player_points_one_move = 0;

		
	}
	std::cout << "� ����� �� ���� ������� � ���������� ������ " << summ_comp_points << '\n';
	}

	if (summ_comp_points > summ_player_points) {
		std::cout << "� ���������� ������ " << summ_comp_points << " ����.\n";
		std::cout << "� ������ ������ " << summ_player_points << " ����.\n";
		std::cout << "���������� ������!\n";
	}
	else if (summ_comp_points < summ_player_points) {
		std::cout << "� ������ ������ " << summ_player_points << " ����.\n";
		std::cout << "� ���������� ������ " << summ_comp_points << " ����.\n";
		std::cout << "����� ������!\n";
	}
	else {
		std::cout << "� ������ ������ " << summ_player_points << " ����.\n";
		std::cout << "� ���������� ������ " << summ_comp_points << " ����.\n";
		std::cout << "�����!\n";
	}

	return 0;
}

void draw_function(int n) {
	/*if (n == 1) {
		std::cout << R"(
		 _______
		|       |
		|   *   |
		|       |
		 -------

)";
	}
	else if (n == 2) {
		std::cout << R"(
		 _______
		| *     |
		|       |
		|     * |
		 -------

)";
	}
	else if (n == 3) {
		std::cout << R"(
		 _______
		| *     |
		|   *   |
		|     * |
		 -------

)";
	}
	else if (n == 4) {
		std::cout << R"(
		 _______
		| *   * |
		|       |
		| *   * |
		 -------

)";
	}
	else if (n == 5) {
		std::cout << R"(
		 _______
		| *   * |
		|   *   |
		| *   * |
		 -------

)";
	}
	else if (n == 6) {
		std::cout << R"(
		 _______
		| *   * |
		| *   * |
		| *   * |
		 -------

)";
	}*/

	switch (n)
	{
	case 1: for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 1) && (j == 1)) std::cout << "\x1b[33m*\x1b[0m ";
			else std::cout << "  ";
		}
		std::cout << std::endl;
	}
		  break;
	case 2: for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 0) && (j == 0) || (i == 2) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
			else std::cout << "  ";
		}
		std::cout << std::endl;
	}
		  break;
	case 3: for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 0) && (j == 0) || (i == 2) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
			else
				if ((i == 1) && (j == 1)) std::cout << "\x1b[33m*\x1b[0m ";
				else std::cout << "  ";
		}
		std::cout << std::endl;
	}
		  break;
	case 4: for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 0) && (j == 0) || (i == 0) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
			else
				if ((i == 2) && (j == 0) || (i == 2) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
				else std::cout << "  ";
		}
		std::cout << std::endl;
	}
		  break;
	case 5: for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 0) && (j == 0) || (i == 0) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
			else
				if ((i == 1) && (j == 1)) std::cout << "\x1b[33m*\x1b[0m ";
				else
					if ((i == 2) && (j == 0) || (i == 2) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
					else std::cout << "  ";
		}
		std::cout << std::endl;
	}
		  break;
	case 6: for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 0) && (j == 0) || (i == 0) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
			else
				if ((i == 1) && (j == 0) || (i == 1) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
				else
					if ((i == 2) && (j == 0) || (i == 2) && (j == 2)) std::cout << "\x1b[33m*\x1b[0m ";
					else std::cout << "  ";
		}
		std::cout << std::endl;
	}
		  break;
	}
	std::cout << std::endl;
}


