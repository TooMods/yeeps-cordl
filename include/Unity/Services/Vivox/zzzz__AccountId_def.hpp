#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccountId)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class AccountId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AccountId);
// Type: Unity.Services.Vivox::AccountId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::AccountId*
class CORDL_TYPE AccountId : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccountName))::StringW AccountName;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_Domain))::StringW Domain;

  __declspec(property(get = get_EnvironmentId))::StringW EnvironmentId;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_SpokenLanguages))::ArrayW<::StringW, ::Array<::StringW>*> SpokenLanguages;

  /// @brief Field <EnvironmentId>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__EnvironmentId_k__BackingField, put = __cordl_internal_set__EnvironmentId_k__BackingField))::StringW _EnvironmentId_k__BackingField;

  /// @brief Field <Issuer>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Issuer_k__BackingField, put = __cordl_internal_set__Issuer_k__BackingField))::StringW _Issuer_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field _displayname, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayname, put = __cordl_internal_set__displayname))::StringW _displayname;

  /// @brief Field _domain, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__domain, put = __cordl_internal_set__domain))::StringW _domain;

  /// @brief Field _spokenLanguages, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spokenLanguages, put = __cordl_internal_set__spokenLanguages))::ArrayW<::StringW, ::Array<::StringW>*> _spokenLanguages;

  /// @brief Method Equals, addr 0x1c2c14c, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1c2c248, size 0x68, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Services::Vivox::AccountId* other);

  /// @brief Method GetHashCode, addr 0x1c2c2b0, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsNullOrEmpty, addr 0x1c2c330, size 0x10, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::Unity::Services::Vivox::AccountId* id);

  /// @brief Method IsValidName, addr 0x1c2bc14, size 0xf0, virtual false, abstract: false, final false
  inline bool IsValidName(::StringW name);

  static inline ::Unity::Services::Vivox::AccountId* New_ctor(::StringW issuer, ::StringW name, ::StringW domain, ::StringW displayname, ::ArrayW<::StringW, ::Array<::StringW>*> spokenLanguages,
                                                              ::StringW environmentId);

  static inline ::Unity::Services::Vivox::AccountId* New_ctor(::StringW uri, ::StringW displayname);

  /// @brief Method ToString, addr 0x1c2c340, size 0x374, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__EnvironmentId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EnvironmentId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Issuer_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Issuer_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__displayname() const;

  constexpr ::StringW& __cordl_internal_get__displayname();

  constexpr ::StringW const& __cordl_internal_get__domain() const;

  constexpr ::StringW& __cordl_internal_get__domain();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__spokenLanguages() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__spokenLanguages();

  constexpr void __cordl_internal_set__EnvironmentId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Issuer_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__displayname(::StringW value);

  constexpr void __cordl_internal_set__domain(::StringW value);

  constexpr void __cordl_internal_set__spokenLanguages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x1c23e28, size 0x72c, virtual false, abstract: false, final false
  inline void _ctor(::StringW issuer, ::StringW name, ::StringW domain, ::StringW displayname, ::ArrayW<::StringW, ::Array<::StringW>*> spokenLanguages, ::StringW environmentId);

  /// @brief Method .ctor, addr 0x1c2b4ec, size 0x708, virtual false, abstract: false, final false
  inline void _ctor(::StringW uri, ::StringW displayname);

  /// @brief Method get_AccountName, addr 0x1c2be14, size 0x2f4, virtual false, abstract: false, final false
  inline ::StringW get_AccountName();

  /// @brief Method get_DisplayName, addr 0x1c13d4c, size 0x30, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_Domain, addr 0x1c2bd1c, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW get_Domain();

  /// @brief Method get_EnvironmentId, addr 0x1c2bd14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EnvironmentId();

  /// @brief Method get_IsEmpty, addr 0x1c2c108, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Issuer, addr 0x1c2bd04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Name, addr 0x1c2bd0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_SpokenLanguages, addr 0x1c2bdb8, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_SpokenLanguages();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountId(AccountId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountId(AccountId const&) = delete;

  /// @brief Field _domain, offset: 0x10, size: 0x8, def value: None
  ::StringW ____domain;

  /// @brief Field _displayname, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayname;

  /// @brief Field _spokenLanguages, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____spokenLanguages;

  /// @brief Field <Issuer>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Issuer_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <EnvironmentId>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____EnvironmentId_k__BackingField;

  /// @brief Field _accountNameMaxLength offset 0xffffffff size 0x4
  static constexpr int32_t _accountNameMaxLength{ static_cast<int32_t>(0x7f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AccountId, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountId, ____domain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountId, ____displayname) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountId, ____spokenLanguages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountId, ____Issuer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountId, ____Name_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountId, ____EnvironmentId_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::AccountId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AccountId*, "Unity.Services.Vivox", "AccountId");
