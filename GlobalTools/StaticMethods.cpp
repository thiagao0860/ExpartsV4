#include "pch.h"
#include "StaticMethods.h"

using namespace winrt;
using namespace std;
using namespace Windows::Globalization;
using namespace Windows::Globalization::DateTimeFormatting;
using namespace Windows::Foundation;

string StaticMethods::getTimeStampS()
{
	return std::string();
}

hstring StaticMethods::getTimeStampH()
{
	Calendar vCalendar;
	DateTime dt{ vCalendar.GetDateTime() };
	DateTimeFormatter dtf(L"longdate");
	hstring formated{ dtf.Format(dt) };
	return formated;
}
