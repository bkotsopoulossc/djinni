// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include "djinni_perf_benchmark.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeDjinniPerfBenchmark : ::djinni::JsInterface<::snapchat::djinni::benchmark::DjinniPerfBenchmark, NativeDjinniPerfBenchmark> {
    using CppType = std::shared_ptr<::snapchat::djinni::benchmark::DjinniPerfBenchmark>;
    using CppOptType = std::shared_ptr<::snapchat::djinni::benchmark::DjinniPerfBenchmark>;
    using JsType = em::val;
    using Boxed = NativeDjinniPerfBenchmark;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static em::val getInstance();
    static int64_t cppTests(const CppType& self);
    static void baseline(const CppType& self);
    static void argString(const CppType& self, const std::string& w_s);
    static void argBinary(const CppType& self, const em::val& w_b);
    static void argEnumSixValue(const CppType& self, int32_t w_e);
    static void argRecordSixInt(const CppType& self, const em::val& w_r);
    static void argListInt(const CppType& self, const em::val& w_v);
    static void argArrayInt(const CppType& self, const em::val& w_v);
    static void argObject(const CppType& self, const em::val& w_c);
    static void argListObject(const CppType& self, const em::val& w_l);
    static void argListRecord(const CppType& self, const em::val& w_l);
    static void argArrayRecord(const CppType& self, const em::val& w_a);
    static int64_t returnInt(const CppType& self, int64_t w_i);
    static std::string returnString(const CppType& self, int32_t w_size);
    static em::val returnBinary(const CppType& self, int32_t w_size);
    static em::val returnObject(const CppType& self);
    static em::val returnListInt(const CppType& self, int32_t w_size);
    static em::val returnArrayInt(const CppType& self, int32_t w_size);
    static em::val returnListObject(const CppType& self, int32_t w_size);
    static em::val returnListRecord(const CppType& self, int32_t w_size);
    static em::val returnArrayRecord(const CppType& self, int32_t w_size);
    static std::string roundTripString(const CppType& self, const std::string& w_s);

    struct JsProxy: ::djinni::JsProxyBase, ::snapchat::djinni::benchmark::DjinniPerfBenchmark, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
        int64_t cppTests() override;
        void baseline() override;
        void argString(const std::string & s) override;
        void argBinary(const std::vector<uint8_t> & b) override;
        void argEnumSixValue(::snapchat::djinni::benchmark::EnumSixValue e) override;
        void argRecordSixInt(const ::snapchat::djinni::benchmark::RecordSixInt & r) override;
        void argListInt(const std::vector<int64_t> & v) override;
        void argArrayInt(const std::vector<int64_t> & v) override;
        void argObject(const std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform> & c) override;
        void argListObject(const std::vector<std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform>> & l) override;
        void argListRecord(const std::vector<::snapchat::djinni::benchmark::RecordSixInt> & l) override;
        void argArrayRecord(const std::vector<::snapchat::djinni::benchmark::RecordSixInt> & a) override;
        int64_t returnInt(int64_t i) override;
        std::string returnString(int32_t size) override;
        std::vector<uint8_t> returnBinary(int32_t size) override;
        std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative> returnObject() override;
        std::vector<int64_t> returnListInt(int32_t size) override;
        std::vector<int64_t> returnArrayInt(int32_t size) override;
        std::vector<std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative>> returnListObject(int32_t size) override;
        std::vector<::snapchat::djinni::benchmark::RecordSixInt> returnListRecord(int32_t size) override;
        std::vector<::snapchat::djinni::benchmark::RecordSixInt> returnArrayRecord(int32_t size) override;
        std::string roundTripString(const std::string & s) override;
    };
};

}  // namespace djinni_generated
