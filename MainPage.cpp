#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "BaseLayout/TitleBar.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Notifications;
using namespace Windows::Data::Xml::Dom;

namespace winrt::ExpartsV4::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        this->AppTitleBar().Navigate(xaml_typename<ExpartsV4::TitleBar>());
    }
   
}


void winrt::ExpartsV4::implementation::MainPage::NavView_ItemInvoked(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args)
{
     winrt::hstring invoked_string  =  args.InvokedItemContainer().Name();
     auto foundItem = this->navItems.find(invoked_string);
     XmlDocument doc;
     switch (foundItem->second)
     {
     case HOME:
         doc.LoadXml(L"<toast>\
            </toast>");
         ToastNotificationManager::CreateToastNotifier().Show(ToastNotification{doc});
         break;
     case MONITOR:
         OutputDebugString(L"pegou");
         break;
     default:

         break;
     }
}


void winrt::ExpartsV4::implementation::MainPage::NavView_Loaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{

}
