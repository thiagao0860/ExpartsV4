#pragma once
#include "pch.h"

class StandardDialog
{
public:
	StandardDialog(winrt::hstring title, winrt::hstring message);
	
	void Show();
private:
	std::shared_ptr<winrt::Windows::UI::Xaml::Controls::ContentDialog> dialog;
};

