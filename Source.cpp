#include <iostream>

class Mesaj
{
public:
	Mesaj()
	{
		std::cout << "Acesta este primul meu constructor." << std::endl;
	}
};

int main()
{
	Mesaj m;

	system("pause");
}