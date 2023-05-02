#include <iostream>

void flipLine(std::string &str)
{
	for (std::size_t i = 0, j = str.length() - 1; i <= str.length() / 2; )
	{
		char temp = str[i];
		str[i++] = str[j];
		str[j--] = temp;
	}
}

void printStr(std::string &str)
{
    for(std::size_t k = 0; k < str.length(); ++k)
    {
        std::cout << str[k] << std::endl;
    }
}

