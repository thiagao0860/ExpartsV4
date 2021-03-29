#include "pch.h"
#include "ResourceLoader.h"

using namespace winrt;
using namespace Windows::UI;
using namespace Windows::UI::Xaml;
using namespace Windows::Foundation;
using namespace std;

ResourceLoader::ResourceLoader()
{
}

Color ResourceLoader::getColorFromResource(hstring string)
{
	shared_ptr<ResourceDictionary> res =  make_shared<ResourceDictionary>(ResourceDictionary());
	res->Source(Uri(L"ms-appx:///StaticResources/Colors.xaml"));
	return res->Lookup(box_value(string)).try_as<Color>().value();
}

hstring ResourceLoader::getStringFromResource(hstring string)
{
	shared_ptr<ResourceDictionary> res = make_shared<ResourceDictionary>(ResourceDictionary());
	res->Source(Uri(L"ms-appx:///StaticResources/Strings.xaml"));
	return res->Lookup(box_value(string)).try_as<hstring>().value();
}

Style ResourceLoader::getStyleFromResource(hstring string)
{
	shared_ptr<ResourceDictionary> res = make_shared<ResourceDictionary>(ResourceDictionary());
	res->Source(Uri(L"ms-appx:///StaticResources/Styles.xaml"));
	return res->Lookup(box_value(string)).try_as<Style>();
}
