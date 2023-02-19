#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

void draw_function(int n);

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // установка кодовой страницы на ввод текста
	srand(time(NULL));
	std::cout << "[ ][ ][ ][ ][ ][ ][ ][ ] Игра кубики [ ][ ][ ][ ][ ][ ][ ][ ]\nПравила игры:\nКидаем кубики по пять раз. У кого в сумма выпавших костей будет больше тот и выиграл.\n";
	std::cout << "Определяем кто будет кидать первым.";
	char c;
	int player_points = 0;
	int summ_player_points_one_move = 0;
	int summ_player_points = 0;
	int comp_points = 0;
	int summ_comp_points_one_move = 0;
	int summ_comp_points = 0;
	std::cout << "Введите \'i\' если хотите кидать первым: ";
	std::cin >> c;
	if (c == 'i') {
		for (int i = 0; i < 5; ++i) {
			// броски игрока
			for (int j = 0; j < 2; ++j) {
				std::cout << "Нажмите любую клавишу для броска";
				if (j == 0)
					std::cout << " первой кости.\n";
				else
					std::cout << " второй кости.\n";
				system("pause");
				player_points = rand() % 6 + 1;
				draw_function(player_points);
				std::cout << "У игрока выпало " << player_points << '\n';
				summ_player_points_one_move += player_points;
			}
			std::cout << "В сумме за два броска выпало " << summ_player_points_one_move << '\n';

			summ_player_points += summ_player_points_one_move;
			summ_player_points_one_move = 0;
			
			// броски компьютера
			for (int j = 0; j < 2; ++j) {
				if (j == 0)
					std::cout << "Первый бросок компьютера.\n";
				else
					std::cout << "Второй бросок компьютера.\n";
				system("pause");
				comp_points = rand() % 6 + 1;
				draw_function(comp_points);
				std::cout << "У компьютера выпало " << comp_points << '\n';
				summ_comp_points_one_move += comp_points;
			}
			std::cout << "В сумме за два броска выпало " << summ_comp_points_one_move << '\n';

			summ_comp_points += summ_comp_points_one_move;
			summ_comp_points_one_move = 0;
		}
		std::cout << "В сумме за пять бросков у компьютера выпало " << summ_comp_points << '\n';
	}
	else {
		for (int i = 0; i < 5; ++i) {
		// броски компьютера
		for (int j = 0; j < 2; ++j) {
			if (j == 0)
				std::cout << "Первый бросок компьютера.\n";
			else
				std::cout << "Второй бросок компьютера.\n";
			system("pause");
			comp_points = rand() % 6 + 1;
			draw_function(comp_points);
			std::cout << "У компьютера выпало " << comp_points << '\n';
			summ_comp_points_one_move += comp_points;
		}
		std::cout << "В сумме за два броска выпало " << summ_comp_points_one_move << '\n';

		summ_comp_points += summ_comp_points_one_move;
		summ_comp_points_one_move = 0;

		// броски игрока
		for (int j = 0; j < 2; ++j) {
			std::cout << "Нажмите любую клавишу для броска";
			if (j == 0)
				std::cout << " первой кости.\n";
			else
				std::cout << " второй кости.\n";
			system("pause");
			player_points = rand() % 6 + 1;
			draw_function(player_points);
			std::cout << "У игрока выпало " << player_points << '\n';
			summ_player_points_one_move += player_points;
		}
		std::cout << "В сумме за два броска выпало " << summ_player_points_one_move << '\n';

		summ_player_points += summ_player_points_one_move;
		summ_player_points_one_move = 0;

		
	}
	std::cout << "В сумме за пять бросков у компьютера выпало " << summ_comp_points << '\n';
	}

	if (summ_comp_points > summ_player_points) {
		std::cout << "У компьютера выпало " << summ_comp_points << " очка.\n";
		std::cout << "У игрока выпало " << summ_player_points << " очка.\n";
		std::cout << "Компьютера выграл!\n";
	}
	else if (summ_comp_points < summ_player_points) {
		std::cout << "У игрока выпало " << summ_player_points << " очка.\n";
		std::cout << "У компьютера выпало " << summ_comp_points << " очка.\n";
		std::cout << "Игрок выграл!\n";
	}
	else {
		std::cout << "У игрока выпало " << summ_player_points << " очка.\n";
		std::cout << "У компьютера выпало " << summ_comp_points << " очка.\n";
		std::cout << "Ничья!\n";
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


