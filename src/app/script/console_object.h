// Aseprite
// Copyright (C) 2016  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_SCRIPT_CONSOLE_OBJECT_H_INCLUDED
#define APP_SCRIPT_CONSOLE_OBJECT_H_INCLUDED
#pragma once

namespace script {
  class Context;
}

namespace app {

  void register_console_object(script::Context& ctx);

} // namespace app

#endif
