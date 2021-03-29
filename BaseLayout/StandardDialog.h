#pragma once
class StandardDialog
{
public:
	StandardDialog(winrt::hstring title, winrt::hstring message);
	StandardDialog(winrt::Windows::UI::Xaml::Controls::ContentControl ContentControl);
	void Show();
private:
	std::shared_ptr<winrt::Windows::UI::Xaml::Controls::ContentDialog> dialog;
};

