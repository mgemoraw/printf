#include "main.h"


/**
* _puts - prints string array in to the stdout
* @str: string character
* Note: this _version of _puts doesn't add '\n' at the ende of each call
* Return: returns number of characters send to stdout + 1;
* Mengistu Getie
*/
int _puts(char const *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	return (i + 1);
}
/**
* _wputs - wputs function
* @buff: string input
* Return: returns interger
*/
int _wputs(char const *buff)
{
	/*int buff_index = 0;*/
	if (*buff)
		_wputs((char *)(buff + 1));
	return (write(1, buff++, 1));

}

