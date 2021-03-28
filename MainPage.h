#pragma once

#include "MainPage.g.h"

namespace winrt::ExpartsV4::implementation
{
    enum NavViewItemsEnum {
        HOME=0,
        MONITOR=1
    };
    struct MainPage : MainPageT<MainPage>
    {
        std::map<winrt::hstring, NavViewItemsEnum> navItems = {
            {L"home_navigation",HOME},
            {L"monitor_navigation",MONITOR}
        };

        MainPage();

        void NavView_ItemInvoked(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args);
        void NavView_Loaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::ExpartsV4::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
