#include <iostream>
#include <string>
#include <cmath>
//���� ����������� ������ ����������

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
	//������� ������ ����� � ������
	/*n = 5 << 1; //00100010 ������ ������ �� 8 ����� ���10001000
	std::cout << chui(n) << std:: endl;

	n = 100>> 2;//
	std::cout << chui(n) << std::endl;

	// ��������

	n = 4;//00000100
	n = ~n;//11111011
	std::cout << chui(n) << std::endl;//

	/*unsigned int x = 10;//� ���� ������ ��������, ������� ����� ������
	x = ~x;
	std::cout << x << std::endl;*/
//������� �

	/*n = 17;
	m = 205;
	result = m & n;
	std::cout << chui(result) << std::endl;
//������� ���  ����� ��� �� ��� � ���������� ���

	n = 152;
	m = 43;
	result = m | n;
	std::cout << chui(result) << std::endl;
//����������� ���

	n = 154;
	m = 43;
	result = m ^ n;
	std::cout << chui(result) << std::endl;*/

	//������ 1

	/*std::cout << "������ 1" << std::endl;
	char z1ch = 77;			//1001101
	short z1sh = 1555;		//11000010011
	int z1i = 88000;	//10101011111000000
	std::cout << " char " << chui(z1ch) << " = " << tobinary(z1ch) << std::endl;//
	std::cout << " short " << (z1sh)<< " = " << tobinary(z1sh) << std::endl;
	std::cout << " int  " << (z1i) << " = " << tobinary(z1i) << std::endl;*/
	try
	{
		std::cout << "������ 1\n������� �������� ���" << std::endl;
		std::string bin;
		std::cin >> bin;
		std::cout << bin << " = " << tohex(bin);
	}
		catch (const std::invalid_argument& ex)
		{
			std::cout << "������" << ex.what() << std::endl;
		}
	


	
	return 0;

}


std::string tobinary(char num)
{
	std::string res; // ������ � ���� �������� �����
	for (int i = 7; i >= 0; i--)
	{
		int X = (num >> i) & 1;
		res +=std:: to_string(X);
	}
}
std::string tobinary(short num)
{
	std::string res; // ������ � ���� �������� �����
	for (int i = 15; i >= 0; i--)
	{
		int X= (num >> i) & 1;
		res += std::to_string(X);
	}

	return res;
}

std::string tobinary(int num)
{
	std::string res; // ������ � ���� �������� �����
	for (int i = 31; i >= 0; i--)
	{
		int X = (num >> i) & 1;
		res += std::to_string(X);
	}
}


int tohex(std::string bin)
{
	
	int res = 0;

	for (int i=bin.length() - 1; i >= 0; i--)//���������� ����� � �����
	{
		if (bin[i] != '0' && bin[i] != '0')
			throw std::invalid_argument("not binary");
		int tmp = bin[i] - '0';
		tmp = tmp * pow ( 2,bin.length() - i - 1);
		res += tmp;
	}

	return res;
}

