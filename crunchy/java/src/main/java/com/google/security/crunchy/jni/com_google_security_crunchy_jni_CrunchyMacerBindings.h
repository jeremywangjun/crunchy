/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_google_security_crunchy_jni_CrunchyMacerBindings */

#ifndef _Included_com_google_security_crunchy_jni_CrunchyMacerBindings
#define _Included_com_google_security_crunchy_jni_CrunchyMacerBindings
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_google_security_crunchy_jni_CrunchyMacerBindings
 * Method:    createCrunchyMacerBindings
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_google_security_crunchy_jni_CrunchyMacerBindings_createCrunchyMacerBindings
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_google_security_crunchy_jni_CrunchyMacerBindings
 * Method:    destroyCrunchyMacerBindings
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_google_security_crunchy_jni_CrunchyMacerBindings_destroyCrunchyMacerBindings
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_google_security_crunchy_jni_CrunchyMacerBindings
 * Method:    sign
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_google_security_crunchy_jni_CrunchyMacerBindings_sign
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_google_security_crunchy_jni_CrunchyMacerBindings
 * Method:    verify
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_com_google_security_crunchy_jni_CrunchyMacerBindings_verify
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
