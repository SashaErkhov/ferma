#include <iostream>


int main()
{
	int n;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << std::endl;
	int nogi = 2 * n;//Количество ног на ферме
	int countChi;//Количество куриц
	int countCow;//Количество коров
	for (int i = 0; i != (n + 1); ++i)
	{
		countChi = i;
		if ((2 * n - countChi*2) % 4 == 0)
		{
			countCow = (2 * n - countChi) / 4;
			std::cout << "Chi = " << countChi << " Cow = " << countCow << std::endl;
		}
	}
	std::system("pause");
	return 0;
}

