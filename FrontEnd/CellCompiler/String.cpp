#include <cstring>
#include <stdexcept>

#include "String.h"

using namespace std;

String::String(const char *TheString)
{
	if (TheString == nullptr)
	{
		throw invalid_argument("String is null");
	}

	uint32_t Size = 0;
	while (TheString[Size] != '\0')
	{
		Size++;
	};

	if (Size == 0)
	{

	}
	if (Size <= 15)
	{

	}
};
