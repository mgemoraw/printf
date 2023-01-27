#include "main.h"

/**
* get_flag - turns on flags if found by printf
* @s: character that holds flag
* @f: pointer to the struct flags
* Return: 1 if a flag is turned on 0 otherwise
*/
int get_flag(char const *format, int *index)
{
    int i = 0, j,  flag = 0;
    const char flag_ch[] = {'-', '+', '0', '#', ' ', '\0'};
    const int flag_num[] = {MINUS, PLUS, ZERO, HASH, SPACE, 0};

    for (i = *index + 1; format[i] != '\0'; i++)
    {
        for (j = 0; flag_ch[j] != '\0'; j++)
        {
            if (format[i] == flag_ch[j])
            {
                flag |= flag_num[j];
                break;
            }
        }
        if (flag_ch[j] == 0)
        {
            break;
        }
    }
    *index = i - 1;
    return (flag);
}

/**
* get_width - returns the width of formatting
* @foramt: input foramtted text
* @index: pointer to current index
* @args: argument to current list
* Return: returns width
*/
int get_width(const char *format, int *index, va_list args)
{
    int j = 0, width = 0;

    for (j = *index; format[j] != '\0'; j++)
    {
        if (is_digit(format[j]))
        {
            width *= 10;
            width += format[j] - '0';
        }

        else if (format[j] == '*')
        {
            j++;
            width = va_arg(args, int);
            break;
        }
        else
            break;
    
    }
    *index = j - 1;
    return (width);
}

/**
* get_precision - finds the precesion formater and returns precision
* @format: input formatted text
* @index: pointer to index of formatted text
* @args: current argument
* Return: precision
*/
int get_precision(char const *format, int *index, va_list args)
{
    int i = *index + 1;
    int precision = -1;

    if (format[i] != '.')
    {
        return (precision);
    }

    precision = 0;

    for (i += 1; format[i] != '\0'; i++)
    {
        if (is_digit(format[i]))
        {
            precision *= 10;
            precision += format[i] -'0';
        }
        else if (format[i] == '*')
        {
            i++;
            precision = va_arg(args, int);
            break;
        }
        else
            break;
    }
    *index = i -1;
    return (precision);
}
