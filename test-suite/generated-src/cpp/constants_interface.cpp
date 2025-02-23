// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "constants_interface.hpp"  // my header
#include "constant_record.hpp"

namespace testsuite {








std::experimental::optional<bool> const ConstantsInterface::OPT_BOOL_CONSTANT = true;

std::experimental::optional<int8_t> const ConstantsInterface::OPT_I8_CONSTANT = 1;

std::experimental::optional<int16_t> const ConstantsInterface::OPT_I16_CONSTANT = 2;

std::experimental::optional<int32_t> const ConstantsInterface::OPT_I32_CONSTANT = 3;

std::experimental::optional<int64_t> const ConstantsInterface::OPT_I64_CONSTANT = 4;

std::experimental::optional<float> const ConstantsInterface::OPT_F32_CONSTANT = 5.0;

std::experimental::optional<double> const ConstantsInterface::OPT_F64_CONSTANT = 5.0;

std::string const ConstantsInterface::STRING_CONSTANT = {"string-constant"};

std::experimental::optional<std::string> const ConstantsInterface::OPT_STRING_CONSTANT = {"string-constant"};

ConstantRecord const ConstantsInterface::OBJECT_CONSTANT = ConstantRecord(
    ConstantsInterface::I32_CONSTANT /* some_integer */ ,
    ConstantsInterface::STRING_CONSTANT /* some_string */ );

}  // namespace testsuite
