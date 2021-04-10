#include "pch.h"
#include "VideoStreamHelper.h"

using namespace std;
using namespace winrt;
using namespace Windows::Storage;

void VideoStreamHelper::setFilePath(StorageFile* file)
{
	this->fileAcessPoint = file;
}

void VideoStreamHelper::setHostHandler(winrt::Windows::UI::Xaml::Controls::Frame* hostFrame)
{
	this->hostFramePointer = hostFrame;
}
