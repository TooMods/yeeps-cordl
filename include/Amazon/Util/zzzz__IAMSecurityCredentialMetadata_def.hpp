#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAMSecurityCredentialMetadata)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Util {
class IAMSecurityCredentialMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::IAMSecurityCredentialMetadata);
// Type: Amazon.Util::IAMSecurityCredentialMetadata
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::IAMSecurityCredentialMetadata*
class CORDL_TYPE IAMSecurityCredentialMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessKeyId, put = set_AccessKeyId))::StringW AccessKeyId;

  __declspec(property(get = get_Code, put = set_Code))::StringW Code;

  __declspec(property(get = get_Expiration, put = set_Expiration))::System::DateTime Expiration;

  __declspec(property(get = get_LastUpdated, put = set_LastUpdated))::System::DateTime LastUpdated;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  __declspec(property(get = get_SecretAccessKey, put = set_SecretAccessKey))::StringW SecretAccessKey;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field <AccessKeyId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessKeyId_k__BackingField, put = __cordl_internal_set__AccessKeyId_k__BackingField))::StringW _AccessKeyId_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField))::StringW _Code_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Expiration_k__BackingField, put = __cordl_internal_set__Expiration_k__BackingField))::System::DateTime _Expiration_k__BackingField;

  /// @brief Field <LastUpdated>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__LastUpdated_k__BackingField, put = __cordl_internal_set__LastUpdated_k__BackingField))::System::DateTime _LastUpdated_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  /// @brief Field <SecretAccessKey>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__SecretAccessKey_k__BackingField, put = __cordl_internal_set__SecretAccessKey_k__BackingField))::StringW _SecretAccessKey_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField))::StringW _Token_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::StringW _Type_k__BackingField;

  static inline ::Amazon::Util::IAMSecurityCredentialMetadata* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__AccessKeyId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessKeyId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Code_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__Expiration_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Expiration_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__LastUpdated_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastUpdated_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SecretAccessKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SecretAccessKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__AccessKeyId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Code_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Expiration_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__LastUpdated_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SecretAccessKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2207154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessKeyId, addr 0x2209944, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKeyId();

  /// @brief Method get_Code, addr 0x2209904, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Code();

  /// @brief Method get_Expiration, addr 0x2209974, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Expiration();

  /// @brief Method get_LastUpdated, addr 0x2209924, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastUpdated();

  /// @brief Method get_Message, addr 0x2209914, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_SecretAccessKey, addr 0x2209954, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SecretAccessKey();

  /// @brief Method get_Token, addr 0x2209964, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method get_Type, addr 0x2209934, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_AccessKeyId, addr 0x220994c, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessKeyId(::StringW value);

  /// @brief Method set_Code, addr 0x220990c, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::StringW value);

  /// @brief Method set_Expiration, addr 0x220997c, size 0x8, virtual false, abstract: false, final false
  inline void set_Expiration(::System::DateTime value);

  /// @brief Method set_LastUpdated, addr 0x220992c, size 0x8, virtual false, abstract: false, final false
  inline void set_LastUpdated(::System::DateTime value);

  /// @brief Method set_Message, addr 0x220991c, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_SecretAccessKey, addr 0x220995c, size 0x8, virtual false, abstract: false, final false
  inline void set_SecretAccessKey(::StringW value);

  /// @brief Method set_Token, addr 0x220996c, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

  /// @brief Method set_Type, addr 0x220993c, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IAMSecurityCredentialMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IAMSecurityCredentialMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAMSecurityCredentialMetadata(IAMSecurityCredentialMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAMSecurityCredentialMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAMSecurityCredentialMetadata(IAMSecurityCredentialMetadata const&) = delete;

  /// @brief Field <Code>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Code_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <LastUpdated>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ____LastUpdated_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Type_k__BackingField;

  /// @brief Field <AccessKeyId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____AccessKeyId_k__BackingField;

  /// @brief Field <SecretAccessKey>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____SecretAccessKey_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::DateTime ____Expiration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::IAMSecurityCredentialMetadata, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____Code_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____LastUpdated_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____AccessKeyId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____SecretAccessKey_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____Token_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::IAMSecurityCredentialMetadata, ____Expiration_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::IAMSecurityCredentialMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::IAMSecurityCredentialMetadata*, "Amazon.Util", "IAMSecurityCredentialMetadata");
