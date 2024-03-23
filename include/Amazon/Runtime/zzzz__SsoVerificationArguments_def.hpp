#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SsoVerificationArguments)
// Forward declare root types
namespace Amazon::Runtime {
class SsoVerificationArguments;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SsoVerificationArguments);
// Type: Amazon.Runtime::SsoVerificationArguments
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SsoVerificationArguments*
class CORDL_TYPE SsoVerificationArguments : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_UserCode, put = set_UserCode))::StringW UserCode;

  __declspec(property(get = get_VerificationUri, put = set_VerificationUri))::StringW VerificationUri;

  __declspec(property(get = get_VerificationUriComplete, put = set_VerificationUriComplete))::StringW VerificationUriComplete;

  /// @brief Field <UserCode>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__UserCode_k__BackingField, put = __cordl_internal_set__UserCode_k__BackingField))::StringW _UserCode_k__BackingField;

  /// @brief Field <VerificationUriComplete>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__VerificationUriComplete_k__BackingField,
                      put = __cordl_internal_set__VerificationUriComplete_k__BackingField))::StringW _VerificationUriComplete_k__BackingField;

  /// @brief Field <VerificationUri>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__VerificationUri_k__BackingField, put = __cordl_internal_set__VerificationUri_k__BackingField))::StringW _VerificationUri_k__BackingField;

  /// @brief Method GetSsoSigninMessage, addr 0x1ff459c, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetSsoSigninMessage();

  static inline ::Amazon::Runtime::SsoVerificationArguments* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__UserCode_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__VerificationUriComplete_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__VerificationUriComplete_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__VerificationUri_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__VerificationUri_k__BackingField();

  constexpr void __cordl_internal_set__UserCode_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__VerificationUriComplete_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__VerificationUri_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1ff469c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UserCode, addr 0x1ff456c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserCode();

  /// @brief Method get_VerificationUri, addr 0x1ff457c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_VerificationUri();

  /// @brief Method get_VerificationUriComplete, addr 0x1ff458c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_VerificationUriComplete();

  /// @brief Method set_UserCode, addr 0x1ff4574, size 0x8, virtual false, abstract: false, final false
  inline void set_UserCode(::StringW value);

  /// @brief Method set_VerificationUri, addr 0x1ff4584, size 0x8, virtual false, abstract: false, final false
  inline void set_VerificationUri(::StringW value);

  /// @brief Method set_VerificationUriComplete, addr 0x1ff4594, size 0x8, virtual false, abstract: false, final false
  inline void set_VerificationUriComplete(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SsoVerificationArguments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SsoVerificationArguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SsoVerificationArguments(SsoVerificationArguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SsoVerificationArguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SsoVerificationArguments(SsoVerificationArguments const&) = delete;

  /// @brief Field <UserCode>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____UserCode_k__BackingField;

  /// @brief Field <VerificationUri>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____VerificationUri_k__BackingField;

  /// @brief Field <VerificationUriComplete>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____VerificationUriComplete_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SsoVerificationArguments, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SsoVerificationArguments, ____UserCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SsoVerificationArguments, ____VerificationUri_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SsoVerificationArguments, ____VerificationUriComplete_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SsoVerificationArguments);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SsoVerificationArguments*, "Amazon.Runtime", "SsoVerificationArguments");
