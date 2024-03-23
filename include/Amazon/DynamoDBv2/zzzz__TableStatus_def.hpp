#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TableStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class TableStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::TableStatus);
// Type: Amazon.DynamoDBv2::TableStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::TableStatus*
class CORDL_TYPE TableStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ACTIVE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ACTIVE, put = setStaticF_ACTIVE))::Amazon::DynamoDBv2::TableStatus* ACTIVE;

  /// @brief Field ARCHIVED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ARCHIVED, put = setStaticF_ARCHIVED))::Amazon::DynamoDBv2::TableStatus* ARCHIVED;

  /// @brief Field ARCHIVING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ARCHIVING, put = setStaticF_ARCHIVING))::Amazon::DynamoDBv2::TableStatus* ARCHIVING;

  /// @brief Field CREATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREATING, put = setStaticF_CREATING))::Amazon::DynamoDBv2::TableStatus* CREATING;

  /// @brief Field DELETING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DELETING, put = setStaticF_DELETING))::Amazon::DynamoDBv2::TableStatus* DELETING;

  /// @brief Field INACCESSIBLE_ENCRYPTION_CREDENTIALS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS,
                             put = setStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS))::Amazon::DynamoDBv2::TableStatus* INACCESSIBLE_ENCRYPTION_CREDENTIALS;

  /// @brief Field UPDATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATING, put = setStaticF_UPDATING))::Amazon::DynamoDBv2::TableStatus* UPDATING;

  /// @brief Method FindValue, addr 0x1213a88, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::TableStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::TableStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1213a20, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_ACTIVE();

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_ARCHIVED();

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_ARCHIVING();

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_CREATING();

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_DELETING();

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS();

  static inline ::Amazon::DynamoDBv2::TableStatus* getStaticF_UPDATING();

  /// @brief Method op_Implicit, addr 0x1213af4, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::TableStatus* op_Implicit___Amazon__DynamoDBv2__TableStatus_(::StringW value);

  static inline void setStaticF_ACTIVE(::Amazon::DynamoDBv2::TableStatus* value);

  static inline void setStaticF_ARCHIVED(::Amazon::DynamoDBv2::TableStatus* value);

  static inline void setStaticF_ARCHIVING(::Amazon::DynamoDBv2::TableStatus* value);

  static inline void setStaticF_CREATING(::Amazon::DynamoDBv2::TableStatus* value);

  static inline void setStaticF_DELETING(::Amazon::DynamoDBv2::TableStatus* value);

  static inline void setStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS(::Amazon::DynamoDBv2::TableStatus* value);

  static inline void setStaticF_UPDATING(::Amazon::DynamoDBv2::TableStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableStatus(TableStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableStatus(TableStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::TableStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::TableStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::TableStatus*, "Amazon.DynamoDBv2", "TableStatus");
