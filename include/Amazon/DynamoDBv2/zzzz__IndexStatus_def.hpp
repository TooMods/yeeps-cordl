#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IndexStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class IndexStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::IndexStatus);
// Type: Amazon.DynamoDBv2::IndexStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::IndexStatus*
class CORDL_TYPE IndexStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ACTIVE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ACTIVE, put = setStaticF_ACTIVE))::Amazon::DynamoDBv2::IndexStatus* ACTIVE;

  /// @brief Field CREATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREATING, put = setStaticF_CREATING))::Amazon::DynamoDBv2::IndexStatus* CREATING;

  /// @brief Field DELETING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DELETING, put = setStaticF_DELETING))::Amazon::DynamoDBv2::IndexStatus* DELETING;

  /// @brief Field UPDATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UPDATING, put = setStaticF_UPDATING))::Amazon::DynamoDBv2::IndexStatus* UPDATING;

  /// @brief Method FindValue, addr 0x1211ad0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::IndexStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::IndexStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1211a68, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::IndexStatus* getStaticF_ACTIVE();

  static inline ::Amazon::DynamoDBv2::IndexStatus* getStaticF_CREATING();

  static inline ::Amazon::DynamoDBv2::IndexStatus* getStaticF_DELETING();

  static inline ::Amazon::DynamoDBv2::IndexStatus* getStaticF_UPDATING();

  /// @brief Method op_Implicit, addr 0x1211b3c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::IndexStatus* op_Implicit___Amazon__DynamoDBv2__IndexStatus_(::StringW value);

  static inline void setStaticF_ACTIVE(::Amazon::DynamoDBv2::IndexStatus* value);

  static inline void setStaticF_CREATING(::Amazon::DynamoDBv2::IndexStatus* value);

  static inline void setStaticF_DELETING(::Amazon::DynamoDBv2::IndexStatus* value);

  static inline void setStaticF_UPDATING(::Amazon::DynamoDBv2::IndexStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexStatus(IndexStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexStatus(IndexStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::IndexStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::IndexStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::IndexStatus*, "Amazon.DynamoDBv2", "IndexStatus");
