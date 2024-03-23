#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BackupStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class BackupStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::BackupStatus);
// Type: Amazon.DynamoDBv2::BackupStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::BackupStatus*
class CORDL_TYPE BackupStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AVAILABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AVAILABLE, put = setStaticF_AVAILABLE))::Amazon::DynamoDBv2::BackupStatus* AVAILABLE;

  /// @brief Field CREATING, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREATING, put = setStaticF_CREATING))::Amazon::DynamoDBv2::BackupStatus* CREATING;

  /// @brief Field DELETED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DELETED, put = setStaticF_DELETED))::Amazon::DynamoDBv2::BackupStatus* DELETED;

  /// @brief Method FindValue, addr 0x120fa4c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BackupStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::BackupStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x120f9e4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::BackupStatus* getStaticF_AVAILABLE();

  static inline ::Amazon::DynamoDBv2::BackupStatus* getStaticF_CREATING();

  static inline ::Amazon::DynamoDBv2::BackupStatus* getStaticF_DELETED();

  /// @brief Method op_Implicit, addr 0x120fab8, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BackupStatus* op_Implicit___Amazon__DynamoDBv2__BackupStatus_(::StringW value);

  static inline void setStaticF_AVAILABLE(::Amazon::DynamoDBv2::BackupStatus* value);

  static inline void setStaticF_CREATING(::Amazon::DynamoDBv2::BackupStatus* value);

  static inline void setStaticF_DELETED(::Amazon::DynamoDBv2::BackupStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupStatus(BackupStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupStatus(BackupStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::BackupStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::BackupStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::BackupStatus*, "Amazon.DynamoDBv2", "BackupStatus");
