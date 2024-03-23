#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SSEDescription)
namespace Amazon::DynamoDBv2 {
class SSEStatus;
}
namespace Amazon::DynamoDBv2 {
class SSEType;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class SSEDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::SSEDescription);
// Type: Amazon.DynamoDBv2.Model::SSEDescription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::SSEDescription*
class CORDL_TYPE SSEDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InaccessibleEncryptionDateTime, put = set_InaccessibleEncryptionDateTime))::System::DateTime InaccessibleEncryptionDateTime;

  __declspec(property(get = get_KMSMasterKeyArn, put = set_KMSMasterKeyArn))::StringW KMSMasterKeyArn;

  __declspec(property(get = get_SSEType, put = set_SSEType))::Amazon::DynamoDBv2::SSEType* SSEType;

  __declspec(property(get = get_Status, put = set_Status))::Amazon::DynamoDBv2::SSEStatus* Status;

  /// @brief Field _inaccessibleEncryptionDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__inaccessibleEncryptionDateTime,
                      put = __cordl_internal_set__inaccessibleEncryptionDateTime))::System::Nullable_1<::System::DateTime> _inaccessibleEncryptionDateTime;

  /// @brief Field _kmsMasterKeyArn, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsMasterKeyArn, put = __cordl_internal_set__kmsMasterKeyArn))::StringW _kmsMasterKeyArn;

  /// @brief Field _sseType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sseType, put = __cordl_internal_set__sseType))::Amazon::DynamoDBv2::SSEType* _sseType;

  /// @brief Field _status, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status))::Amazon::DynamoDBv2::SSEStatus* _status;

  /// @brief Method IsSetInaccessibleEncryptionDateTime, addr 0x10516c0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetInaccessibleEncryptionDateTime();

  /// @brief Method IsSetKMSMasterKeyArn, addr 0x105170c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSMasterKeyArn();

  /// @brief Method IsSetSSEType, addr 0x105172c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetSSEType();

  /// @brief Method IsSetStatus, addr 0x105179c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStatus();

  static inline ::Amazon::DynamoDBv2::Model::SSEDescription* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__inaccessibleEncryptionDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__inaccessibleEncryptionDateTime();

  constexpr ::StringW const& __cordl_internal_get__kmsMasterKeyArn() const;

  constexpr ::StringW& __cordl_internal_get__kmsMasterKeyArn();

  constexpr ::Amazon::DynamoDBv2::SSEType*& __cordl_internal_get__sseType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::SSEType*> const& __cordl_internal_get__sseType() const;

  constexpr ::Amazon::DynamoDBv2::SSEStatus*& __cordl_internal_get__status();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::SSEStatus*> const& __cordl_internal_get__status() const;

  constexpr void __cordl_internal_set__inaccessibleEncryptionDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__kmsMasterKeyArn(::StringW value);

  constexpr void __cordl_internal_set__sseType(::Amazon::DynamoDBv2::SSEType* value);

  constexpr void __cordl_internal_set__status(::Amazon::DynamoDBv2::SSEStatus* value);

  /// @brief Method .ctor, addr 0x10517fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InaccessibleEncryptionDateTime, addr 0x1051614, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_InaccessibleEncryptionDateTime();

  /// @brief Method get_KMSMasterKeyArn, addr 0x10516fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSMasterKeyArn();

  /// @brief Method get_SSEType, addr 0x105171c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::SSEType* get_SSEType();

  /// @brief Method get_Status, addr 0x105178c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::SSEStatus* get_Status();

  /// @brief Method set_InaccessibleEncryptionDateTime, addr 0x1051650, size 0x70, virtual false, abstract: false, final false
  inline void set_InaccessibleEncryptionDateTime(::System::DateTime value);

  /// @brief Method set_KMSMasterKeyArn, addr 0x1051704, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSMasterKeyArn(::StringW value);

  /// @brief Method set_SSEType, addr 0x1051724, size 0x8, virtual false, abstract: false, final false
  inline void set_SSEType(::Amazon::DynamoDBv2::SSEType* value);

  /// @brief Method set_Status, addr 0x1051794, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(::Amazon::DynamoDBv2::SSEStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SSEDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SSEDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SSEDescription(SSEDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SSEDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SSEDescription(SSEDescription const&) = delete;

  /// @brief Field _inaccessibleEncryptionDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____inaccessibleEncryptionDateTime;

  /// @brief Field _kmsMasterKeyArn, offset: 0x20, size: 0x8, def value: None
  ::StringW ____kmsMasterKeyArn;

  /// @brief Field _sseType, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::SSEType* ____sseType;

  /// @brief Field _status, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::SSEStatus* ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::SSEDescription, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSEDescription, ____inaccessibleEncryptionDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSEDescription, ____kmsMasterKeyArn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSEDescription, ____sseType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSEDescription, ____status) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::SSEDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::SSEDescription*, "Amazon.DynamoDBv2.Model", "SSEDescription");
