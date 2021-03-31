﻿#include "pch.h"
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

#pragma region on_checked connection opts listener
    void SourceModeDialog::ConIP_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        this->setModeSelected_uniqueAssert(SourceModeDialog::ConnectionModeOPTs::IP_CONNECTION);
    }

    void SourceModeDialog::ConLocal_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        this->setModeSelected_uniqueAssert(SourceModeDialog::ConnectionModeOPTs::LOCAL_CONNECTION);
    }

    void SourceModeDialog::ConSerial_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        this->setModeSelected_uniqueAssert(SourceModeDialog::ConnectionModeOPTs::SERIAL_CONNECTION);
    }

    void SourceModeDialog::ConLocalStream_onChecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        this->setModeSelected_uniqueAssert(SourceModeDialog::ConnectionModeOPTs::VIDEO_STREAM_CONNECTION);
    }
#pragma endregion

    void SourceModeDialog::SelectedMode(INT16 value)
    {
        this->selectedMode = value;
    }

    INT16 SourceModeDialog::SelectedMode()
    {
        return this->selectedMode;
    }

    void SourceModeDialog::ConnectionArgs(winrt::hstring value)
    {
        this->connectionArgs = value;
    }


    winrt::hstring SourceModeDialog::ConnectionArgs()
    {
        return this->connectionArgs;
    }

    void SourceModeDialog::setModeSelected_uniqueAssert(int mode)
    {
        switch (mode)
        {
        case SourceModeDialog::ConnectionModeOPTs::IP_CONNECTION:
            this->commitChangesIPCon();
            break;
        case SourceModeDialog::ConnectionModeOPTs::LOCAL_CONNECTION:
            this->commitChangesLocalCon();
            break;
        case SourceModeDialog::ConnectionModeOPTs::SERIAL_CONNECTION:
            this->commitChangesSerialCon();
            break;
        case SourceModeDialog::ConnectionModeOPTs::VIDEO_STREAM_CONNECTION:
            this->commitChangesVideoStreamCon();
            break;
        default:
            this->commitChangesNull();
            break;
        }
    }

#pragma region commiting changes for connection opts
    void SourceModeDialog::commitChangesNull()
    {
        this->conectByIPCheckBox().IsChecked(false);
        this->vIPAdress().IsEnabled(false);

        this->localDeviceCheckBox().IsChecked(false);

        this->serialConectionCheckBox().IsChecked(false);
        this->serialPort().IsEnabled(false);
        this->serialBitRate().IsEnabled(false);

        this->videoStreamConectionCheckBox().IsChecked(false);
        this->vPath().IsEnabled(false);
        this->vPathButton().IsEnabled(false);
    }
    

    void SourceModeDialog::commitChangesIPCon()
    {
        this->conectByIPCheckBox().IsChecked(true);
        this->vIPAdress().IsEnabled(true);

        this->localDeviceCheckBox().IsChecked(false);

        this->serialConectionCheckBox().IsChecked(false);
        this->serialPort().IsEnabled(false);
        this->serialBitRate().IsEnabled(false);

        this->videoStreamConectionCheckBox().IsChecked(false);
        this->vPath().IsEnabled(false);
        this->vPathButton().IsEnabled(false);
    }

    void SourceModeDialog::commitChangesLocalCon()
    {
        this->conectByIPCheckBox().IsChecked(false);
        this->vIPAdress().IsEnabled(false);

        this->localDeviceCheckBox().IsChecked(true);

        this->serialConectionCheckBox().IsChecked(false);
        this->serialPort().IsEnabled(false);
        this->serialBitRate().IsEnabled(false);

        this->videoStreamConectionCheckBox().IsChecked(false);
        this->vPath().IsEnabled(false);
        this->vPathButton().IsEnabled(false);
    }

    void SourceModeDialog::commitChangesSerialCon()
    {
        this->conectByIPCheckBox().IsChecked(false);
        this->vIPAdress().IsEnabled(false);

        this->localDeviceCheckBox().IsChecked(false);

        this->serialConectionCheckBox().IsChecked(true);
        this->serialPort().IsEnabled(true);
        this->serialBitRate().IsEnabled(true);

        this->videoStreamConectionCheckBox().IsChecked(false);
        this->vPath().IsEnabled(false);
        this->vPathButton().IsEnabled(false);
    }

    void SourceModeDialog::commitChangesVideoStreamCon()
    {
        this->conectByIPCheckBox().IsChecked(false);
        this->vIPAdress().IsEnabled(false);

        this->localDeviceCheckBox().IsChecked(false);

        this->serialConectionCheckBox().IsChecked(false);
        this->serialPort().IsEnabled(false);
        this->serialBitRate().IsEnabled(false);

        this->videoStreamConectionCheckBox().IsChecked(true);
        this->vPath().IsEnabled(true);
        this->vPathButton().IsEnabled(true);
    }

#pragma endregion

}
