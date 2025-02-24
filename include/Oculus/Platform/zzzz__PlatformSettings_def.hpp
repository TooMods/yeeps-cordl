#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformSettings)
// Forward declare root types
namespace Oculus::Platform {
class PlatformSettings;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::PlatformSettings);
// Type: Oculus.Platform::PlatformSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::PlatformSettings*
class CORDL_TYPE PlatformSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::UnityW<::Oculus::Platform::PlatformSettings> instance;

  /// @brief Field ovrAppID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ovrAppID, put = __cordl_internal_set_ovrAppID))::StringW ovrAppID;

  /// @brief Field ovrMobileAppID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ovrMobileAppID, put = __cordl_internal_set_ovrMobileAppID))::StringW ovrMobileAppID;

  /// @brief Field ovrUseStandalonePlatform, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_ovrUseStandalonePlatform, put = __cordl_internal_set_ovrUseStandalonePlatform)) bool ovrUseStandalonePlatform;

  static inline ::Oculus::Platform::PlatformSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_ovrAppID() const;

  constexpr ::StringW& __cordl_internal_get_ovrAppID();

  constexpr ::StringW const& __cordl_internal_get_ovrMobileAppID() const;

  constexpr ::StringW& __cordl_internal_get_ovrMobileAppID();

  constexpr bool const& __cordl_internal_get_ovrUseStandalonePlatform() const;

  constexpr bool& __cordl_internal_get_ovrUseStandalonePlatform();

  constexpr void __cordl_internal_set_ovrAppID(::StringW value);

  constexpr void __cordl_internal_set_ovrMobileAppID(::StringW value);

  constexpr void __cordl_internal_set_ovrUseStandalonePlatform(bool value);

  /// @brief Method .ctor, addr 0x19c28c8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Oculus::Platform::PlatformSettings> getStaticF_instance();

  /// @brief Method get_AppID, addr 0x19b76a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_AppID();

  /// @brief Method get_Instance, addr 0x19c26f4, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityW<::Oculus::Platform::PlatformSettings> get_Instance();

  /// @brief Method get_MobileAppID, addr 0x19b7684, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW get_MobileAppID();

  /// @brief Method get_UseStandalonePlatform, addr 0x19b6c44, size 0x1c, virtual false, abstract: false, final false
  static inline bool get_UseStandalonePlatform();

  static inline void setStaticF_instance(::UnityW<::Oculus::Platform::PlatformSettings> value);

  /// @brief Method set_AppID, addr 0x19c2818, size 0x20, virtual false, abstract: false, final false
  static inline void set_AppID(::StringW value);

  /// @brief Method set_Instance, addr 0x19c287c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::Oculus::Platform::PlatformSettings* value);

  /// @brief Method set_MobileAppID, addr 0x19c2838, size 0x20, virtual false, abstract: false, final false
  static inline void set_MobileAppID(::StringW value);

  /// @brief Method set_UseStandalonePlatform, addr 0x19c2858, size 0x24, virtual false, abstract: false, final false
  static inline void set_UseStandalonePlatform(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformSettings(PlatformSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformSettings(PlatformSettings const&) = delete;

  /// @brief Field ovrAppID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ovrAppID;

  /// @brief Field ovrMobileAppID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ovrMobileAppID;

  /// @brief Field ovrUseStandalonePlatform, offset: 0x28, size: 0x1, def value: None
  bool ___ovrUseStandalonePlatform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformSettings, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::PlatformSettings, ___ovrAppID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::PlatformSettings, ___ovrMobileAppID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::PlatformSettings, ___ovrUseStandalonePlatform) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::PlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformSettings*, "Oculus.Platform", "PlatformSettings");
