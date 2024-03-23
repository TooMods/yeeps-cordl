#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BackupType)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class BackupType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::BackupType);
// Type: Amazon.DynamoDBv2::BackupType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::BackupType*
class CORDL_TYPE BackupType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AWS_BACKUP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AWS_BACKUP, put = setStaticF_AWS_BACKUP))::Amazon::DynamoDBv2::BackupType* AWS_BACKUP;

  /// @brief Field SYSTEM, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SYSTEM, put = setStaticF_SYSTEM))::Amazon::DynamoDBv2::BackupType* SYSTEM;

  /// @brief Field USER, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USER, put = setStaticF_USER))::Amazon::DynamoDBv2::BackupType* USER;

  /// @brief Method FindValue, addr 0x120fc58, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BackupType* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::BackupType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x120fbf0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::BackupType* getStaticF_AWS_BACKUP();

  static inline ::Amazon::DynamoDBv2::BackupType* getStaticF_SYSTEM();

  static inline ::Amazon::DynamoDBv2::BackupType* getStaticF_USER();

  /// @brief Method op_Implicit, addr 0x120fcc4, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BackupType* op_Implicit___Amazon__DynamoDBv2__BackupType_(::StringW value);

  static inline void setStaticF_AWS_BACKUP(::Amazon::DynamoDBv2::BackupType* value);

  static inline void setStaticF_SYSTEM(::Amazon::DynamoDBv2::BackupType* value);

  static inline void setStaticF_USER(::Amazon::DynamoDBv2::BackupType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupType(BackupType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupType(BackupType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::BackupType, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::BackupType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::BackupType*, "Amazon.DynamoDBv2", "BackupType");
