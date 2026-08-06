#pragma once

#include "String.h"

class AbstractStream
{
public:
	bool SetCoding(char const *Path);

	AbstractStream(char const *Path);

	String operator<<(char const *Path);

	~AbstractStream();
};
