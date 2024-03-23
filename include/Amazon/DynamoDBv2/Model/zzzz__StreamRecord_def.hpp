#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamRecord)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class StreamViewType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class StreamRecord;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::StreamRecord);
// Type: Amazon.DynamoDBv2.Model::StreamRecord
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::StreamRecord*
class CORDL_TYPE StreamRecord : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ApproximateCreationDateTime, put = set_ApproximateCreationDateTime))::System::DateTime ApproximateCreationDateTime;

  __declspec(property(get = get_Keys, put = set_Keys))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Keys;

  __declspec(property(get = get_NewImage, put = set_NewImage))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* NewImage;

  __declspec(property(get = get_OldImage, put = set_OldImage))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* OldImage;

  __declspec(property(get = get_SequenceNumber, put = set_SequenceNumber))::StringW SequenceNumber;

  __declspec(property(get = get_SizeBytes, put = set_SizeBytes)) int64_t SizeBytes;

  __declspec(property(get = get_StreamViewType, put = set_StreamViewType))::Amazon::DynamoDBv2::StreamViewType* StreamViewType;

  /// @brief Field _approximateCreationDateTime, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__approximateCreationDateTime,
                      put = __cordl_internal_set__approximateCreationDateTime))::System::Nullable_1<::System::DateTime> _approximateCreationDateTime;

  /// @brief Field _keys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _keys;

  /// @brief Field _newImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__newImage,
                      put = __cordl_internal_set__newImage))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _newImage;

  /// @brief Field _oldImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__oldImage,
                      put = __cordl_internal_set__oldImage))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _oldImage;

  /// @brief Field _sequenceNumber, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sequenceNumber, put = __cordl_internal_set__sequenceNumber))::StringW _sequenceNumber;

  /// @brief Field _sizeBytes, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__sizeBytes, put = __cordl_internal_set__sizeBytes))::System::Nullable_1<int64_t> _sizeBytes;

  /// @brief Field _streamViewType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__streamViewType, put = __cordl_internal_set__streamViewType))::Amazon::DynamoDBv2::StreamViewType* _streamViewType;

  /// @brief Method IsSetApproximateCreationDateTime, addr 0x1051df8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetApproximateCreationDateTime();

  /// @brief Method IsSetKeys, addr 0x1051e44, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKeys();

  /// @brief Method IsSetNewImage, addr 0x1051eac, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetNewImage();

  /// @brief Method IsSetOldImage, addr 0x1051f14, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetOldImage();

  /// @brief Method IsSetSequenceNumber, addr 0x1051f7c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSequenceNumber();

  /// @brief Method IsSetSizeBytes, addr 0x1052038, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetSizeBytes();

  /// @brief Method IsSetStreamViewType, addr 0x1052084, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStreamViewType();

  static inline ::Amazon::DynamoDBv2::Model::StreamRecord* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__approximateCreationDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__approximateCreationDateTime();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__keys() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__newImage();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__newImage() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__oldImage();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__oldImage() const;

  constexpr ::StringW const& __cordl_internal_get__sequenceNumber() const;

  constexpr ::StringW& __cordl_internal_get__sequenceNumber();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__sizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__sizeBytes();

  constexpr ::Amazon::DynamoDBv2::StreamViewType*& __cordl_internal_get__streamViewType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::StreamViewType*> const& __cordl_internal_get__streamViewType() const;

  constexpr void __cordl_internal_set__approximateCreationDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__keys(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__newImage(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__oldImage(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__sequenceNumber(::StringW value);

  constexpr void __cordl_internal_set__sizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__streamViewType(::Amazon::DynamoDBv2::StreamViewType* value);

  /// @brief Method .ctor, addr 0x10520e4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ApproximateCreationDateTime, addr 0x1051d4c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_ApproximateCreationDateTime();

  /// @brief Method get_Keys, addr 0x1051e34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Keys();

  /// @brief Method get_NewImage, addr 0x1051e9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_NewImage();

  /// @brief Method get_OldImage, addr 0x1051f04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_OldImage();

  /// @brief Method get_SequenceNumber, addr 0x1051f6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SequenceNumber();

  /// @brief Method get_SizeBytes, addr 0x1051f8c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_SizeBytes();

  /// @brief Method get_StreamViewType, addr 0x1052074, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::StreamViewType* get_StreamViewType();

  /// @brief Method set_ApproximateCreationDateTime, addr 0x1051d88, size 0x70, virtual false, abstract: false, final false
  inline void set_ApproximateCreationDateTime(::System::DateTime value);

  /// @brief Method set_Keys, addr 0x1051e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Keys(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_NewImage, addr 0x1051ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_NewImage(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_OldImage, addr 0x1051f0c, size 0x8, virtual false, abstract: false, final false
  inline void set_OldImage(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_SequenceNumber, addr 0x1051f74, size 0x8, virtual false, abstract: false, final false
  inline void set_SequenceNumber(::StringW value);

  /// @brief Method set_SizeBytes, addr 0x1051fc8, size 0x70, virtual false, abstract: false, final false
  inline void set_SizeBytes(int64_t value);

  /// @brief Method set_StreamViewType, addr 0x105207c, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamViewType(::Amazon::DynamoDBv2::StreamViewType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamRecord(StreamRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamRecord(StreamRecord const&) = delete;

  /// @brief Field _approximateCreationDateTime, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____approximateCreationDateTime;

  /// @brief Field _keys, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____keys;

  /// @brief Field _newImage, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____newImage;

  /// @brief Field _oldImage, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____oldImage;

  /// @brief Field _sequenceNumber, offset: 0x38, size: 0x8, def value: None
  ::StringW ____sequenceNumber;

  /// @brief Field _sizeBytes, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____sizeBytes;

  /// @brief Field _streamViewType, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::StreamViewType* ____streamViewType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::StreamRecord, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____approximateCreationDateTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____keys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____newImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____oldImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____sequenceNumber) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____sizeBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::StreamRecord, ____streamViewType) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::StreamRecord);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::StreamRecord*, "Amazon.DynamoDBv2.Model", "StreamRecord");
