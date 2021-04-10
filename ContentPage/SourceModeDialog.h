#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "SourceModeDialog.g.h"
#include <basetsd.h>
#include <pplawait.h>

namespace winrt::ExpartsV4::implementation
{
    struct SourceModeDialog : SourceModeDialogT<SourceModeDialog>
    {
        SourceModeDialog();
    public:
        void PrimaryButton_onClick(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs const& args);
        void ConIP_onChecked(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void ConLocal_onChecked(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void ConSerial_onChecked(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void ConLocalStream_onChecked(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void PathButton_onClick(
            winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Windows::UI::Xaml::RoutedEventArgs const& args);
        void SelectedMode(INT16 value);
        INT16 SelectedMode();
        void ConnectionArgs(winrt::hstring value);
        winrt::hstring ConnectionArgs();
        
    private:
        INT16 selectedMode = (INT16)ConnectionModeOPTs::NULL_CONNECTION;
        winrt::hstring connectionArgs;
        void setModeSelected_uniqueAssert(int mode);
        void commitChangesNull();
        void commitChangesIPCon();
        void commitChangesLocalCon();
        void commitChangesSerialCon();
        void commitChangesVideoStreamCon();
        winrt::Windows::Foundation::IAsyncAction filePickerTask(winrt::Windows::UI::Xaml::Controls::TextBox textBox);
    };
}

namespace winrt::ExpartsV4::factory_implementation
{
    struct SourceModeDialog : SourceModeDialogT<SourceModeDialog, implementation::SourceModeDialog>
    {
    };
}
