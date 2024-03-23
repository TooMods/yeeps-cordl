#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnumMapper)
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ProjectionTypeValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct QueryOperator;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ReturnConsumedCapacityValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ReturnItemCollectionMetricsValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ReturnValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ScanOperator;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct SelectValues;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class EnumMapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::EnumMapper);
// Type: Amazon.DynamoDBv2.DocumentModel::EnumMapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::EnumMapper*
class CORDL_TYPE EnumMapper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x141d430, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method Convert, addr 0x141f98c, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::ProjectionTypeValues value);

  /// @brief Method Convert, addr 0x141fc68, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::QueryOperator value);

  /// @brief Method Convert, addr 0x141f7fc, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::ReturnConsumedCapacityValues value);

  /// @brief Method Convert, addr 0x141f8c4, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::ReturnItemCollectionMetricsValues value);

  /// @brief Method Convert, addr 0x141d350, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::ReturnValues value);

  /// @brief Method Convert, addr 0x141fb28, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::ScanOperator value);

  /// @brief Method Convert, addr 0x141fa54, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW Convert(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumMapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumMapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumMapper(EnumMapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumMapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumMapper(EnumMapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::EnumMapper, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::EnumMapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::EnumMapper*, "Amazon.DynamoDBv2.DocumentModel", "EnumMapper");
