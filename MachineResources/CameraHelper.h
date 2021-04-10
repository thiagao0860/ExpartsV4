#pragma once
#include "Monitor.h"

class CameraHelper : public  Monitor
{
public:
	CameraHelper() : Monitor() {};
	void setHostHandler(winrt::Windows::UI::Xaml::Controls::Frame* hostFrame);
private:
	winrt::Windows::UI::Xaml::Controls::Frame* hostFramePointer;
};

