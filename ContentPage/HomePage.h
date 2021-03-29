#pragma once

#include "HomePage.g.h"

namespace winrt::ExpartsV4::implementation
{
    struct HomePage : HomePageT<HomePage>
    {
        HomePage();
    };
}

namespace winrt::ExpartsV4::factory_implementation
{
    struct HomePage : HomePageT<HomePage, implementation::HomePage>
    {
    };
}
