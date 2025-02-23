// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from data_ref_view.djinni

#include "NativeDataRefTest.hpp"  // my header
#include "DataRef_jni.hpp"
#include "DataView_jni.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

NativeDataRefTest::NativeDataRefTest() : ::djinni::JniInterface<::testsuite::DataRefTest, NativeDataRefTest>("com/dropbox/djinni/test/DataRefTest$CppProxy") {}

NativeDataRefTest::~NativeDataRefTest() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::DataRefTest>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1sendData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::snapchat::djinni::NativeDataRef::JniType j_data)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        ref->sendData(::snapchat::djinni::NativeDataRef::toCpp(jniEnv, j_data));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jbyteArray JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1retriveAsBin(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        auto r = ref->retriveAsBin();
        return ::djinni::release(::djinni::Binary::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1sendMutableData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::snapchat::djinni::NativeDataRef::JniType j_data)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        ref->sendMutableData(::snapchat::djinni::NativeDataRef::toCpp(jniEnv, j_data));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::snapchat::djinni::NativeDataRef::JniType JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1generateData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        auto r = ref->generateData();
        return ::djinni::release(::snapchat::djinni::NativeDataRef::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::snapchat::djinni::NativeDataRef::JniType JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1dataFromVec(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        auto r = ref->dataFromVec();
        return ::djinni::release(::snapchat::djinni::NativeDataRef::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::snapchat::djinni::NativeDataRef::JniType JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1dataFromStr(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        auto r = ref->dataFromStr();
        return ::djinni::release(::snapchat::djinni::NativeDataRef::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyteArray JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1sendDataView(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::snapchat::djinni::NativeDataView::JniType j_data)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        auto r = ref->sendDataView(::snapchat::djinni::NativeDataView::toCpp(jniEnv, j_data));
        return ::djinni::release(::djinni::Binary::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::snapchat::djinni::NativeDataView::JniType JNICALL Java_com_dropbox_djinni_test_DataRefTest_00024CppProxy_native_1recvDataView(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::DataRefTest>(nativeRef);
        auto r = ref->recvDataView();
        return ::djinni::release(::snapchat::djinni::NativeDataView::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_DataRefTest_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::testsuite::DataRefTest::create();
        return ::djinni::release(::djinni_generated::NativeDataRefTest::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
