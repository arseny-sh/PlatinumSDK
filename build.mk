MODNAME := template # mod name to build


LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_CPP_FEATURES := rtti
LOCAL_MODULE := dobby
LOCAL_C_INCLUDES := include/dobby.h
LOCAL_SRC_FILES := libraries/libdobby.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
COCOS_PATH := $(LOCAL_PATH)/include/cocos2dx
LOCAL_CPP_FEATURES := rtti
LOCAL_MODULE := cocos2dcpp
LOCAL_SRC_FILES := libraries/libcocos2dcpp.so 
LOCAL_EXPORT_C_INCLUDES :=  $(LOCAL_PATH)/include/gd \
							$(LOCAL_PATH)/include \
							$(COCOS_PATH)/ \
							$(COCOS_PATH)/include \
							$(COCOS_PATH)/support \
							$(COCOS_PATH)/base_nodes \
							$(COCOS_PATH)/extensions \
							$(COCOS_PATH)/platform \
							$(COCOS_PATH)/kazmath/include \
							$(COCOS_PATH)/platform/android \

include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_CFLAGS := -w
LOCAL_CPP_FEATURES := rtti
LOCAL_MODULE := $(MODNAME)
LOCAL_DISABLE_FORMAT_STRING_CHECKS := true
LOCAL_SHARED_LIBRARIES := cocos2dcpp dobby
TARGET_ARCH_ABI := all
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include \

LOCAL_SRC_FILES := 	src/main.cpp \

include $(BUILD_SHARED_LIBRARY)