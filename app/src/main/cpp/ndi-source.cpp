// Based on code from https://github.com/WalkerKnapp/devolay (Apache 2.0).

#include "ndi-wrapper.h"

extern "C" {
    JNIEXPORT void JNICALL
    Java_de_daubli_ndimonitor_ndi_NdiSource_deallocSource(JNIEnv *env, jclass jClazz, jlong pSource) {
        //delete reinterpret_cast<NDIlib_source_t *>(pSource);
    }

    JNIEXPORT jstring JNICALL
    Java_de_daubli_ndimonitor_ndi_NdiSource_getSourceName(JNIEnv *env, jclass jClazz, jlong pSource) {
        return env->NewStringUTF(reinterpret_cast<NDIlib_source_t *>(pSource)->p_ndi_name);
    }
}