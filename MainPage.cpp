#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "BaseLayout/TitleBar.h"
#include "BaseLayout/StandardNotify.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Notifications;
using namespace Windows::Data::Xml::Dom;
using namespace Windows::Foundation;

namespace winrt::ExpartsV4::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        this->AppTitleBar().Navigate(xaml_typename<ExpartsV4::TitleBar>());
    }
   
    void MainPage::NavView_ItemInvoked(NavigationView const& sender, NavigationViewItemInvokedEventArgs const& args)
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
             this->ContentFrame().Navigate(xaml_typename<ExpartsV4::HomePage>());
             break;
         case MONITOR:
             this->ContentFrame().Navigate(xaml_typename<ExpartsV4::MonitorRTPage>());
             break;
         default:
             OutputDebugString(L"Inconsistent NavView_ItemInvoked call");
             break;
         }
    }

    void MainPage::NavView_Loaded(IInspectable const& sender, RoutedEventArgs const& e)
    {
        this->ContentFrame().Navigate(xaml_typename<ExpartsV4::HomePage>());
    }
}




