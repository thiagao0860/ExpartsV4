#pragma once
#include "pch.h"
#include "StandardNotify.h"

using namespace winrt;
using namespace Windows::Data::Xml::Dom;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Notifications;
using namespace std;

StandardNotify::StandardNotify()
{
	XmlDocument doc;
	doc.LoadXml(L"<toast></toast>");
	this->not =  make_shared<ToastNotification>(ToastNotification{ doc });
}

StandardNotify::StandardNotify(hstring title ,hstring message)
{
	XmlDocument doc;
	doc.LoadXml(L"<toast>\
				<visual>\
					<binding template=\"ToastGeneric\">\
						<text>"+title+L"</text>\
						<text>"+message+L"</text>\
					</binding>\
				</visual>\
				</toast>");
	this->not = make_shared<ToastNotification>(ToastNotification{ doc });
}

StandardNotify::StandardNotify(XmlDocument messageDocument)
{
	this->not = make_shared<ToastNotification>(ToastNotification(messageDocument));
}

void StandardNotify::Show()
{
	ToastNotificationManager::CreateToastNotifier().Show(*this->not.get());
}

