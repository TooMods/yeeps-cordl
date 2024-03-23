#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__ParticipantPropertyUpdateFrequency_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoginOptions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Services::Vivox {
struct ParticipantPropertyUpdateFrequency;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class LoginOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::LoginOptions);
// Type: Unity.Services.Vivox::LoginOptions
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::LoginOptions*
class CORDL_TYPE LoginOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BlockedUserList, put = set_BlockedUserList))::System::Collections::Generic::List_1<::StringW>* BlockedUserList;

  __declspec(property(get = get_DisplayName, put = set_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_EnableTTS, put = set_EnableTTS)) bool EnableTTS;

  __declspec(property(get = get_ParticipantUpdateFrequency, put = set_ParticipantUpdateFrequency))::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency ParticipantUpdateFrequency;

  __declspec(property(get = get_PlayerId, put = set_PlayerId))::StringW PlayerId;

  /// @brief Field <BlockedUserList>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__BlockedUserList_k__BackingField,
                      put = __cordl_internal_set__BlockedUserList_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _BlockedUserList_k__BackingField;

  /// @brief Field <DisplayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DisplayName_k__BackingField, put = __cordl_internal_set__DisplayName_k__BackingField))::StringW _DisplayName_k__BackingField;

  /// @brief Field <EnableTTS>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableTTS_k__BackingField, put = __cordl_internal_set__EnableTTS_k__BackingField)) bool _EnableTTS_k__BackingField;

  /// @brief Field <ParticipantUpdateFrequency>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__ParticipantUpdateFrequency_k__BackingField,
                      put = __cordl_internal_set__ParticipantUpdateFrequency_k__BackingField))::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency _ParticipantUpdateFrequency_k__BackingField;

  /// @brief Field <PlayerId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__PlayerId_k__BackingField, put = __cordl_internal_set__PlayerId_k__BackingField))::StringW _PlayerId_k__BackingField;

  static inline ::Unity::Services::Vivox::LoginOptions* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__BlockedUserList_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__BlockedUserList_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField();

  constexpr bool const& __cordl_internal_get__EnableTTS_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableTTS_k__BackingField();

  constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const& __cordl_internal_get__ParticipantUpdateFrequency_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency& __cordl_internal_get__ParticipantUpdateFrequency_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PlayerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PlayerId_k__BackingField();

  constexpr void __cordl_internal_set__BlockedUserList_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__EnableTTS_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ParticipantUpdateFrequency_k__BackingField(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value);

  constexpr void __cordl_internal_set__PlayerId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1c178a8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BlockedUserList, addr 0x1c17888, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_BlockedUserList();

  /// @brief Method get_DisplayName, addr 0x1c17864, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_EnableTTS, addr 0x1c17874, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableTTS();

  /// @brief Method get_ParticipantUpdateFrequency, addr 0x1c17898, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency get_ParticipantUpdateFrequency();

  /// @brief Method get_PlayerId, addr 0x1c17854, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PlayerId();

  /// @brief Method set_BlockedUserList, addr 0x1c17890, size 0x8, virtual false, abstract: false, final false
  inline void set_BlockedUserList(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_DisplayName, addr 0x1c1786c, size 0x8, virtual false, abstract: false, final false
  inline void set_DisplayName(::StringW value);

  /// @brief Method set_EnableTTS, addr 0x1c1787c, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableTTS(bool value);

  /// @brief Method set_ParticipantUpdateFrequency, addr 0x1c178a0, size 0x8, virtual false, abstract: false, final false
  inline void set_ParticipantUpdateFrequency(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value);

  /// @brief Method set_PlayerId, addr 0x1c1785c, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayerId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoginOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoginOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoginOptions(LoginOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoginOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoginOptions(LoginOptions const&) = delete;

  /// @brief Field <PlayerId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____PlayerId_k__BackingField;

  /// @brief Field <DisplayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____DisplayName_k__BackingField;

  /// @brief Field <EnableTTS>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____EnableTTS_k__BackingField;

  /// @brief Field <BlockedUserList>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____BlockedUserList_k__BackingField;

  /// @brief Field <ParticipantUpdateFrequency>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency ____ParticipantUpdateFrequency_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::LoginOptions, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginOptions, ____PlayerId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginOptions, ____DisplayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginOptions, ____EnableTTS_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginOptions, ____BlockedUserList_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginOptions, ____ParticipantUpdateFrequency_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::LoginOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::LoginOptions*, "Unity.Services.Vivox", "LoginOptions");
