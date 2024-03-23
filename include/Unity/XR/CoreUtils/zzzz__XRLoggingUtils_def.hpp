#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XRLoggingUtils)
namespace System {
class Exception;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class XRLoggingUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::XRLoggingUtils);
// Type: Unity.XR.CoreUtils::XRLoggingUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::XRLoggingUtils*
class CORDL_TYPE XRLoggingUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_DontLogAnything, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_k_DontLogAnything, put = setStaticF_k_DontLogAnything)) bool k_DontLogAnything;

  /// @brief Method Log, addr 0x287f7d0, size 0xac, virtual false, abstract: false, final false
  static inline void Log(::StringW message, ::UnityEngine::Object* context);

  /// @brief Method LogError, addr 0x287f928, size 0xac, virtual false, abstract: false, final false
  static inline void LogError(::StringW message, ::UnityEngine::Object* context);

  /// @brief Method LogException, addr 0x287f9d4, size 0xac, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogWarning, addr 0x287f87c, size 0xac, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message, ::UnityEngine::Object* context);

  static inline bool getStaticF_k_DontLogAnything();

  static inline void setStaticF_k_DontLogAnything(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLoggingUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLoggingUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLoggingUtils(XRLoggingUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLoggingUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLoggingUtils(XRLoggingUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::XRLoggingUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::XRLoggingUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::XRLoggingUtils*, "Unity.XR.CoreUtils", "XRLoggingUtils");
