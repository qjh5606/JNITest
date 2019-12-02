//
// Created by Jay on 2019/11/24.
//
#include <jni.h>
#include <android/log.h>

#define TAG "jayjzchen"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_example_jay_jnitest_MainActivity_testjni
        (JNIEnv *env, jobject){
    /* 实现你的功能吧 */
    LOGE("Java_com_example_jay_jnitest_MainActivity_testjni Success!!!");

}

#ifdef __cplusplus
}
#endif
