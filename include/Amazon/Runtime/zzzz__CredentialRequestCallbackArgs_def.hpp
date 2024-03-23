#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CredentialRequestCallbackArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class CredentialRequestCallbackArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialRequestCallbackArgs);
// Type: Amazon.Runtime::CredentialRequestCallbackArgs
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::CredentialRequestCallbackArgs*
class CORDL_TYPE CredentialRequestCallbackArgs : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CustomState, put = set_CustomState))::System::Object* CustomState;

  __declspec(property(get = get_PreviousAuthenticationFailed, put = set_PreviousAuthenticationFailed)) bool PreviousAuthenticationFailed;

  __declspec(property(get = get_ProfileName, put = set_ProfileName))::StringW ProfileName;

  __declspec(property(get = get_UserIdentity, put = set_UserIdentity))::StringW UserIdentity;

  /// @brief Field <CustomState>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CustomState_k__BackingField, put = __cordl_internal_set__CustomState_k__BackingField))::System::Object* _CustomState_k__BackingField;

  /// @brief Field <PreviousAuthenticationFailed>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__PreviousAuthenticationFailed_k__BackingField,
                      put = __cordl_internal_set__PreviousAuthenticationFailed_k__BackingField)) bool _PreviousAuthenticationFailed_k__BackingField;

  /// @brief Field <ProfileName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfileName_k__BackingField, put = __cordl_internal_set__ProfileName_k__BackingField))::StringW _ProfileName_k__BackingField;

  /// @brief Field <UserIdentity>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__UserIdentity_k__BackingField, put = __cordl_internal_set__UserIdentity_k__BackingField))::StringW _UserIdentity_k__BackingField;

  static inline ::Amazon::Runtime::CredentialRequestCallbackArgs* New_ctor();

  constexpr ::System::Object*& __cordl_internal_get__CustomState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__CustomState_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__PreviousAuthenticationFailed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PreviousAuthenticationFailed_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ProfileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfileName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UserIdentity_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserIdentity_k__BackingField();

  constexpr void __cordl_internal_set__CustomState_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__PreviousAuthenticationFailed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ProfileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UserIdentity_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fe7cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CustomState, addr 0x1fe7ca4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_CustomState();

  /// @brief Method get_PreviousAuthenticationFailed, addr 0x1fe7cb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_PreviousAuthenticationFailed();

  /// @brief Method get_ProfileName, addr 0x1fe7c84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfileName();

  /// @brief Method get_UserIdentity, addr 0x1fe7c94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserIdentity();

  /// @brief Method set_CustomState, addr 0x1fe7cac, size 0x8, virtual false, abstract: false, final false
  inline void set_CustomState(::System::Object* value);

  /// @brief Method set_PreviousAuthenticationFailed, addr 0x1fe7cbc, size 0xc, virtual false, abstract: false, final false
  inline void set_PreviousAuthenticationFailed(bool value);

  /// @brief Method set_ProfileName, addr 0x1fe7c8c, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfileName(::StringW value);

  /// @brief Method set_UserIdentity, addr 0x1fe7c9c, size 0x8, virtual false, abstract: false, final false
  inline void set_UserIdentity(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialRequestCallbackArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialRequestCallbackArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialRequestCallbackArgs(CredentialRequestCallbackArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialRequestCallbackArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialRequestCallbackArgs(CredentialRequestCallbackArgs const&) = delete;

  /// @brief Field <ProfileName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ProfileName_k__BackingField;

  /// @brief Field <UserIdentity>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____UserIdentity_k__BackingField;

  /// @brief Field <CustomState>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____CustomState_k__BackingField;

  /// @brief Field <PreviousAuthenticationFailed>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____PreviousAuthenticationFailed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialRequestCallbackArgs, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialRequestCallbackArgs, ____ProfileName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialRequestCallbackArgs, ____UserIdentity_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialRequestCallbackArgs, ____CustomState_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialRequestCallbackArgs, ____PreviousAuthenticationFailed_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::CredentialRequestCallbackArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialRequestCallbackArgs*, "Amazon.Runtime", "CredentialRequestCallbackArgs");
