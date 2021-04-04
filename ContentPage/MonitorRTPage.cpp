#include "pch.h"
#include "MonitorRTPage.h"
#if __has_include("MonitorRTPage.g.cpp")
#include "MonitorRTPage.g.cpp"
#endif
#include "BaseLayout/StandardNotify.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::Foundation;
using namespace Windows::Foundation;
using namespace std;

namespace winrt::ExpartsV4::implementation
{
    MonitorRTPage::MonitorRTPage()
    {
        InitializeComponent();
    }
    
    void MonitorRTPage::SearchButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        SourceModeDialog dialog { make<SourceModeDialog>()};
        dialog.Closed({this , &MonitorRTPage::DerivedContentDialog_onClose });
        dialog.ShowAsync();
    }

    void MonitorRTPage::RefreshButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        OutputDebugString(L"Refresh Button Click\n");
    }

    void MonitorRTPage::StartLearningButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        OutputDebugString(L"Start Learning Button Click\n");
    }
    void MonitorRTPage::sliderMinSensitiveCutOff_onVAlueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs const& args)
    {
        OutputDebugString((to_hstring(args.NewValue()) + to_hstring(" to ") + to_hstring(args.NewValue()) + to_hstring(" \n")).c_str());
    }
    void MonitorRTPage::sliderMaxSensitiveCutOff_onVAlueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs const& args)
    {
        OutputDebugString((to_hstring(args.NewValue()) +to_hstring(" to ")+ to_hstring(args.NewValue()) +to_hstring(" \n")).c_str());
    }

    void MonitorRTPage::DerivedContentDialog_onClose(winrt::Windows::UI::Xaml::Controls::ContentDialog const& sender, winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs const& args)
    {
        SourceModeDialog dialog = (sender.try_as<SourceModeDialog>());
        switch (dialog.SelectedMode())
        {
        case ConnectionModeOPTs::LOCAL_CONNECTION:

            break;
        default:
            break;
        }
    }

    void MonitorRTPage::putConsoleMessage(winrt::hstring message)
    {
        TextBlock text{ make<TextBlock>(message)};
        this->StackPanelConsole().Children().Append(text);
    }

}