#include <iostream>
#include <exception>
#include <string>

int functions(std::string str, int forbidden_length) {
	int length = str.length();
	if (length == forbidden_length) {
		throw std::length_error("Вы ввели слово запретной длины!");
	}
	return length;
	}

int main() {
	setlocale(LC_ALL, "rus");
	std::string str;
	int forbidden_length = 0;
	metka : std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	std::cout << "Введите слово: ";
	std::cin >> str;
	std::cout << "Длина слова " << str << " равна " << str.length() << std::endl;
	if (str.length() != forbidden_length)
		goto metka;
	try
	{		
	std::cout << functions(str, forbidden_length) << std::endl;
	}
	catch(const std::length_error& len)
	{
		std::cout << len.what() << " До свидания" << std::endl;
	}

	return 0;
}
