// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from djinni_perf_benchmark.djinni

#include "NativeDjinniPerfBenchmark.hpp"  // my header
#include "NativeEnumSixValue.hpp"
#include "NativeObjectNative.hpp"
#include "NativeObjectPlatform.hpp"
#include "NativeRecordSixInt.hpp"

namespace djinni_generated {

em::val NativeDjinniPerfBenchmark::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "getInstance",
        "cppTests",
        "baseline",
        "argString",
        "argBinary",
        "argEnumSixValue",
        "argRecordSixInt",
        "argListInt",
        "argArrayInt",
        "argObject",
        "argListObject",
        "argListRecord",
        "argArrayRecord",
        "returnInt",
        "returnString",
        "returnBinary",
        "returnObject",
        "returnListInt",
        "returnArrayInt",
        "returnListObject",
        "returnListRecord",
        "returnArrayRecord",
        "roundTripString",
    });
    return methods;
}

em::val NativeDjinniPerfBenchmark::getInstance() {
    return ::djinni_generated::NativeDjinniPerfBenchmark::fromCpp(::snapchat::djinni::benchmark::DjinniPerfBenchmark::getInstance());
}
int64_t NativeDjinniPerfBenchmark::cppTests(const CppType& self) {
    return ::djinni::I64::fromCpp(self->cppTests());
}
void NativeDjinniPerfBenchmark::baseline(const CppType& self) {
    return self->baseline();
}
void NativeDjinniPerfBenchmark::argString(const CppType& self, const std::string& w_s) {
    return self->argString(::djinni::String::toCpp(w_s));
}
void NativeDjinniPerfBenchmark::argBinary(const CppType& self, const em::val& w_b) {
    return self->argBinary(::djinni::Binary::toCpp(w_b));
}
void NativeDjinniPerfBenchmark::argEnumSixValue(const CppType& self, int32_t w_e) {
    return self->argEnumSixValue(::djinni_generated::NativeEnumSixValue::toCpp(w_e));
}
void NativeDjinniPerfBenchmark::argRecordSixInt(const CppType& self, const em::val& w_r) {
    return self->argRecordSixInt(::djinni_generated::NativeRecordSixInt::toCpp(w_r));
}
void NativeDjinniPerfBenchmark::argListInt(const CppType& self, const em::val& w_v) {
    return self->argListInt(::djinni::List<::djinni::I64>::toCpp(w_v));
}
void NativeDjinniPerfBenchmark::argArrayInt(const CppType& self, const em::val& w_v) {
    return self->argArrayInt(::djinni::Array<::djinni::I64>::toCpp(w_v));
}
void NativeDjinniPerfBenchmark::argObject(const CppType& self, const em::val& w_c) {
    return self->argObject(::djinni_generated::NativeObjectPlatform::toCpp(w_c));
}
void NativeDjinniPerfBenchmark::argListObject(const CppType& self, const em::val& w_l) {
    return self->argListObject(::djinni::List<::djinni_generated::NativeObjectPlatform>::toCpp(w_l));
}
void NativeDjinniPerfBenchmark::argListRecord(const CppType& self, const em::val& w_l) {
    return self->argListRecord(::djinni::List<::djinni_generated::NativeRecordSixInt>::toCpp(w_l));
}
void NativeDjinniPerfBenchmark::argArrayRecord(const CppType& self, const em::val& w_a) {
    return self->argArrayRecord(::djinni::List<::djinni_generated::NativeRecordSixInt>::toCpp(w_a));
}
int64_t NativeDjinniPerfBenchmark::returnInt(const CppType& self, int64_t w_i) {
    return ::djinni::I64::fromCpp(self->returnInt(::djinni::I64::toCpp(w_i)));
}
std::string NativeDjinniPerfBenchmark::returnString(const CppType& self, int32_t w_size) {
    return ::djinni::String::fromCpp(self->returnString(::djinni::I32::toCpp(w_size)));
}
em::val NativeDjinniPerfBenchmark::returnBinary(const CppType& self, int32_t w_size) {
    return ::djinni::Binary::fromCpp(self->returnBinary(::djinni::I32::toCpp(w_size)));
}
em::val NativeDjinniPerfBenchmark::returnObject(const CppType& self) {
    return ::djinni_generated::NativeObjectNative::fromCpp(self->returnObject());
}
em::val NativeDjinniPerfBenchmark::returnListInt(const CppType& self, int32_t w_size) {
    return ::djinni::List<::djinni::I64>::fromCpp(self->returnListInt(::djinni::I32::toCpp(w_size)));
}
em::val NativeDjinniPerfBenchmark::returnArrayInt(const CppType& self, int32_t w_size) {
    return ::djinni::Array<::djinni::I64>::fromCpp(self->returnArrayInt(::djinni::I32::toCpp(w_size)));
}
em::val NativeDjinniPerfBenchmark::returnListObject(const CppType& self, int32_t w_size) {
    return ::djinni::List<::djinni_generated::NativeObjectNative>::fromCpp(self->returnListObject(::djinni::I32::toCpp(w_size)));
}
em::val NativeDjinniPerfBenchmark::returnListRecord(const CppType& self, int32_t w_size) {
    return ::djinni::List<::djinni_generated::NativeRecordSixInt>::fromCpp(self->returnListRecord(::djinni::I32::toCpp(w_size)));
}
em::val NativeDjinniPerfBenchmark::returnArrayRecord(const CppType& self, int32_t w_size) {
    return ::djinni::List<::djinni_generated::NativeRecordSixInt>::fromCpp(self->returnArrayRecord(::djinni::I32::toCpp(w_size)));
}
std::string NativeDjinniPerfBenchmark::roundTripString(const CppType& self, const std::string& w_s) {
    return ::djinni::String::fromCpp(self->roundTripString(::djinni::String::toCpp(w_s)));
}

