#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Filter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScanFilter)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ScanOperator;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class ScanFilter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::ScanFilter);
// Type: Amazon.DynamoDBv2.DocumentModel::ScanFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::ScanFilter*
class CORDL_TYPE ScanFilter : public ::Amazon::DynamoDBv2::DocumentModel::Filter {
public:
  // Declarations
  /// @brief Method AddCondition, addr 0x1655e18, size 0xc0, virtual false, abstract: false, final false
  inline void AddCondition(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator op,
                           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  /// @brief Method AddCondition, addr 0x1655d4c, size 0xcc, virtual false, abstract: false, final false
  inline void AddCondition(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator op, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

  static inline ::Amazon::DynamoDBv2::DocumentModel::ScanFilter* New_ctor();

  /// @brief Method .ctor, addr 0x1655d48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScanFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScanFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScanFilter(ScanFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScanFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScanFilter(ScanFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::ScanFilter, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::ScanFilter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::ScanFilter*, "Amazon.DynamoDBv2.DocumentModel", "ScanFilter");
