#pragma once

#include "MonitorRTPage.g.h"

namespace winrt::ExpartsV4::implementation
{
    struct MonitorRTPage : MonitorRTPageT<MonitorRTPage>
    {
        MonitorRTPage();
        void SearchButton_onClick(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void RefreshButton_onClick(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void StartLearningButton_onClick(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);

    };
}

namespace winrt::ExpartsV4::factory_implementation
{
    struct MonitorRTPage : MonitorRTPageT<MonitorRTPage, implementation::MonitorRTPage>
    {
    };
}
