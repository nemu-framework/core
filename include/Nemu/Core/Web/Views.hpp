/*
    Copyright (c) 2019-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/nemu-cpp/core/blob/main/LICENSE.txt
*/

#ifndef _NEMU_CPP_CORE_VIEWS_HPP_
#define _NEMU_CPP_CORE_VIEWS_HPP_

#include "../TemplateEngine.hpp"
#include <memory>

namespace Nemu
{

/// A list of templating engines and their associated settings.
class Views
{
public:
    Views();
    Views(std::shared_ptr<TemplateEngine> engine);

    const TemplateEngine& engine() const;

private:
    std::shared_ptr<TemplateEngine> m_engine;
};

}

#endif
