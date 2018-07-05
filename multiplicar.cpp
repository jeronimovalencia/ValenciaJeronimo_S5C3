#include <iostream>

int a = 10;
int b = 19;

int multiplicar(int a, int b)
{
	return a*b;
}

int cuadrado(int a)
{
	return a*a;
}

int main()
{
	std::cout << " El producto de " << a << " y " << b << " es " << multiplicar(a,b) << std::endl;
	std::cout << " El numero " << a << " al cuadrado es " << cuadrado(a) << std::endl;
	return 0;
}
