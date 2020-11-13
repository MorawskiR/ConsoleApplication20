
#include <iostream>
void slicz(char cos);
#include "Nagłówek.h"
using namespace std;
int main()
{
	Stack s1;
	Customer cz;
	std::cout << "czy chcesz stworzyc strukture ? Y / N ";
	while ((std::cin>>wybor) || toupper(wybor) != 'Y' || toupper(wybor) != 'N')
	{
		
		slicz(wybor);
		{
			std::cout << "czy chcesz stworzyc strukture ? podaj ponownie  Y / N ";
		}
	}

}
void slicz(char cos)
{
	switch (wybor)
	{
	case 'Y':
	std::	cout << "podaj wlasna nazwe: " << std::endl;
	
		break;
	case 'N':
		std::cout << "wprowadzona nazwa zostanie wybrana samoistnie. " << std::endl;
		break;
	}
}