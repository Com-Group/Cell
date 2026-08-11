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

	~String();

	String operator+(char const *TheString) const;
	String operator+(String const &TheString) const;

	String& operator+=(String const &TheString);
	String& operator+=(char const *TheString);

	bool operator==(char const *TheString) const noexcept;
	bool operator==(String const &TheString) const noexcept;

	size_t Length() const noexcept;
	size_t Rest() const noexcept;
	size_t Capacity() const noexcept;

	bool WhetherShort() const noexcept;
	bool WhetherLong() const noexcept;

	void Clear();
	void PreAllocate(size_t NewSize);
	void ReSize(size_t NewSize);

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
