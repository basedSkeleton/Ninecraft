#ifndef NINECRAFT_SYMBOLS_H
#define NINECRAFT_SYMBOLS_H

const char *egl_symbols[] = {
    "eglChooseConfig",
    "eglCreateContext",
    "eglCreateWindowSurface",
    "eglDestroyContext",
    "eglDestroySurface",
    "eglGetConfigAttrib",
    "eglGetCurrentDisplay",
    "eglGetDisplay",
    "eglInitialize",
    "eglMakeCurrent",
    "eglQuerySurface",
    "eglSwapBuffers",
    "eglSwapInterval",
    "eglTerminate",
    0
};

const char *android_symbols[] = {
    "AConfiguration_getNavHidden",
    "AConfiguration_getUiModeType",
    "AConfiguration_getUiModeNight",
    "AConfiguration_getSdkVersion",
    "AConfiguration_getScreenSize",
    "AConfiguration_getScreenLong",
    "AConfiguration_getDensity",
    "AConfiguration_getKeyboard",
    "AConfiguration_getNavigation",
    "AConfiguration_getMnc",
    "AConfiguration_getMcc",
    "AConfiguration_getKeysHidden",
    "AConfiguration_getTouchscreen",
    "AConfiguration_getOrientation",
    "AAssetManager_open",
    "AAsset_getLength",
    "AAsset_getBuffer",
    "AAsset_close",
    "AConfiguration_delete",
    "AConfiguration_fromAssetManager",
    "AConfiguration_getCountry",
    "AConfiguration_getLanguage",
    "AConfiguration_new",
    "AInputEvent_getDeviceId",
    "AInputEvent_getSource",
    "AInputEvent_getType",
    "AInputQueue_attachLooper",
    "AInputQueue_detachLooper",
    "AInputQueue_finishEvent",
    "AInputQueue_getEvent",
    "AInputQueue_preDispatchEvent",
    "AKeyEvent_getAction",
    "AKeyEvent_getKeyCode",
    "AKeyEvent_getMetaState",
    "AKeyEvent_getRepeatCount",
    "ALooper_addFd",
    "ALooper_pollAll",
    "ALooper_prepare",
    "AMotionEvent_getAction",
    "AMotionEvent_getPointerCount",
    "AMotionEvent_getPointerId",
    "AMotionEvent_getX",
    "AMotionEvent_getY",
    "ANativeActivity_finish",
    "ANativeWindow_setBuffersGeometry",
    0
};

const char *sles_symbols[] = {
    "slCreateEngine",
    "SL_IID_ENGINE",
    "SL_IID_BUFFERQUEUE",
    "SL_IID_VOLUME",
    "SL_IID_PLAY",
    0
};

const char *gles_symbols[] = {
    "glAlphaFunc",
    "glBindBuffer",
    "glBindTexture",
    "glBlendFunc",
    "glBufferData",
    "glClear",
    "glClearColor",
    "glColor4f",
    "glColorMask",
    "glColorPointer",
    "glCullFace",
    "glDeleteBuffers",
    "glDeleteTextures",
    "glDepthFunc",
    "glDepthMask",
    "glDepthRangef",
    "glDisable",
    "glDisableClientState",
    "glDrawArrays",
    "glEnable",
    "glEnableClientState",
    "glFogf",
    "glFogfv",
    "glFogx",
    "glGenTextures",
    "glGetFloatv",
    "glGetString",
    "glHint",
    "glLineWidth",
    "glLoadIdentity",
    "glMatrixMode",
    "glMultMatrixf",
    "glNormal3f",
    "glOrthof",
    "glPolygonOffset",
    "glPopMatrix",
    "glPushMatrix",
    "glReadPixels",
    "glRotatef",
    "glScalef",
    "glScissor",
    "glShadeModel",
    "glTexCoordPointer",
    "glTexImage2D",
    "glTexParameteri",
    "glTexSubImage2D",
    "glTranslatef",
    "glVertexPointer",
    "glViewport",
    0
};

const char *math_symbols[] = {
    "atan2f",
    "atanf",
    "ceilf",
    "cosf",
    "floorf",
    "fmodf",
    "logf",
    "powf",
    "sinf",
    "sqrtf",
    0
};

const char *missing_symbols[] = {
    "dl_iterate_phdr",
    "wcscmp",
    "wcsncpy",
    "iswalpha",
    "iswcntrl",
    "iswdigit",
    "iswlower",
    "iswprint",
    "iswpunct",
    "iswupper",
    "iswxdigit",
    "__aeabi_atexit",
    "__gnu_Unwind_Find_exidx",
    "__cxa_pure_virtual",
    0
};

#endif