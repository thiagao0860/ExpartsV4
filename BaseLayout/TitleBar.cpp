#include "pch.h"
#include "TitleBar.h"
#if __has_include("TitleBar.g.cpp")
#include "TitleBar.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::ExpartsV4::implementation
{
    TitleBar::TitleBar()
    {
        InitializeComponent();
    }
    int32_t TitleBar::MyProperty()
    {
        return int32_t();
    }
    void TitleBar::MyProperty(int32_t value)
    {
    }
    void TitleBar::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        //myButton().Content(box_value(L"Clicked"));
    }


}
