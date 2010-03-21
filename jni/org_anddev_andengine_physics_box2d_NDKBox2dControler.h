/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_anddev_andengine_physics_box2d_NDKBox2dControler */

#ifndef _Included_org_anddev_andengine_physics_box2d_NDKBox2dControler
#define _Included_org_anddev_andengine_physics_box2d_NDKBox2dControler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    createWorld
 * Signature: (FFFFFF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_createWorld
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    createBox
 * Signature: (FFFF)I
 */
JNIEXPORT jint JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_createBox
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    createCircle
 * Signature: (FFFFF)I
 */
JNIEXPORT jint JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_createCircle
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    getBodyInfo
 * Signature: (Lcom/akjava/android/box2d/BodyInfo;I)Lcom/akjava/android/box2d/BodyInfo;
 */
JNIEXPORT jobject JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_getBodyInfo
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    step
 * Signature: (FII)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_step
  (JNIEnv *, jobject, jfloat, jint, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    setGravity
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_setGravity
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    destroyBody
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_destroyBody
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    getCollisions
 * Signature: (Lcom/akjava/android/box2d/collisionIdKeeper;I)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_getCollisions
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    createBox2
 * Signature: (FFFFFFF)I
 */
JNIEXPORT jint JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_createBox2
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    setBodyXForm
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_setBodyXForm
  (JNIEnv *, jobject, jint, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    setBodyAngularVelocity
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_setBodyAngularVelocity
  (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    setBodyLinearVelocity
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_setBodyLinearVelocity
  (JNIEnv *, jobject, jint, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    getStatus
 * Signature: (Lcom/akjava/android/box2d/BodyInfo;I)Lcom/akjava/android/box2d/BodyInfo;
 */
JNIEXPORT jobject JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_getStatus
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_NDKBox2dControler
 * Method:    getLinerVelocity
 * Signature: (Lcom/akjava/android/box2d/BodyInfo;I)Lcom/akjava/android/box2d/BodyInfo;
 */
JNIEXPORT jobject JNICALL Java_org_anddev_andengine_physics_box2d_NDKBox2dControler_getLinerVelocity
  (JNIEnv *, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif