#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExportStatus)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ExportStatus;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ExportStatus);
// Type: Amazon.DynamoDBv2::ExportStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ExportStatus*
class CORDL_TYPE ExportStatus : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field COMPLETED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_COMPLETED, put = setStaticF_COMPLETED))::Amazon::DynamoDBv2::ExportStatus* COMPLETED;

  /// @brief Field FAILED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FAILED, put = setStaticF_FAILED))::Amazon::DynamoDBv2::ExportStatus* FAILED;

  /// @brief Field IN_PROGRESS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IN_PROGRESS, put = setStaticF_IN_PROGRESS))::Amazon::DynamoDBv2::ExportStatus* IN_PROGRESS;

  /// @brief Method FindValue, addr 0x1211684, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ExportStatus* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ExportStatus* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x121161c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ExportStatus* getStaticF_COMPLETED();

  static inline ::Amazon::DynamoDBv2::ExportStatus* getStaticF_FAILED();

  static inline ::Amazon::DynamoDBv2::ExportStatus* getStaticF_IN_PROGRESS();

  /// @brief Method op_Implicit, addr 0x12116f0, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ExportStatus* op_Implicit___Amazon__DynamoDBv2__ExportStatus_(::StringW value);

  static inline void setStaticF_COMPLETED(::Amazon::DynamoDBv2::ExportStatus* value);

  static inline void setStaticF_FAILED(::Amazon::DynamoDBv2::ExportStatus* value);

  static inline void setStaticF_IN_PROGRESS(::Amazon::DynamoDBv2::ExportStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExportStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExportStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExportStatus(ExportStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExportStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExportStatus(ExportStatus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ExportStatus, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ExportStatus);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ExportStatus*, "Amazon.DynamoDBv2", "ExportStatus");
