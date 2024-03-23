#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidUtils)
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Unity::Services::Core::Device {
class AndroidUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Device::AndroidUtils);
// Type: Unity.Services.Core.Device::AndroidUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Device {
// Is value type: false
// CS Name: ::Unity.Services.Core.Device::AndroidUtils*
class CORDL_TYPE AndroidUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSharedPreferences, addr 0x1556b3c, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* GetSharedPreferences(::UnityEngine::AndroidJavaObject* context, ::StringW name, int32_t mode);

  /// @brief Method GetSharedPreferences, addr 0x1556c70, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* GetSharedPreferences(::StringW name, int32_t mode);

  /// @brief Method GetUnityActivity, addr 0x1556968, size 0x1d4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* GetUnityActivity();

  /// @brief Method SharedPreferencesGetString, addr 0x1556df0, size 0x18c, virtual false, abstract: false, final false
  static inline ::StringW SharedPreferencesGetString(::StringW name, ::StringW key, ::StringW defValue);

  /// @brief Method SharedPreferencesGetString, addr 0x1556f7c, size 0x224, virtual false, abstract: false, final false
  static inline ::StringW SharedPreferencesGetString(::UnityEngine::AndroidJavaObject* preferences, ::StringW key, ::StringW defValue);

  /// @brief Method SharedPreferencesPutString, addr 0x15571a0, size 0x17c, virtual false, abstract: false, final false
  static inline void SharedPreferencesPutString(::StringW name, ::StringW key, ::StringW value);

  /// @brief Method SharedPreferencesPutString, addr 0x155731c, size 0x218, virtual false, abstract: false, final false
  static inline void SharedPreferencesPutString(::UnityEngine::AndroidJavaObject* preferences, ::StringW key, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidUtils(AndroidUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidUtils(AndroidUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Device::AndroidUtils, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Device
NEED_NO_BOX(::Unity::Services::Core::Device::AndroidUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Device::AndroidUtils*, "Unity.Services.Core.Device", "AndroidUtils");
