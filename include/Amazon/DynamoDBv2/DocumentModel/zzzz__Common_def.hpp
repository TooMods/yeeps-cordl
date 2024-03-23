#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class QueryRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ScanRequest;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Common;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Common);
// Type: Amazon.DynamoDBv2.DocumentModel::Common
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Common*
class CORDL_TYPE Common : public ::System::Object {
public:
  // Declarations
  /// @brief Method AttributesToGetAsProjectionExpression, addr 0x141ff20, size 0x280, virtual false, abstract: false, final false
  static inline ::StringW AttributesToGetAsProjectionExpression(::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributeNames);

  /// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, T>* Combine(::System::Collections::Generic::IDictionary_2<::StringW, T>* items1,
                                                                                    ::System::Collections::Generic::IDictionary_2<::StringW, T>* items2,
                                                                                    ::System::Collections::Generic::IEqualityComparer_1<T>* valueComparer);

  /// @brief Method ConvertAttributeUpdatesToUpdateExpression, addr 0x141e540, size 0x658, virtual false, abstract: false, final false
  static inline void ConvertAttributeUpdatesToUpdateExpression(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* attributesToUpdates,
                                                               ByRef<::StringW> statement,
                                                               ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> expressionAttributeValues,
                                                               ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> expressionAttributes);

  /// @brief Method ConvertAttributesToGetToProjectionExpression, addr 0x141feb8, size 0x68, virtual false, abstract: false, final false
  static inline void ConvertAttributesToGetToProjectionExpression(::Amazon::DynamoDBv2::Model::QueryRequest* request);

  /// @brief Method ConvertAttributesToGetToProjectionExpression, addr 0x14201a0, size 0x68, virtual false, abstract: false, final false
  static inline void ConvertAttributesToGetToProjectionExpression(::Amazon::DynamoDBv2::Model::ScanRequest* request);

  /// @brief Method DeserializeClearString, addr 0x14207d0, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* DeserializeClearString(::StringW token);

  /// @brief Method FromPaginationToken, addr 0x14207c4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* FromPaginationToken(::StringW token);

  /// @brief Method GetAttributeReference, addr 0x1420208, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW GetAttributeReference(::StringW attribute, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributeNames, ByRef<int32_t> attributeCount);

  /// @brief Method GetAttributeReference, addr 0x141fdc8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetAttributeReference(::StringW attributeName);

  /// @brief Method GetAttributeValueReference, addr 0x141fe40, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetAttributeValueReference(::StringW attributeName);

  /// @brief Method GetVariableName, addr 0x141fd60, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetVariableName(ByRef<int32_t> attributeCount);

  /// @brief Method ReadNextKey, addr 0x142098c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ReadNextKey(::System::IO::Stream* stream);

  /// @brief Method SerializeClearString, addr 0x1420358, size 0x1e0, virtual false, abstract: false, final false
  static inline ::StringW SerializeClearString(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* nextKey);

  /// @brief Method ToPaginationToken, addr 0x142034c, size 0xc, virtual false, abstract: false, final false
  static inline ::StringW ToPaginationToken(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* nextKey);

  /// @brief Method WriteNextKey, addr 0x1420538, size 0x28c, virtual false, abstract: false, final false
  static inline void WriteNextKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* nextKey, ::System::IO::TextWriter* writer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Common();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Common(Common&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Common(Common const&) = delete;

  /// @brief Field AwsVariablePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString AwsVariablePrefix{ u"awsavar" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Common, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Common);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Common*, "Amazon.DynamoDBv2.DocumentModel", "Common");
