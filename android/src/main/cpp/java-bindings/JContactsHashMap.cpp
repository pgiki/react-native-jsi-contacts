//
// Created by Marc Rousavy on 25.06.21.
//
// Copied from https://github.com/mrousavy/react-native-vision-camera/blob/main/android/src/main/cpp/java-bindings/JContactsHashMap.cpp

#include "JContactsHashMap.h"

#include <jni.h>
#include <fbjni/fbjni.h>


namespace facebook {
namespace jni {

template <typename K, typename V>
local_ref<JContactsHashMap<K, V>> JContactsHashMap<K, V>::create() {
  return JContactsHashMap<K, V>::newInstance();
}

} // namespace jni
} // namespace facebook
