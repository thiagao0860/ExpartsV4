#pragma once
class ResourceLoader
{
public:
	ResourceLoader();
	winrt::Windows::UI::Color getColorFromResource(winrt::hstring string);
	winrt::hstring getStringFromResource(winrt::hstring string);
	winrt::Windows::UI::Xaml::Style getStyleFromResource(winrt::hstring string);
};

