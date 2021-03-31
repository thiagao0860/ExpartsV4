#include "pch.h"
#include "SourceModeDialog.h"
#if __has_include("SourceModeDialog.g.cpp")
#include "SourceModeDialog.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::ExpartsV4::implementation
{
    SourceModeDialog::SourceModeDialog()
    {
        InitializeComponent();
    }

    void SourceModeDialog::PrimaryButton_onClick(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs const& args)
    {
    }

    void SourceModeDialog::ConIP_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
    }

    void SourceModeDialog::ConLocal_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
    }

    void SourceModeDialog::ConSerial_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
    }

    void SourceModeDialog::ConLocalStream_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
    }

    void SourceModeDialog::SelectedMode(INT16 value)
    {
        
    }

    INT16 SourceModeDialog::SelectedMode()
    {
        return INT16();
    }

    void SourceModeDialog::ConnectionArgs(winrt::hstring value)
    {
    }


    winrt::hstring SourceModeDialog::ConnectionArgs()
    {
        return L"deu bom";
    }

}