int64_t NativeDjinniPerfBenchmark::JsProxy::cppTests() {
    return ::djinni::I64::toCpp(_jsRef().call<int64_t>("cppTests"));
}

void NativeDjinniPerfBenchmark::JsProxy::baseline() {
    return _jsRef().call<void>("baseline");
}

void NativeDjinniPerfBenchmark::JsProxy::argString(const std::string & s) {
    return _jsRef().call<void>("argString", ::djinni::String::fromCpp(s));
}

void NativeDjinniPerfBenchmark::JsProxy::argBinary(const std::vector<uint8_t> & b) {
    return _jsRef().call<void>("argBinary", ::djinni::Binary::fromCpp(b));
}

void NativeDjinniPerfBenchmark::JsProxy::argEnumSixValue(::snapchat::djinni::benchmark::EnumSixValue e) {
    return _jsRef().call<void>("argEnumSixValue", ::djinni_generated::NativeEnumSixValue::fromCpp(e));
}

void NativeDjinniPerfBenchmark::JsProxy::argRecordSixInt(const ::snapchat::djinni::benchmark::RecordSixInt & r) {
    return _jsRef().call<void>("argRecordSixInt", ::djinni_generated::NativeRecordSixInt::fromCpp(r));
}

void NativeDjinniPerfBenchmark::JsProxy::argListInt(const std::vector<int64_t> & v) {
    return _jsRef().call<void>("argListInt", ::djinni::List<::djinni::I64>::fromCpp(v));
}

void NativeDjinniPerfBenchmark::JsProxy::argArrayInt(const std::vector<int64_t> & v) {
    return _jsRef().call<void>("argArrayInt", ::djinni::Array<::djinni::I64>::fromCpp(v));
}

void NativeDjinniPerfBenchmark::JsProxy::argObject(const std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform> & c) {
    return _jsRef().call<void>("argObject", ::djinni_generated::NativeObjectPlatform::fromCpp(c));
}

void NativeDjinniPerfBenchmark::JsProxy::argListObject(const std::vector<std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform>> & l) {
    return _jsRef().call<void>("argListObject", ::djinni::List<::djinni_generated::NativeObjectPlatform>::fromCpp(l));
}

void NativeDjinniPerfBenchmark::JsProxy::argListRecord(const std::vector<::snapchat::djinni::benchmark::RecordSixInt> & l) {
    return _jsRef().call<void>("argListRecord", ::djinni::List<::djinni_generated::NativeRecordSixInt>::fromCpp(l));
}

void NativeDjinniPerfBenchmark::JsProxy::argArrayRecord(const std::vector<::snapchat::djinni::benchmark::RecordSixInt> & a) {
    return _jsRef().call<void>("argArrayRecord", ::djinni::List<::djinni_generated::NativeRecordSixInt>::fromCpp(a));
}

int64_t NativeDjinniPerfBenchmark::JsProxy::returnInt(int64_t i) {
    return ::djinni::I64::toCpp(_jsRef().call<int64_t>("returnInt", ::djinni::I64::fromCpp(i)));
}

std::string NativeDjinniPerfBenchmark::JsProxy::returnString(int32_t size) {
    return ::djinni::String::toCpp(_jsRef().call<std::string>("returnString", ::djinni::I32::fromCpp(size)));
}

