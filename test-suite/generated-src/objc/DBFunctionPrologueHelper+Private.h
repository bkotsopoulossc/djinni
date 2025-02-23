// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from function_prologue.djinni

#include "FunctionPrologueHelper.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBFunctionPrologueHelper;

namespace djinni_generated {

class FunctionPrologueHelper
{
public:
    using CppType = std::shared_ptr<::testsuite::FunctionPrologueHelper>;
    using CppOptType = std::shared_ptr<::testsuite::FunctionPrologueHelper>;
    using ObjcType = DBFunctionPrologueHelper*;

    using Boxed = FunctionPrologueHelper;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

