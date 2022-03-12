/*
    Copyright (c) 2019-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/nemu-cpp/core/blob/main/LICENSE.txt
*/

#ifndef _NEMU_CPP_CORE_WEBAPPLICATION_HPP_
#define _NEMU_CPP_CORE_WEBAPPLICATION_HPP_

#include "Application.h"
#include "Configuration.h"
#include "Routes.h"
#include "Views.h"
#include <Ishiko/Errors.hpp>
#include <vector>
#include <memory>

namespace Nemu
{

/// An application that serves requests over the HTTP or HTTPS protocol.
class WebApplication : public Application
{
public:
    /// Constructor.
    /**
        @param configuration The configuration for the application.
        @param observer The observer to add.
        @param error The result of the constructor.
    */
    WebApplication(const Configuration& configuration, Logger& logger, Ishiko::Error& error);
    WebApplication(const Configuration& configuration, Logger& logger, std::shared_ptr<Routes> routes,
        Ishiko::Error& error);

    /// Returns the routes.
    Routes& routes();

    Views& views();

private:
    std::shared_ptr<Routes> m_routes;
    Views m_views;
};

}

#endif
