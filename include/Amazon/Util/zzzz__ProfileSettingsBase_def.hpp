#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileSettingsBase)
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
// Forward declare root types
namespace Amazon::Util {
class ProfileSettingsBase;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::ProfileSettingsBase);
// Type: Amazon.Util::ProfileSettingsBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::ProfileSettingsBase*
class CORDL_TYPE ProfileSettingsBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_UniqueId, put = set_UniqueId))::StringW UniqueId;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <UniqueId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__UniqueId_k__BackingField, put = __cordl_internal_set__UniqueId_k__BackingField))::StringW _UniqueId_k__BackingField;

  /// @brief Method LoadCredentialsProfile, addr 0x220d7f4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* LoadCredentialsProfile(::StringW profileName);

  static inline ::Amazon::Util::ProfileSettingsBase* New_ctor();

  /// @brief Method Persist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW Persist();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UniqueId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UniqueId_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UniqueId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x220d894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x220d7d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_UniqueId, addr 0x220d7e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UniqueId();

  /// @brief Method set_Name, addr 0x220d7dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_UniqueId, addr 0x220d7ec, size 0x8, virtual false, abstract: false, final false
  inline void set_UniqueId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileSettingsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileSettingsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileSettingsBase(ProfileSettingsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileSettingsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileSettingsBase(ProfileSettingsBase const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <UniqueId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____UniqueId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::ProfileSettingsBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::ProfileSettingsBase, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProfileSettingsBase, ____UniqueId_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::ProfileSettingsBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::ProfileSettingsBase*, "Amazon.Util", "ProfileSettingsBase");
