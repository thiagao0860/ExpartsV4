#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "BaseLayout/TitleBar.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::ExpartsV4::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }
   
    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        //myButton().Content(box_value(L"Clicked"));
    }
}


void winrt::ExpartsV4::implementation::MainPage::NavView_ItemInvoked(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args)
{

}


void winrt::ExpartsV4::implementation::MainPage::NavView_Loaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
    //std::shared_ptr<TitleBar> titleBar = std::make_shared<TitleBar>(TitleBar());
    this->AppTitleBar().Navigate(xaml_typename<ExpartsV4::TitleBar>());
}
