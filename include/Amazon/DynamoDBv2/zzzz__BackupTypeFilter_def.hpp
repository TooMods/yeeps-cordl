#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BackupTypeFilter)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class BackupTypeFilter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::BackupTypeFilter);
// Type: Amazon.DynamoDBv2::BackupTypeFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::BackupTypeFilter*
class CORDL_TYPE BackupTypeFilter : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ALL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL, put = setStaticF_ALL))::Amazon::DynamoDBv2::BackupTypeFilter* ALL;

  /// @brief Field AWS_BACKUP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AWS_BACKUP, put = setStaticF_AWS_BACKUP))::Amazon::DynamoDBv2::BackupTypeFilter* AWS_BACKUP;

  /// @brief Field SYSTEM, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SYSTEM, put = setStaticF_SYSTEM))::Amazon::DynamoDBv2::BackupTypeFilter* SYSTEM;

  /// @brief Field USER, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USER, put = setStaticF_USER))::Amazon::DynamoDBv2::BackupTypeFilter* USER;

  /// @brief Method FindValue, addr 0x120fe64, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x120fdfc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* getStaticF_ALL();

  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* getStaticF_AWS_BACKUP();

  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* getStaticF_SYSTEM();

  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* getStaticF_USER();

  /// @brief Method op_Implicit, addr 0x120fed0, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BackupTypeFilter* op_Implicit___Amazon__DynamoDBv2__BackupTypeFilter_(::StringW value);

  static inline void setStaticF_ALL(::Amazon::DynamoDBv2::BackupTypeFilter* value);

  static inline void setStaticF_AWS_BACKUP(::Amazon::DynamoDBv2::BackupTypeFilter* value);

  static inline void setStaticF_SYSTEM(::Amazon::DynamoDBv2::BackupTypeFilter* value);

  static inline void setStaticF_USER(::Amazon::DynamoDBv2::BackupTypeFilter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupTypeFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupTypeFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupTypeFilter(BackupTypeFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupTypeFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupTypeFilter(BackupTypeFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::BackupTypeFilter, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::BackupTypeFilter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::BackupTypeFilter*, "Amazon.DynamoDBv2", "BackupTypeFilter");
