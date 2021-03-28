#pragma once
#include "pch.h"

class StandardNotify
{
public:
	StandardNotify();
	StandardNotify(winrt::hstring title,winrt::hstring message);
	StandardNotify(winrt::Windows::Data::Xml::Dom::XmlDocument messageDocument);

	void Show();
private:
	std::shared_ptr<winrt::Windows::UI::Notifications::ToastNotification> not;
};

