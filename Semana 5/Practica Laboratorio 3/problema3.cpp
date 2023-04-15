/*Los factores primos de 13195 son 5, 7, 13 y 29.
¿Cuál es el mayor factor primo del número 600851475143?
*/

#include <iostream>
 
long long primo(long long n)
{
	if (n % 2 == 0)
	{	
        return 0;
    }		
	for (long long i = 3; i <= ((n / 2) + 1); i += 2)	
	{
		if (n % i == 0)
			return 0;	//no primo
	}
	return 1;
}
 
long long primo_mayor(long long n)
{
	long long factor = 0;
	for(long long x = 3; x <= n; x += 2)
	{
		if (n % x == 0)
		{
			if (primo(x))
			{
				factor = x;
				std::cout << factor << std::endl;
			}
		}
	}
	return factor;
}

int main()
{
	long long numero = 600851475143;
	std::cout << "El mayor factor primo de 600851475143 es:\n" <<primo_mayor(numero);
 
	return 0;
}