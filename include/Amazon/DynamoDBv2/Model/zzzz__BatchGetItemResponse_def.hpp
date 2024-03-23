#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchGetItemResponse)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace Amazon::DynamoDBv2::Model {
class KeysAndAttributes;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchGetItemResponse);
// Type: Amazon.DynamoDBv2.Model::BatchGetItemResponse
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchGetItemResponse*
class CORDL_TYPE BatchGetItemResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ConsumedCapacity;

  __declspec(property(get = get_Responses, put = set_Responses))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* Responses;

  __declspec(property(get = get_UnprocessedKeys, put = set_UnprocessedKeys))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* UnprocessedKeys;

  /// @brief Field _consumedCapacity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity,
                      put = __cordl_internal_set__consumedCapacity))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* _consumedCapacity;

  /// @brief Field _responses, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__responses, put = __cordl_internal_set__responses))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* _responses;

  /// @brief Field _unprocessedKeys, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__unprocessedKeys,
                      put = __cordl_internal_set__unprocessedKeys))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* _unprocessedKeys;

  /// @brief Method IsSetConsumedCapacity, addr 0x1226b18, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetResponses, addr 0x1226b7c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetResponses();

  /// @brief Method IsSetUnprocessedKeys, addr 0x1226be4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetUnprocessedKeys();

  static inline ::Amazon::DynamoDBv2::Model::BatchGetItemResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*&
  __cordl_internal_get__responses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*> const&
  __cordl_internal_get__responses() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>*& __cordl_internal_get__unprocessedKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>*> const&
  __cordl_internal_get__unprocessedKeys() const;

  constexpr void __cordl_internal_set__consumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  constexpr void
  __cordl_internal_set__responses(::System::Collections::Generic::Dictionary_2<
                                  ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* value);

  constexpr void __cordl_internal_set__unprocessedKeys(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* value);

  /// @brief Method .ctor, addr 0x1226c3c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedCapacity, addr 0x1226b08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* get_ConsumedCapacity();

  /// @brief Method get_Responses, addr 0x1226b6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                      ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*
  get_Responses();

  /// @brief Method get_UnprocessedKeys, addr 0x1226bd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* get_UnprocessedKeys();

  /// @brief Method set_ConsumedCapacity, addr 0x1226b10, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* value);

  /// @brief Method set_Responses, addr 0x1226b74, size 0x8, virtual false, abstract: false, final false
  inline void set_Responses(::System::Collections::Generic::Dictionary_2<
                            ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* value);

  /// @brief Method set_UnprocessedKeys, addr 0x1226bdc, size 0x8, virtual false, abstract: false, final false
  inline void set_UnprocessedKeys(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchGetItemResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchGetItemResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchGetItemResponse(BatchGetItemResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchGetItemResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchGetItemResponse(BatchGetItemResponse const&) = delete;

  /// @brief Field _consumedCapacity, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ConsumedCapacity*>* ____consumedCapacity;

  /// @brief Field _responses, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* ____responses;

  /// @brief Field _unprocessedKeys, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::KeysAndAttributes*>* ____unprocessedKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchGetItemResponse, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchGetItemResponse, ____consumedCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchGetItemResponse, ____responses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchGetItemResponse, ____unprocessedKeys) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchGetItemResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchGetItemResponse*, "Amazon.DynamoDBv2.Model", "BatchGetItemResponse");
