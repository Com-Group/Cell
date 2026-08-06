#pragma once

#include <cstdint>

class String
{
public:
	String();
	explicit String(char const *TheString);
	String(String const &TheString);
	String(String &&TheString) noexcept;

	String& operator=(String const &TheString);
	String& operator=(String &&TheString) noexcept;

	String operator+(String const &TheString);
	String operator+(char const *TheString);

	String& operator+=(String const &TheString);
	String& operator+=(char const *TheString);

	int32_t Length() const noexcept;
	int32_t Rest() const noexcept;
	bool WhetherShort() const noexcept;
	bool WhetherLong() const noexcept;

	bool operator==(String const &TheString) const noexcept;
	bool operator==(char const *TheString) const noexcept;

	bool Resize();

	~String();

private:
	struct ShortStringView
	{
		uint8_t Length;
		char TheString[15];
	};
	struct LongStringView
	{
		int32_t Rest;
		uint32_t Length;
		char *TheString;
	};

	union StringView
	{
		ShortStringView Short;
		LongStringView Long;
	};

	StringView TheString;
};