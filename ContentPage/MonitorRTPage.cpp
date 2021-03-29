#include "pch.h"
#include "MonitorRTPage.h"
#if __has_include("MonitorRTPage.g.cpp")
#include "MonitorRTPage.g.cpp"
#endif
#include "BaseLayout/StandardNotify.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::Foundation;

namespace winrt::ExpartsV4::implementation
{
    MonitorRTPage::MonitorRTPage()
    {
        InitializeComponent();
    }
    
    void MonitorRTPage::SearchButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        OutputDebugString(L"Search Button Click\n");
    }

    void MonitorRTPage::RefreshButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        OutputDebugString(L"Refresh Button Click\n");
    }

    void MonitorRTPage::StartLearningButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        OutputDebugString(L"Start Learning Button Click\n");
    }
}