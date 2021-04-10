#include "pch.h"
#include "CameraHelper.h"

void CameraHelper::setHostHandler(winrt::Windows::UI::Xaml::Controls::Frame* hostFrame)
{
	this->hostFramePointer = hostFrame;
}
