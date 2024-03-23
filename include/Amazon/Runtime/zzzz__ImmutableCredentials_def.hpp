#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImmutableCredentials)
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class ImmutableCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ImmutableCredentials);
// Type: Amazon.Runtime::ImmutableCredentials
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ImmutableCredentials*
class CORDL_TYPE ImmutableCredentials : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessKey, put = set_AccessKey))::StringW AccessKey;

  __declspec(property(get = get_SecretKey, put = set_SecretKey))::StringW SecretKey;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  __declspec(property(get = get_UseToken)) bool UseToken;

  /// @brief Field <AccessKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessKey_k__BackingField, put = __cordl_internal_set__AccessKey_k__BackingField))::StringW _AccessKey_k__BackingField;

  /// @brief Field <SecretKey>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SecretKey_k__BackingField, put = __cordl_internal_set__SecretKey_k__BackingField))::StringW _SecretKey_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField))::StringW _Token_k__BackingField;

  /// @brief Method Copy, addr 0x1feca68, size 0x70, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* Copy();

  /// @brief Method Equals, addr 0x1fecbc8, size 0x228, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1fecad8, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::ImmutableCredentials* New_ctor();

  static inline ::Amazon::Runtime::ImmutableCredentials* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token);

  constexpr ::StringW const& __cordl_internal_get__AccessKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SecretKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SecretKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr void __cordl_internal_set__AccessKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SecretKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1feca60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1fe5668, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token);

  /// @brief Method get_AccessKey, addr 0x1feca10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKey();

  /// @brief Method get_SecretKey, addr 0x1feca20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SecretKey();

  /// @brief Method get_Token, addr 0x1feca30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method get_UseToken, addr 0x1feca40, size 0x20, virtual false, abstract: false, final false
  inline bool get_UseToken();

  /// @brief Method set_AccessKey, addr 0x1feca18, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessKey(::StringW value);

  /// @brief Method set_SecretKey, addr 0x1feca28, size 0x8, virtual false, abstract: false, final false
  inline void set_SecretKey(::StringW value);

  /// @brief Method set_Token, addr 0x1feca38, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImmutableCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImmutableCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImmutableCredentials(ImmutableCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImmutableCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImmutableCredentials(ImmutableCredentials const&) = delete;

  /// @brief Field <AccessKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AccessKey_k__BackingField;

  /// @brief Field <SecretKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____SecretKey_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ImmutableCredentials, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ImmutableCredentials, ____AccessKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ImmutableCredentials, ____SecretKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ImmutableCredentials, ____Token_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ImmutableCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ImmutableCredentials*, "Amazon.Runtime", "ImmutableCredentials");
