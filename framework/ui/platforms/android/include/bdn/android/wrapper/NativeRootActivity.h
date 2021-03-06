#pragma once

#include <bdn/java/wrapper/Object.h>

namespace bdn::android::wrapper
{

    constexpr const char kNativeRootActivityClassName[] = "io/boden/android/NativeRootActivity";

    class NativeRootActivity : public java::wrapper::JTObject<kNativeRootActivityClassName>
    {
      public:
        using JTObject<kNativeRootActivityClassName>::JTObject;

      public:
        constexpr static const JTObject<kNativeRootActivityClassName>::StaticMethod<std::string(std::string)>
            getResourceURIFromURI{"getResourceURIFromURI"};

        constexpr static const JTObject<kNativeRootActivityClassName>::StaticMethod<void(std::string)> copyToClipboard{
            "copyToClipboard"};

        // JavaMethod<void(java::wrapper::CharSequence)> setTitle{this, "setTitle"};
        // JavaMethod<void(bool)> enableBackButton{this, "enableBackButton"};
    };
}
