#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExportFormat)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ExportFormat;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ExportFormat);
// Type: Amazon.DynamoDBv2::ExportFormat
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ExportFormat*
class CORDL_TYPE ExportFormat : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field DYNAMODB_JSON, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DYNAMODB_JSON, put = setStaticF_DYNAMODB_JSON))::Amazon::DynamoDBv2::ExportFormat* DYNAMODB_JSON;

  /// @brief Field ION, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ION, put = setStaticF_ION))::Amazon::DynamoDBv2::ExportFormat* ION;

  /// @brief Method FindValue, addr 0x12114ac, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ExportFormat* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ExportFormat* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x1211444, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ExportFormat* getStaticF_DYNAMODB_JSON();

  static inline ::Amazon::DynamoDBv2::ExportFormat* getStaticF_ION();

  /// @brief Method op_Implicit, addr 0x1211518, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ExportFormat* op_Implicit___Amazon__DynamoDBv2__ExportFormat_(::StringW value);

  static inline void setStaticF_DYNAMODB_JSON(::Amazon::DynamoDBv2::ExportFormat* value);

  static inline void setStaticF_ION(::Amazon::DynamoDBv2::ExportFormat* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExportFormat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExportFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExportFormat(ExportFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExportFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExportFormat(ExportFormat const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ExportFormat, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ExportFormat);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ExportFormat*, "Amazon.DynamoDBv2", "ExportFormat");
