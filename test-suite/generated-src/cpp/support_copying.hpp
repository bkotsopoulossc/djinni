// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nscopying.djinni

#pragma once

#include <cstdint>
#include <utility>

namespace testsuite {

struct SupportCopying final {
    int32_t x;

    SupportCopying(int32_t x_)
    : x(std::move(x_))
    {}
};

}  // namespace testsuite
