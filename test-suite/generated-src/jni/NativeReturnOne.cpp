// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include "NativeReturnOne.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeReturnOne::NativeReturnOne() : ::djinni::JniInterface<::testsuite::ReturnOne, NativeReturnOne>("com/dropbox/djinni/test/ReturnOne$CppProxy") {}

NativeReturnOne::~NativeReturnOne() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_ReturnOne_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::ReturnOne>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ReturnOne_getInstance(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::testsuite::ReturnOne::get_instance();
        return ::djinni::release(::djinni_generated::NativeReturnOne::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyte JNICALL Java_com_dropbox_djinni_test_ReturnOne_00024CppProxy_native_1returnOne(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::ReturnOne>(nativeRef);
        auto r = ref->return_one();
        return ::djinni::release(::djinni::I8::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
