
float sumar(float a, float b)
{
	return a + b;
}

float restar(float a, float b)
{
	return a - b;
}

int multiplicar(int a, int b)
{
	int total = 0;
	while (b--)
		total += a;

	return total;
}

int potencia(int a, int b)
{
	if (b)
	{
		int total = a;
		int counter;
		for (counter = 1; counter < b; counter++)
			total *= a;

		return total;
	}
	return 1;
}

