/*
    Copyright (c) 2019-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/nemu-cpp/core/blob/main/LICENSE.txt
*/

#ifndef _NEMU_CPP_CORE_TEMPLATEENGINE_HPP_
#define _NEMU_CPP_CORE_TEMPLATEENGINE_HPP_

#include <string>

namespace Nemu
{

/// Base class for classes that implement templating engines.
/**
    Templating engines are used by web applications to serve pages generated from templates. In Nemu such engines are
    registered with the Views instance stored in a WebApplication instance. They are invoked from the WebResponse::view
    function.
*/
class TemplateEngine
{
public:
    virtual std::string render() const = 0;
};

}

#endif
