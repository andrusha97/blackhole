#pragma once

#include <string>

#include "blackhole/keyword.hpp"
#include "blackhole/utils/thread.hpp"

DECLARE_THREAD_KEYWORD(tid, std::string)
DECLARE_THREAD_KEYWORD(lwp, uint64_t)
