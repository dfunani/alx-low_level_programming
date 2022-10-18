/**
 * _islower - Returns pos or neg is low or upp
 * @c: The single char to be evaluated
 *
 * Return: 0 or 1
 *
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
