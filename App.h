#pragma once
#include "App.xaml.g.h"

namespace winrt::ExpartsV4::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const&);
        void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);
        void OnNavigationFailed(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const&);
        void App::OnVisibleChanged(Windows::ApplicationModel::Core::CoreApplicationViewTitleBar sender, IInspectable const&);
        void App::OnLayoutMetricsChanged(Windows::ApplicationModel::Core::CoreApplicationViewTitleBar sender, IInspectable const&);
    };
}