std::vector<uint8_t> NativeDjinniPerfBenchmark::JsProxy::returnBinary(int32_t size) {
    return ::djinni::Binary::toCpp(_jsRef().call<em::val>("returnBinary", ::djinni::I32::fromCpp(size)));
}

std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative> NativeDjinniPerfBenchmark::JsProxy::returnObject() {
    return ::djinni_generated::NativeObjectNative::toCpp(_jsRef().call<em::val>("returnObject"));
}

std::vector<int64_t> NativeDjinniPerfBenchmark::JsProxy::returnListInt(int32_t size) {
    return ::djinni::List<::djinni::I64>::toCpp(_jsRef().call<em::val>("returnListInt", ::djinni::I32::fromCpp(size)));
}

std::vector<int64_t> NativeDjinniPerfBenchmark::JsProxy::returnArrayInt(int32_t size) {
    return ::djinni::Array<::djinni::I64>::toCpp(_jsRef().call<em::val>("returnArrayInt", ::djinni::I32::fromCpp(size)));
}

std::vector<std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative>> NativeDjinniPerfBenchmark::JsProxy::returnListObject(int32_t size) {
    return ::djinni::List<::djinni_generated::NativeObjectNative>::toCpp(_jsRef().call<em::val>("returnListObject", ::djinni::I32::fromCpp(size)));
}

std::vector<::snapchat::djinni::benchmark::RecordSixInt> NativeDjinniPerfBenchmark::JsProxy::returnListRecord(int32_t size) {
    return ::djinni::List<::djinni_generated::NativeRecordSixInt>::toCpp(_jsRef().call<em::val>("returnListRecord", ::djinni::I32::fromCpp(size)));
}

std::vector<::snapchat::djinni::benchmark::RecordSixInt> NativeDjinniPerfBenchmark::JsProxy::returnArrayRecord(int32_t size) {
    return ::djinni::List<::djinni_generated::NativeRecordSixInt>::toCpp(_jsRef().call<em::val>("returnArrayRecord", ::djinni::I32::fromCpp(size)));
}

std::string NativeDjinniPerfBenchmark::JsProxy::roundTripString(const std::string & s) {
    return ::djinni::String::toCpp(_jsRef().call<std::string>("roundTripString", ::djinni::String::fromCpp(s)));
}

EMSCRIPTEN_BINDINGS(djinni_perf_benchmark) {
    em::class_<::snapchat::djinni::benchmark::DjinniPerfBenchmark>("DjinniPerfBenchmark")
        .smart_ptr<std::shared_ptr<::snapchat::djinni::benchmark::DjinniPerfBenchmark>>("DjinniPerfBenchmark")
        .function("nativeDestroy", &NativeDjinniPerfBenchmark::nativeDestroy)
        .class_function("getInstance", NativeDjinniPerfBenchmark::getInstance)
        .function("cppTests", NativeDjinniPerfBenchmark::cppTests)
        .function("baseline", NativeDjinniPerfBenchmark::baseline)
        .function("argString", NativeDjinniPerfBenchmark::argString)
        .function("argBinary", NativeDjinniPerfBenchmark::argBinary)
        .function("argEnumSixValue", NativeDjinniPerfBenchmark::argEnumSixValue)
        .function("argRecordSixInt", NativeDjinniPerfBenchmark::argRecordSixInt)
        .function("argListInt", NativeDjinniPerfBenchmark::argListInt)
        .function("argArrayInt", NativeDjinniPerfBenchmark::argArrayInt)
        .function("argObject", NativeDjinniPerfBenchmark::argObject)
        .function("argListObject", NativeDjinniPerfBenchmark::argListObject)
        .function("argListRecord", NativeDjinniPerfBenchmark::argListRecord)
        .function("argArrayRecord", NativeDjinniPerfBenchmark::argArrayRecord)
        .function("returnInt", NativeDjinniPerfBenchmark::returnInt)
        .function("returnString", NativeDjinniPerfBenchmark::returnString)
        .function("returnBinary", NativeDjinniPerfBenchmark::returnBinary)
        .function("returnObject", NativeDjinniPerfBenchmark::returnObject)
        .function("returnListInt", NativeDjinniPerfBenchmark::returnListInt)
        .function("returnArrayInt", NativeDjinniPerfBenchmark::returnArrayInt)
        .function("returnListObject", NativeDjinniPerfBenchmark::returnListObject)
        .function("returnListRecord", NativeDjinniPerfBenchmark::returnListRecord)
        .function("returnArrayRecord", NativeDjinniPerfBenchmark::returnArrayRecord)
        .function("roundTripString", NativeDjinniPerfBenchmark::roundTripString)
        ;
}

}  // namespace djinni_generated
