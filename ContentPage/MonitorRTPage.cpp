#include "pch.h"
#include "MonitorRTPage.h"
#if __has_include("MonitorRTPage.g.cpp")
#include "MonitorRTPage.g.cpp"
#endif
#include "BaseLayout/StandardNotify.h"
#include "GlobalTools/StaticMethods.h"
#include "MachineResources/CameraHelper.h"
#include "MachineResources/VideoStreamHelper.h"

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
        TextBoxSource().Text(L"No Connection");
    }
    
    void MonitorRTPage::SearchButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        SourceModeDialog dialog;
        dialog.Closed({ this , &MonitorRTPage::DerivedContentDialog_onClose });
        dialog.ShowAsync();
    }

    void MonitorRTPage::RefreshButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        putConsoleMessage(StaticMethods::getTimeStampH() + L": Refresh Button Click");
    }

    void MonitorRTPage::StartLearningButton_onClick(IInspectable const& sender, RoutedEventArgs const& args)
    {
        putConsoleMessage(StaticMethods::getTimeStampH() +L": Start Learning Button Click");
    }
    void MonitorRTPage::sliderMinSensitiveCutOff_onVAlueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs const& args)
    {
       // putConsoleMessage((to_hstring(args.NewValue()) + to_hstring(" to ") + to_hstring(args.NewValue()) + to_hstring(" \n")).c_str());
    }
    void MonitorRTPage::sliderMaxSensitiveCutOff_onVAlueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs const& args)
    {
      //  putConsoleMessage((to_hstring(args.NewValue()) +to_hstring(" to ")+ to_hstring(args.NewValue()) +to_hstring(" \n")).c_str());
    }

    void MonitorRTPage::DerivedContentDialog_onClose(winrt::Windows::UI::Xaml::Controls::ContentDialog const& sender, winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs const& args)
    {
        SourceModeDialog dialog = (sender.try_as<SourceModeDialog>());
        switch (dialog.SelectedMode())
        {
        case (INT16)ConnectionModeOPTs::LOCAL_CONNECTION:
            this->hostFrameHandler = make_shared<CameraHelper>();
            this->hostFrameHandler->setHostHandler(&streamedHost());
      
            break;
        case (INT16)ConnectionModeOPTs::IP_CONNECTION:

            break;
        case (INT16)ConnectionModeOPTs::SERIAL_CONNECTION:

            break;
        case (INT16)ConnectionModeOPTs::VIDEO_STREAM_CONNECTION:
            this->hostFrameHandler = make_shared<VideoStreamHelper>();
            this->hostFrameHandler->setHostHandler(&streamedHost());
            //var->setFilePath(L"teste");

            putConsoleMessage(StaticMethods::getTimeStampH()+ L": Using Stream Conection" );
            break;
        case (INT16)ConnectionModeOPTs::NULL_CONNECTION:
            TextBoxSource().Text(L"No Connetion");
            break;
        default:
            
            break;
        }
    }

    void MonitorRTPage::putConsoleMessage(winrt::hstring message)
    {
        TextBlock text;
        text.Text(message);
        text.Margin(ThicknessHelper::FromUniformLength(2));
        this->StackPanelConsole().Children().Append(text);
    }

}