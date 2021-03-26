#pragma once

#include "TitleBar.g.h"

namespace winrt::ExpartsV4::implementation
{
    struct TitleBar : TitleBarT<TitleBar>
    {
        TitleBar();

      //  int32_t MyProperty();
       // void MyProperty(int32_t value);


        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    };
}

namespace winrt::ExpartsV4::factory_implementation
{
    struct TitleBar : TitleBarT<TitleBar, implementation::TitleBar>
    {
    };
}
