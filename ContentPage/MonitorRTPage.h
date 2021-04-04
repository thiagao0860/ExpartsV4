#pragma once

#include "MonitorRTPage.g.h"

namespace winrt::ExpartsV4::implementation
{
    struct MonitorRTPage : MonitorRTPageT<MonitorRTPage>
    {
    public:
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
        void sliderMinSensitiveCutOff_onVAlueChanged(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs const& args);
        void sliderMaxSensitiveCutOff_onVAlueChanged(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs const& args);
    private:
        void DerivedContentDialog_onClose(
            winrt::Windows::UI::Xaml::Controls::ContentDialog const& sender, 
            winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs const& args);
        
        void putConsoleMessage(winrt::hstring message);
    };
}

namespace winrt::ExpartsV4::factory_implementation
{
    struct MonitorRTPage : MonitorRTPageT<MonitorRTPage, implementation::MonitorRTPage>
    {
    };
}
