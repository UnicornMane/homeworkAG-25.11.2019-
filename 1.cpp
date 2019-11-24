﻿#include <iostream>

int main()
{
	// 2020 * x + 2021 * y = 78487894;
	// можно подобрать, что x = - 78487894, а y = 78487894 (78487894(-2020 + 2021) = 78487894)
	// 
	// 2020 * x + 2021 * y = -78487894 * 2020 + 78487894 * 2021;
	// 2020 * ( x + 78487894) = 2021 * (78487894 - y);
	// 
	// => 78487894 - y = 2020 * i (т.к. 2020 и 2021 -- взаимно простые, то из этого следует, что 78487894 - y делится на 2020)
	// => y = 78487894 - 2020 * i
	//
	//аналогично для x: x + 78487894 = 2021 * i;
	//x = 2021 * i - 78487894;
	//
	//i >= (78487894 + 1) / 2021 = 38 837; i <= (78487894 - 1) / 2020 = 38855


	for (auto i = 38837; i <= 38855; i++)
	{
		std::cout << "(" << 2021 * i - 78487894 << "; " << 78487894 - 2020 * i << ")" << "\n";
	}
	//перебоор эффективный потому что это не перебор
	//цикл делает всего 19 итераций и программа работает за О(1)
}
