/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_waynejo_androidndkgif_GifDecoder */

#ifndef _Included_native_lib_GifDecoder
#define _Included_native_lib_GifDecoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeInit
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeClose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeLoad
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeLoad
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeGetFrameCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeGetFrameCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeGetFrame
 * Signature: (JI)Landroid/graphics/Bitmap;
 */
JNIEXPORT jobject JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeGetFrame
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeGetDelay
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeGetDelay
        (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeGetWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeGetWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_waynejo_androidndkgif_GifDecoder
 * Method:    nativeGetHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_hoanganhtuan95ptit_awesomekeyboard_core_utils_EmoticonDecoder_nativeGetHeight
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif