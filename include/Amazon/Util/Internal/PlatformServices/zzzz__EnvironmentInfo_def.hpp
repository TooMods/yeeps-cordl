#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentInfo)
namespace Amazon::Util::Internal::PlatformServices {
class IEnvironmentInfo;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class EnvironmentInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::EnvironmentInfo);
// Type: Amazon.Util.Internal.PlatformServices::EnvironmentInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::EnvironmentInfo*
class CORDL_TYPE EnvironmentInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FrameworkUserAgent))::StringW FrameworkUserAgent;

  __declspec(property(get = get_Platform))::StringW Platform;

  __declspec(property(get = get_PlatformUserAgent))::StringW PlatformUserAgent;

  /// @brief Field <FrameworkUserAgent>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__FrameworkUserAgent_k__BackingField, put = __cordl_internal_set__FrameworkUserAgent_k__BackingField))::StringW _FrameworkUserAgent_k__BackingField;

  /// @brief Field <PlatformUserAgent>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__PlatformUserAgent_k__BackingField, put = __cordl_internal_set__PlatformUserAgent_k__BackingField))::StringW _PlatformUserAgent_k__BackingField;

  /// @brief Field <Platform>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Platform_k__BackingField, put = __cordl_internal_set__Platform_k__BackingField))::StringW _Platform_k__BackingField;

  /// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo"
  constexpr operator ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo*() noexcept;

  static inline ::Amazon::Util::Internal::PlatformServices::EnvironmentInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__FrameworkUserAgent_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FrameworkUserAgent_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PlatformUserAgent_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PlatformUserAgent_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Platform_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Platform_k__BackingField();

  constexpr void __cordl_internal_set__FrameworkUserAgent_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__PlatformUserAgent_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Platform_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fdae28, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FrameworkUserAgent, addr 0x1fdaeb8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_FrameworkUserAgent();

  /// @brief Method get_Platform, addr 0x1fdaea8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Platform();

  /// @brief Method get_PlatformUserAgent, addr 0x1fdaeb0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_PlatformUserAgent();

  /// @brief Convert to "::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo"
  constexpr ::Amazon::Util::Internal::PlatformServices::IEnvironmentInfo* i___Amazon__Util__Internal__PlatformServices__IEnvironmentInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentInfo(EnvironmentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentInfo(EnvironmentInfo const&) = delete;

  /// @brief Field <Platform>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Platform_k__BackingField;

  /// @brief Field <PlatformUserAgent>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____PlatformUserAgent_k__BackingField;

  /// @brief Field <FrameworkUserAgent>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____FrameworkUserAgent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::EnvironmentInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::EnvironmentInfo, ____Platform_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::EnvironmentInfo, ____PlatformUserAgent_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::EnvironmentInfo, ____FrameworkUserAgent_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::EnvironmentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::EnvironmentInfo*, "Amazon.Util.Internal.PlatformServices", "EnvironmentInfo");
