#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScanResponse)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ConsumedCapacity;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ScanResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ScanResponse);
// Type: Amazon.DynamoDBv2.Model::ScanResponse
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ScanResponse*
class CORDL_TYPE ScanResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ConsumedCapacity, put = set_ConsumedCapacity))::Amazon::DynamoDBv2::Model::ConsumedCapacity* ConsumedCapacity;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Items,
                      put = set_Items))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* Items;

  __declspec(property(get = get_LastEvaluatedKey, put = set_LastEvaluatedKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* LastEvaluatedKey;

  __declspec(property(get = get_ScannedCount, put = set_ScannedCount)) int32_t ScannedCount;

  /// @brief Field _consumedCapacity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__consumedCapacity, put = __cordl_internal_set__consumedCapacity))::Amazon::DynamoDBv2::Model::ConsumedCapacity* _consumedCapacity;

  /// @brief Field _count, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count))::System::Nullable_1<int32_t> _count;

  /// @brief Field _items, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__items,
      put = __cordl_internal_set__items))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* _items;

  /// @brief Field _lastEvaluatedKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lastEvaluatedKey,
                      put = __cordl_internal_set__lastEvaluatedKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _lastEvaluatedKey;

  /// @brief Field _scannedCount, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__scannedCount, put = __cordl_internal_set__scannedCount))::System::Nullable_1<int32_t> _scannedCount;

  /// @brief Method IsSetConsumedCapacity, addr 0x1050b98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConsumedCapacity();

  /// @brief Method IsSetCount, addr 0x1050c4c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCount();

  /// @brief Method IsSetItems, addr 0x1050c98, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetItems();

  /// @brief Method IsSetLastEvaluatedKey, addr 0x1050cfc, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetLastEvaluatedKey();

  /// @brief Method IsSetScannedCount, addr 0x1050df8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetScannedCount();

  static inline ::Amazon::DynamoDBv2::Model::ScanResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::ConsumedCapacity*& __cordl_internal_get__consumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ConsumedCapacity*> const& __cordl_internal_get__consumedCapacity() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__count() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__count();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*& __cordl_internal_get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*> const&
  __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__lastEvaluatedKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__lastEvaluatedKey() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__scannedCount() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__scannedCount();

  constexpr void __cordl_internal_set__consumedCapacity(::Amazon::DynamoDBv2::Model::ConsumedCapacity* value);

  constexpr void __cordl_internal_set__count(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

  constexpr void __cordl_internal_set__lastEvaluatedKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__scannedCount(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x1050e34, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsumedCapacity, addr 0x1050b88, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ConsumedCapacity* get_ConsumedCapacity();

  /// @brief Method get_Count, addr 0x1050ba8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Items, addr 0x1050c88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* get_Items();

  /// @brief Method get_LastEvaluatedKey, addr 0x1050cec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_LastEvaluatedKey();

  /// @brief Method get_ScannedCount, addr 0x1050d54, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ScannedCount();

  /// @brief Method set_ConsumedCapacity, addr 0x1050b90, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsumedCapacity(::Amazon::DynamoDBv2::Model::ConsumedCapacity* value);

  /// @brief Method set_Count, addr 0x1050be4, size 0x68, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  /// @brief Method set_Items, addr 0x1050c90, size 0x8, virtual false, abstract: false, final false
  inline void set_Items(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

  /// @brief Method set_LastEvaluatedKey, addr 0x1050cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_LastEvaluatedKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ScannedCount, addr 0x1050d90, size 0x68, virtual false, abstract: false, final false
  inline void set_ScannedCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScanResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScanResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScanResponse(ScanResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScanResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScanResponse(ScanResponse const&) = delete;

  /// @brief Field _consumedCapacity, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ConsumedCapacity* ____consumedCapacity;

  /// @brief Field _count, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____count;

  /// @brief Field _items, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* ____items;

  /// @brief Field _lastEvaluatedKey, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____lastEvaluatedKey;

  /// @brief Field _scannedCount, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____scannedCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ScanResponse, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanResponse, ____consumedCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanResponse, ____count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanResponse, ____items) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanResponse, ____lastEvaluatedKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanResponse, ____scannedCount) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ScanResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ScanResponse*, "Amazon.DynamoDBv2.Model", "ScanResponse");
