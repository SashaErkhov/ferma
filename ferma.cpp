#include <iostream>


int main()
{
	int n;
	int count = 0;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << std::endl;
	int nogi = 2 * n;//Количество ног на ферме
	int countChi;//Количество куриц
	int countCow;//Количество коров
	for (int i = 0; i != (n + 1); ++i)
	{
		countChi = i;
		count += 1;
		if ((2 * n - countChi*2) % 4 == 0)
		{
			countCow = (2 * n - countChi) / 4;
			std::cout << "Chi = " << countChi << " Cow = " << countCow << std::endl;
		}
	}
	std::cout << count << std::endl;
	return 0;
}

