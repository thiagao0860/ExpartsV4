#pragma once

class Monitor
{
private:

public:
	Monitor() = default;
	virtual void setHostHandler(winrt::Windows::UI::Xaml::Controls::Frame* hostFrame) = 0;
};

