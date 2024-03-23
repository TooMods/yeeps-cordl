#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Filter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(QueryFilter)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct QueryOperator;
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
class QueryFilter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::QueryFilter);
// Type: Amazon.DynamoDBv2.DocumentModel::QueryFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::QueryFilter*
class CORDL_TYPE QueryFilter : public ::Amazon::DynamoDBv2::DocumentModel::Filter {
public:
  // Declarations
  /// @brief Method AddCondition, addr 0x1656028, size 0xc0, virtual false, abstract: false, final false
  inline void AddCondition(::StringW keyAttributeName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  /// @brief Method AddCondition, addr 0x1655f1c, size 0xcc, virtual false, abstract: false, final false
  inline void AddCondition(::StringW keyAttributeName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                           ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

  /// @brief Method AddCondition, addr 0x1656310, size 0xc0, virtual false, abstract: false, final false
  inline void AddCondition(::StringW nonKeyAttributeName, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator op,
                           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  /// @brief Method AddCondition, addr 0x1656244, size 0xcc, virtual false, abstract: false, final false
  inline void AddCondition(::StringW nonKeyAttributeName, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator op,
                           ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

  static inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter*
  New_ctor(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  static inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* New_ctor(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                           ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

  static inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* New_ctor(::Amazon::DynamoDBv2::DocumentModel::QueryFilter* baseFilter);

  /// @brief Method .ctor, addr 0x1655ed8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1655fe8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  /// @brief Method .ctor, addr 0x1655edc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

  /// @brief Method .ctor, addr 0x16560e8, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::QueryFilter* baseFilter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryFilter(QueryFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryFilter(QueryFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::QueryFilter, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::QueryFilter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::QueryFilter*, "Amazon.DynamoDBv2.DocumentModel", "QueryFilter");
