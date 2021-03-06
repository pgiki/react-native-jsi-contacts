//
// Created by Marc Rousavy on 30.09.21.
//

#pragma once

#include <jni.h>
#include <fbjni/fbjni.h>
#include <string>
#include "JContact.h"

namespace mrousavy {

using namespace facebook;
using namespace jni;

struct JContactsProvider : public JavaClass<JContactsProvider> {
    static constexpr auto kJavaDescriptor = "Lcom/mrousavy/jsi/contacts/ContactsProvider;";

public:
    local_ref<JMap<JString, JContact::javaobject>> getContacts() const;
    local_ref<jstring> getHash() const;
};

} // namespace vision
