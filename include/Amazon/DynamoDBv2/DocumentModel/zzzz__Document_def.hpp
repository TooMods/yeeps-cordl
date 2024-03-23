#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Document)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBBool;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBNull;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __DynamoDBEntry__AttributeConversionConfig;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Document);
// Type: Amazon.DynamoDBv2.DocumentModel::Document
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Document*
class CORDL_TYPE Document : public ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<::StringW>* Keys;

  __declspec(property(get = get_Values))::System::Collections::Generic::ICollection_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Values;

  /// @brief Field currentValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentValues,
                      put = __cordl_internal_set_currentValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* currentValues;

  /// @brief Field originalValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_originalValues,
                      put = __cordl_internal_set_originalValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* originalValues;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x1748b60, size 0x80, virtual true, abstract: false, final true
  inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> item);

  /// @brief Method Add, addr 0x17489a8, size 0x68, virtual true, abstract: false, final true
  inline void Add(::StringW key, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value);

  /// @brief Method ApplyEpochRules, addr 0x17474f8, size 0x2f8, virtual false, abstract: false, final false
  static inline void ApplyEpochRules(::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes, ::StringW attributeName,
                                     ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry);

  /// @brief Method AttributeValueToDynamoDBEntry, addr 0x1747178, size 0xb4, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* AttributeValueToDynamoDBEntry(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue);

  /// @brief Method Clear, addr 0x1748be0, size 0x50, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Clone, addr 0x1749378, size 0x60, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method CommitChanges, addr 0x17464a0, size 0x218, virtual false, abstract: false, final false
  inline void CommitChanges();

  /// @brief Method Contains, addr 0x1745fe8, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::StringW attributeName);

  /// @brief Method Contains, addr 0x1748c30, size 0xbc, virtual true, abstract: false, final true
  inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> item);

  /// @brief Method ContainsKey, addr 0x1748a10, size 0x58, virtual true, abstract: false, final true
  inline bool ContainsKey(::StringW key);

  /// @brief Method ConvertToAttributeValue, addr 0x1748f50, size 0x428, virtual true, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig);

  /// @brief Method CopyTo, addr 0x1748cec, size 0xbc, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>,
                              ::Array<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>*>
                         array,
                     int32_t arrayIndex);

  /// @brief Method DateTimeToEpochSeconds, addr 0x17469a8, size 0x2e8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* DateTimeToEpochSeconds(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::StringW attributeName);

  /// @brief Method DecodeBase64Attributes, addr 0x1747fec, size 0x8, virtual false, abstract: false, final false
  inline void DecodeBase64Attributes(::ArrayW<::StringW, ::Array<::StringW>*> attributeNames);

  /// @brief Method EpochSecondsToDateTime, addr 0x17466b8, size 0x2f0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* EpochSecondsToDateTime(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::StringW attributeName);

  /// @brief Method Equals, addr 0x17493d8, size 0x4a8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ForceConversion, addr 0x1746040, size 0x3cc, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* ForceConversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method FromAttributeMap, addr 0x1748990, size 0x8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* FromAttributeMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* data);

  /// @brief Method FromAttributeMap, addr 0x1746c90, size 0x4e8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* FromAttributeMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* data,
                                                                                ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes);

  /// @brief Method FromJson, addr 0x1748998, size 0x8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* FromJson(::StringW json);

  /// @brief Method FromJsonArray, addr 0x17489a0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* FromJsonArray(::StringW jsonText);

  /// @brief Method GetAttributeNames, addr 0x1747f48, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetAttributeNames();

  /// @brief Method GetEnumerator, addr 0x174640c, size 0x94, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>* GetEnumerator();

  /// @brief Method GetHashCode, addr 0x1749880, size 0x1350, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAttributeChanged, addr 0x1745ab4, size 0xb8, virtual false, abstract: false, final false
  inline bool IsAttributeChanged(::StringW attributeName);

  /// @brief Method IsDirty, addr 0x1745b6c, size 0x414, virtual false, abstract: false, final false
  inline bool IsDirty();

  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* New_ctor(::Amazon::DynamoDBv2::DocumentModel::Document* source);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* values);

  /// @brief Method Remove, addr 0x1748e00, size 0xbc, virtual true, abstract: false, final true
  inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> item);

  /// @brief Method Remove, addr 0x1748ab8, size 0x58, virtual true, abstract: false, final true
  inline bool Remove(::StringW key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1748ebc, size 0x94, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToAttributeMap, addr 0x1747db0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ToAttributeMap();

  /// @brief Method ToAttributeMap, addr 0x1747e18, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ToAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToAttributeMap, addr 0x174722c, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*
  ToAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes, bool isEmptyStringValueEnabled);

  /// @brief Method ToAttributeMap, addr 0x1747e24, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ToAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                                                                               bool isEmptyStringValueEnabled);

  /// @brief Method ToAttributeUpdateMap, addr 0x1747eb0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* ToAttributeUpdateMap(bool changedAttributesOnly);

  /// @brief Method ToAttributeUpdateMap, addr 0x1747f38, size 0x10, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* ToAttributeUpdateMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                                                                                           bool changedAttributesOnly);

  /// @brief Method ToAttributeUpdateMap, addr 0x1747ab0, size 0x2e8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*
  ToAttributeUpdateMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool changedAttributesOnly, ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes,
                       bool isEmptyStringValueEnabled);

  /// @brief Method ToAttributeUpdateMap, addr 0x1747f28, size 0x10, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* ToAttributeUpdateMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                                                                                           bool changedAttributesOnly, bool isEmptyStringValueEnabled);

  /// @brief Method ToExpectedAttributeMap, addr 0x1747e30, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* ToExpectedAttributeMap();

  /// @brief Method ToExpectedAttributeMap, addr 0x1747e98, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
  ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToExpectedAttributeMap, addr 0x17477f0, size 0x2c0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
  ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes, bool isEmptyStringValueEnabled);

  /// @brief Method ToExpectedAttributeMap, addr 0x1747ea4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
  ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled);

  /// @brief Method ToJson, addr 0x1747d98, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToJsonPretty, addr 0x1747da4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToJsonPretty();

  /// @brief Method TryGetValue, addr 0x1745f80, size 0x68, virtual true, abstract: false, final true
  inline bool TryGetValue(::StringW attributeName, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry);

  /// @brief Method TryToDocument, addr 0x17487bc, size 0x1d4, virtual false, abstract: false, final false
  static inline bool TryToDocument(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> document);

  /// @brief Method TryToDynamoDBBool, addr 0x174857c, size 0xa4, virtual false, abstract: false, final false
  static inline bool TryToDynamoDBBool(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*> ddbBool);

  /// @brief Method TryToDynamoDBList, addr 0x17486ac, size 0x110, virtual false, abstract: false, final false
  static inline bool TryToDynamoDBList(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> list);

  /// @brief Method TryToDynamoDBNull, addr 0x1748620, size 0x8c, virtual false, abstract: false, final false
  static inline bool TryToDynamoDBNull(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull*> ddbNull);

  /// @brief Method TryToPrimitive, addr 0x1747ff4, size 0x108, virtual false, abstract: false, final false
  static inline bool TryToPrimitive(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> primitive);

  /// @brief Method TryToPrimitiveList, addr 0x17480fc, size 0x480, virtual false, abstract: false, final false
  static inline bool TryToPrimitiveList(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> primitiveList);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get_currentValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
  __cordl_internal_get_currentValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get_originalValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
  __cordl_internal_get_originalValues() const;

  constexpr void __cordl_internal_set_currentValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  constexpr void __cordl_internal_set_originalValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method .ctor, addr 0x1745790, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x17458f4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::Document* source);

  /// @brief Method .ctor, addr 0x1745834, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* values);

  /// @brief Method get_Count, addr 0x1748da8, size 0x50, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x1748df8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x17459b8, size 0x58, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* get_Item(::StringW key);

  /// @brief Method get_Keys, addr 0x1748a68, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys();

  /// @brief Method get_Values, addr 0x1748b10, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* get_Values();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  i___System__Collections__Generic__IDictionary_2___StringW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x1745a10, size 0xa4, virtual true, abstract: false, final true
  inline void set_Item(::StringW key, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Document();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Document", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Document(Document&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Document", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Document(Document const&) = delete;

  /// @brief Field originalValues, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ___originalValues;

  /// @brief Field currentValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ___currentValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Document, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Document, ___originalValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Document, ___currentValues) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Document);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Document*, "Amazon.DynamoDBv2.DocumentModel", "Document");
