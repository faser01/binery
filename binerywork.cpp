#include <iostream>
#include <string>
#include <cmath>
//байт минимальная ячейка информации

#define chui(ch) (unsigned int)ch

std::string tobinary(char num);
std::string tobinary(short num);
std::string tobinary(int num);
int tohex(std::string bin);


int main()
{
	setlocale(LC_ALL, "Russian");
	

	unsigned char n, m;
	unsigned char result;
	//битовые сдвиги влево и вправо
	/*n = 5 << 1; //00100010 ячейка памяти из 8 битов рез10001000
	std::cout << chui(n) << std:: endl;

	n = 100>> 2;//
	std::cout << chui(n) << std::endl;

	// инверсия

	n = 4;//00000100
	n = ~n;//11111011
	std::cout << chui(n) << std::endl;//

	/*unsigned int x = 10;//у инта другой диапазон, поэтому число другое
	x = ~x;
	std::cout << x << std::endl;*/
//битовое И

	/*n = 17;
	m = 205;
	result = m & n;
	std::cout << chui(result) << std::endl;
//битовое ИЛИ  ТОЧНО ТАК ЖЕ КАК И ЛОГИЧЕСКОЕ ИЛИ

	n = 152;
	m = 43;
	result = m | n;
	std::cout << chui(result) << std::endl;
//исключающее или

	n = 154;
	m = 43;
	result = m ^ n;
	std::cout << chui(result) << std::endl;*/

	//задача 1

	/*std::cout << "Задача 1" << std::endl;
	char z1ch = 77;			//1001101
	short z1sh = 1555;		//11000010011
	int z1i = 88000;	//10101011111000000
	std::cout << " char " << chui(z1ch) << " = " << tobinary(z1ch) << std::endl;//
	std::cout << " short " << (z1sh)<< " = " << tobinary(z1sh) << std::endl;
	std::cout << " int  " << (z1i) << " = " << tobinary(z1i) << std::endl;*/
	try
	{
		std::cout << "Задача 1\nВведите двоичный код" << std::endl;
		std::string bin;
		std::cin >> bin;
		std::cout << bin << " = " << tohex(bin);
	}
		catch (const std::invalid_argument& ex)
		{
			std::cout << "ошибка" << ex.what() << std::endl;
		}
	


	
	return 0;

}


std::string tobinary(char num)
{
	std::string res; // хранит в себе двоичное число
	for (int i = 7; i >= 0; i--)
	{
		int X = (num >> i) & 1;
		res +=std:: to_string(X);
	}
}
std::string tobinary(short num)
{
	std::string res; // хранит в себе двоичное число
	for (int i = 15; i >= 0; i--)
	{
		int X= (num >> i) & 1;
		res += std::to_string(X);
	}

	return res;
}

std::string tobinary(int num)
{
	std::string res; // хранит в себе двоичное число
	for (int i = 31; i >= 0; i--)
	{
		int X = (num >> i) & 1;
		res += std::to_string(X);
	}
}


int tohex(std::string bin)
{
	
	int res = 0;

	for (int i=bin.length() - 1; i >= 0; i--)//перебираем числа с конца
	{
		if (bin[i] != '0' && bin[i] != '0')
			throw std::invalid_argument("not binary");
		int tmp = bin[i] - '0';
		tmp = tmp * pow ( 2,bin.length() - i - 1);
		res += tmp;
	}

	return res;
}

