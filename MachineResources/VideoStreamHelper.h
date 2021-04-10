#pragma once
#include "Monitor.h"

class VideoStreamHelper : public Monitor
{
public:
	VideoStreamHelper() :Monitor() {};
	void setFilePath(winrt::Windows::Storage::StorageFile* file);
	void setHostHandler(winrt::Windows::UI::Xaml::Controls::Frame* hostFrame);

private:
	winrt::Windows::UI::Xaml::Controls::Frame* hostFramePointer;
	winrt::Windows::Storage::StorageFile* fileAcessPoint;
};