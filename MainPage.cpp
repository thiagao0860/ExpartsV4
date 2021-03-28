#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "BaseLayout/TitleBar.h"
#include "BaseLayout/StandardNotify.h"

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
     if (args.IsSettingsInvoked()) {
         StandardNotify(L"Settings", L"Settings Selected").Show();
         return;
     }
     winrt::hstring invoked_string  =  args.InvokedItemContainer().Name();
     auto foundItem = this->navItems.find(invoked_string);
     switch (foundItem->second)
     {
     case HOME:
         StandardNotify(L"Homepage Loaded",L"Homepage under construction").Show();
         break;
     case MONITOR:
         StandardNotify(L"Monitor Loaded", L"Real time monitor under construction").Show();
         break;
     default:
         OutputDebugString(L"Inconsistent NavView_ItemInvoked call");
         break;
     }
}


void winrt::ExpartsV4::implementation::MainPage::NavView_Loaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{

}
