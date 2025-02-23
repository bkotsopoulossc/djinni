// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#pragma once

#include <functional>

namespace testsuite {

enum class color : int {
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    /**
     * "It is customary to list indigo as a color lying between blue and violet, but it has
     * never seemed to me that indigo is worth the dignity of being considered a separate
     * color. To my eyes it seems merely deep blue." --Isaac Asimov
     */
    INDIGO,
    VIOLET,
};

constexpr const char* to_string(color e) noexcept {
    constexpr const char* names[] = {
        "red",
        "orange",
        "yellow",
        "green",
        "blue",
        "indigo",
        "violet",
    };
    return names[static_cast<int>(e)];
}

}  // namespace testsuite

namespace std {

template <>
struct hash<::testsuite::color> {
    size_t operator()(::testsuite::color type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
