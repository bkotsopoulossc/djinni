// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include <cstdint>
#include <utility>

namespace snapchat { namespace djinni { namespace benchmark {

struct RecordSixInt final {
    int64_t i1;
    int64_t i2;
    int64_t i3;
    int64_t i4;
    int64_t i5;
    int64_t i6;

    RecordSixInt(int64_t i1_,
                 int64_t i2_,
                 int64_t i3_,
                 int64_t i4_,
                 int64_t i5_,
                 int64_t i6_)
    : i1(std::move(i1_))
    , i2(std::move(i2_))
    , i3(std::move(i3_))
    , i4(std::move(i4_))
    , i5(std::move(i5_))
    , i6(std::move(i6_))
    {}
};

} } }  // namespace snapchat::djinni::benchmark
