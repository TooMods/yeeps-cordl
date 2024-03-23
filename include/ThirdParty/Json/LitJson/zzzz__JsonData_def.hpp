#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Specialized {
class IOrderedDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class IJsonWrapper;
}
namespace ThirdParty::Json::LitJson {
struct JsonType;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::JsonData);
// Type: ThirdParty.Json.LitJson::JsonData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::JsonData*
class CORDL_TYPE JsonData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_IsDouble)) bool IsDouble;

  __declspec(property(get = get_IsInt)) bool IsInt;

  __declspec(property(get = get_IsLong)) bool IsLong;

  __declspec(property(get = get_IsObject)) bool IsObject;

  __declspec(property(get = get_IsString)) bool IsString;

  __declspec(property(get = get_IsUInt)) bool IsUInt;

  __declspec(property(get = get_IsULong)) bool IsULong;

  __declspec(property(get = get_Item, put = set_Item))::ThirdParty::Json::LitJson::JsonData* Item[];

  __declspec(property(get = get_Item, put = set_Item))::ThirdParty::Json::LitJson::JsonData* Item[];

  __declspec(property(get = get_PropertyNames))::System::Collections::Generic::IEnumerable_1<::StringW>* PropertyNames;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = System_Collections_Specialized_IOrderedDictionary_get_Item,
                      put = System_Collections_Specialized_IOrderedDictionary_set_Item))::System::Object* System_Collections_Specialized_IOrderedDictionary_Item[];

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsArray)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsArray;

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsBoolean)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsBoolean;

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsDouble)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsDouble;

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsInt)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsInt;

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsLong)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsLong;

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsObject)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsObject;

  __declspec(property(get = ThirdParty_Json_LitJson_IJsonWrapper_get_IsString)) bool ThirdParty_Json_LitJson_IJsonWrapper_IsString;

  /// @brief Field inst_array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inst_array, put = __cordl_internal_set_inst_array))::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::JsonData*>* inst_array;

  /// @brief Field inst_boolean, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_inst_boolean, put = __cordl_internal_set_inst_boolean)) bool inst_boolean;

  /// @brief Field inst_double, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inst_double, put = __cordl_internal_set_inst_double)) double_t inst_double;

  /// @brief Field inst_number, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inst_number, put = __cordl_internal_set_inst_number)) uint64_t inst_number;

  /// @brief Field inst_object, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inst_object,
                      put = __cordl_internal_set_inst_object))::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* inst_object;

  /// @brief Field inst_string, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_inst_string, put = __cordl_internal_set_inst_string))::StringW inst_string;

  /// @brief Field json, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_json, put = __cordl_internal_set_json))::StringW json;

  /// @brief Field object_list, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_object_list,
      put = __cordl_internal_set_object_list))::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* object_list;

  /// @brief Field type, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::ThirdParty::Json::LitJson::JsonType type;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::Specialized::IOrderedDictionary"
  constexpr operator ::System::Collections::Specialized::IOrderedDictionary*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::ThirdParty::Json::LitJson::JsonData*>"
  constexpr operator ::System::IEquatable_1<::ThirdParty::Json::LitJson::JsonData*>*() noexcept;

  /// @brief Convert operator to "::ThirdParty::Json::LitJson::IJsonWrapper"
  constexpr operator ::ThirdParty::Json::LitJson::IJsonWrapper*() noexcept;

  /// @brief Method Add, addr 0x14a2388, size 0xc4, virtual false, abstract: false, final false
  inline int32_t Add(::System::Object* value);

  /// @brief Method Clear, addr 0x14a4494, size 0x110, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method EnsureCollection, addr 0x149ef10, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* EnsureCollection();

  /// @brief Method EnsureDictionary, addr 0x149f27c, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* EnsureDictionary();

  /// @brief Method EnsureList, addr 0x149fd68, size 0x138, virtual false, abstract: false, final false
  inline ::System::Collections::IList* EnsureList();

  /// @brief Method Equals, addr 0x14a45a4, size 0x148, virtual true, abstract: false, final true
  inline bool Equals(::ThirdParty::Json::LitJson::JsonData* x);

  /// @brief Method GetJsonType, addr 0x14a46ec, size 0x8, virtual true, abstract: false, final true
  inline ::ThirdParty::Json::LitJson::JsonType GetJsonType();

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor();

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(bool boolean);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(double_t number);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(int32_t number);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(int64_t number);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(uint32_t number);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(uint64_t number);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(::System::Object* obj);

  static inline ::ThirdParty::Json::LitJson::JsonData* New_ctor(::StringW str);

  /// @brief Method SetJsonType, addr 0x14a46f4, size 0x160, virtual true, abstract: false, final true
  inline void SetJsonType(::ThirdParty::Json::LitJson::JsonType type);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x14a1708, size 0xc0, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x149f074, size 0x4, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x149f078, size 0xac, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x149f124, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.Add, addr 0x14a17c8, size 0x1c0, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Clear, addr 0x14a1988, size 0x12c, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Clear();

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x14a1ab4, size 0xb4, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x14a1b68, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x14a1c00, size 0x284, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x149f1d0, size 0xac, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x149f408, size 0xac, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x149ff4c, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x149f4b4, size 0x3cc, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x149f880, size 0x3cc, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x149fffc, size 0xdc, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x14a1e84, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add, addr 0x14a2384, size 0x4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x14a244c, size 0xb4, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x14a2500, size 0xb4, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x14a25b4, size 0xb4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x14a2668, size 0xcc, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x14a2734, size 0xbc, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x14a27f0, size 0xbc, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x149fcbc, size 0xac, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x149fea0, size 0xac, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x14a07bc, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x14a086c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.Specialized.IOrderedDictionary.GetEnumerator, addr 0x14a28ac, size 0xe8, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_Specialized_IOrderedDictionary_GetEnumerator();

  /// @brief Method System.Collections.Specialized.IOrderedDictionary.Insert, addr 0x14a29bc, size 0x14c, virtual true, abstract: false, final true
  inline void System_Collections_Specialized_IOrderedDictionary_Insert(int32_t idx, ::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.Specialized.IOrderedDictionary.RemoveAt, addr 0x14a2b08, size 0x1ac, virtual true, abstract: false, final true
  inline void System_Collections_Specialized_IOrderedDictionary_RemoveAt(int32_t idx);

  /// @brief Method System.Collections.Specialized.IOrderedDictionary.get_Item, addr 0x14a04ec, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Specialized_IOrderedDictionary_get_Item(int32_t idx);

  /// @brief Method System.Collections.Specialized.IOrderedDictionary.set_Item, addr 0x14a05b0, size 0x20c, virtual true, abstract: false, final true
  inline void System_Collections_Specialized_IOrderedDictionary_set_Item(int32_t idx, ::System::Object* value);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetBoolean, addr 0x14a1f2c, size 0x68, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_GetBoolean();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetDouble, addr 0x14a1f94, size 0x68, virtual true, abstract: false, final true
  inline double_t ThirdParty_Json_LitJson_IJsonWrapper_GetDouble();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetInt, addr 0x14a1ffc, size 0x68, virtual true, abstract: false, final true
  inline int32_t ThirdParty_Json_LitJson_IJsonWrapper_GetInt();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetLong, addr 0x14a20cc, size 0x68, virtual true, abstract: false, final true
  inline int64_t ThirdParty_Json_LitJson_IJsonWrapper_GetLong();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetString, addr 0x14a219c, size 0x68, virtual true, abstract: false, final true
  inline ::StringW ThirdParty_Json_LitJson_IJsonWrapper_GetString();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetUInt, addr 0x14a2064, size 0x68, virtual true, abstract: false, final true
  inline uint32_t ThirdParty_Json_LitJson_IJsonWrapper_GetUInt();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.GetULong, addr 0x14a2134, size 0x68, virtual true, abstract: false, final true
  inline uint64_t ThirdParty_Json_LitJson_IJsonWrapper_GetULong();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetBoolean, addr 0x14a2204, size 0x18, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetBoolean(bool val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetDouble, addr 0x14a221c, size 0x14, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetDouble(double_t val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetInt, addr 0x14a2230, size 0x18, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetInt(int32_t val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetLong, addr 0x14a2260, size 0x14, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetLong(int64_t val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetString, addr 0x14a2288, size 0x10, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetString(::StringW val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetUInt, addr 0x14a2248, size 0x18, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetUInt(uint32_t val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.SetULong, addr 0x14a2274, size 0x14, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_SetULong(uint64_t val);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.ToJson, addr 0x14a2298, size 0x4, virtual true, abstract: false, final true
  inline ::StringW ThirdParty_Json_LitJson_IJsonWrapper_ToJson();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.ToJson, addr 0x14a2350, size 0x4, virtual true, abstract: false, final true
  inline void ThirdParty_Json_LitJson_IJsonWrapper_ToJson(::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsArray, addr 0x149fc4c, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsArray();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsBoolean, addr 0x149fc5c, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsBoolean();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsDouble, addr 0x149fc6c, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsDouble();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsInt, addr 0x149fc7c, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsInt();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsLong, addr 0x149fc8c, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsLong();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsObject, addr 0x149fc9c, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsObject();

  /// @brief Method ThirdParty.Json.LitJson.IJsonWrapper.get_IsString, addr 0x149fcac, size 0x10, virtual true, abstract: false, final true
  inline bool ThirdParty_Json_LitJson_IJsonWrapper_get_IsString();

  /// @brief Method ToJson, addr 0x14a229c, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToJson, addr 0x14a2354, size 0x30, virtual false, abstract: false, final false
  inline void ToJson(::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method ToJsonData, addr 0x14a00d8, size 0x90, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonData* ToJsonData(::System::Object* obj);

  /// @brief Method ToString, addr 0x14a48d0, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WriteJson, addr 0x14a2cb4, size 0xd94, virtual false, abstract: false, final false
  static inline void WriteJson(::ThirdParty::Json::LitJson::IJsonWrapper* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  constexpr ::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::JsonData*>*& __cordl_internal_get_inst_array();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::JsonData*>*> const& __cordl_internal_get_inst_array() const;

  constexpr bool const& __cordl_internal_get_inst_boolean() const;

  constexpr bool& __cordl_internal_get_inst_boolean();

  constexpr double_t const& __cordl_internal_get_inst_double() const;

  constexpr double_t& __cordl_internal_get_inst_double();

  constexpr uint64_t const& __cordl_internal_get_inst_number() const;

  constexpr uint64_t& __cordl_internal_get_inst_number();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>*& __cordl_internal_get_inst_object();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>*> const& __cordl_internal_get_inst_object() const;

  constexpr ::StringW const& __cordl_internal_get_inst_string() const;

  constexpr ::StringW& __cordl_internal_get_inst_string();

  constexpr ::StringW const& __cordl_internal_get_json() const;

  constexpr ::StringW& __cordl_internal_get_json();

  constexpr ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>*& __cordl_internal_get_object_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>*> const&
  __cordl_internal_get_object_list() const;

  constexpr ::ThirdParty::Json::LitJson::JsonType const& __cordl_internal_get_type() const;

  constexpr ::ThirdParty::Json::LitJson::JsonType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_inst_array(::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::JsonData*>* value);

  constexpr void __cordl_internal_set_inst_boolean(bool value);

  constexpr void __cordl_internal_set_inst_double(double_t value);

  constexpr void __cordl_internal_set_inst_number(uint64_t value);

  constexpr void __cordl_internal_set_inst_object(::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* value);

  constexpr void __cordl_internal_set_inst_string(::StringW value);

  constexpr void __cordl_internal_set_json(::StringW value);

  constexpr void __cordl_internal_set_object_list(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* value);

  constexpr void __cordl_internal_set_type(::ThirdParty::Json::LitJson::JsonType value);

  /// @brief Method .ctor, addr 0x14a0e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14a0e10, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool boolean);

  /// @brief Method .ctor, addr 0x14a0e40, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(double_t number);

  /// @brief Method .ctor, addr 0x14a0e70, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t number);

  /// @brief Method .ctor, addr 0x14a0ed8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int64_t number);

  /// @brief Method .ctor, addr 0x14a0ea4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(uint32_t number);

  /// @brief Method .ctor, addr 0x14a0f08, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint64_t number);

  /// @brief Method .ctor, addr 0x14a0f38, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x14a1194, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method get_Count, addr 0x149ee64, size 0xac, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsArray, addr 0x149efe4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsArray();

  /// @brief Method get_IsBoolean, addr 0x149eff4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsBoolean();

  /// @brief Method get_IsDouble, addr 0x149f004, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsDouble();

  /// @brief Method get_IsInt, addr 0x149f014, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsInt();

  /// @brief Method get_IsLong, addr 0x149f034, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsLong();

  /// @brief Method get_IsObject, addr 0x149f054, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsObject();

  /// @brief Method get_IsString, addr 0x149f064, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsString();

  /// @brief Method get_IsUInt, addr 0x149f024, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsUInt();

  /// @brief Method get_IsULong, addr 0x149f044, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsULong();

  /// @brief Method get_Item, addr 0x14a0cb8, size 0x150, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonData* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x14a0bec, size 0xcc, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonData* get_Item(::StringW prop_name);

  /// @brief Method get_PropertyNames, addr 0x14a0b40, size 0xac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_PropertyNames();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::Collections::Specialized::IOrderedDictionary"
  constexpr ::System::Collections::Specialized::IOrderedDictionary* i___System__Collections__Specialized__IOrderedDictionary() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::ThirdParty::Json::LitJson::JsonData*>"
  constexpr ::System::IEquatable_1<::ThirdParty::Json::LitJson::JsonData*>* i___System__IEquatable_1___ThirdParty__Json__LitJson__JsonData__() noexcept;

  /// @brief Convert to "::ThirdParty::Json::LitJson::IJsonWrapper"
  constexpr ::ThirdParty::Json::LitJson::IJsonWrapper* i___ThirdParty__Json__LitJson__IJsonWrapper() noexcept;

  /// @brief Method op_Explicit, addr 0x14a1698, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW op_Explicit___StringW(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Explicit, addr 0x14a13f0, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Explicit_bool(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Explicit, addr 0x14a1460, size 0x70, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Explicit, addr 0x14a14d0, size 0x70, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Explicit, addr 0x14a15b0, size 0x74, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Explicit, addr 0x14a1540, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Explicit, addr 0x14a1624, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::ThirdParty::Json::LitJson::JsonData* data);

  /// @brief Method op_Implicit, addr 0x14a1384, size 0x6c, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* op_Implicit___ThirdParty__Json__LitJson__JsonData_(::StringW data);

  /// @brief Method op_Implicit, addr 0x14a11c4, size 0x70, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* op_Implicit___ThirdParty__Json__LitJson__JsonData_(bool data);

  /// @brief Method op_Implicit, addr 0x14a1234, size 0x74, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* op_Implicit___ThirdParty__Json__LitJson__JsonData_(double_t data);

  /// @brief Method op_Implicit, addr 0x14a12a8, size 0x70, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* op_Implicit___ThirdParty__Json__LitJson__JsonData_(int32_t data);

  /// @brief Method op_Implicit, addr 0x14a1318, size 0x6c, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* op_Implicit___ThirdParty__Json__LitJson__JsonData_(int64_t data);

  /// @brief Method set_Item, addr 0x14a08a4, size 0x29c, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::ThirdParty::Json::LitJson::JsonData* value);

  /// @brief Method set_Item, addr 0x14a0168, size 0x384, virtual false, abstract: false, final false
  inline void set_Item(::StringW prop_name, ::ThirdParty::Json::LitJson::JsonData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonData(JsonData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonData(JsonData const&) = delete;

  /// @brief Field inst_array, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::JsonData*>* ___inst_array;

  /// @brief Field inst_boolean, offset: 0x18, size: 0x1, def value: None
  bool ___inst_boolean;

  /// @brief Field inst_double, offset: 0x20, size: 0x8, def value: None
  double_t ___inst_double;

  /// @brief Field inst_number, offset: 0x28, size: 0x8, def value: None
  uint64_t ___inst_number;

  /// @brief Field inst_object, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* ___inst_object;

  /// @brief Field inst_string, offset: 0x38, size: 0x8, def value: None
  ::StringW ___inst_string;

  /// @brief Field json, offset: 0x40, size: 0x8, def value: None
  ::StringW ___json;

  /// @brief Field type, offset: 0x48, size: 0x4, def value: None
  ::ThirdParty::Json::LitJson::JsonType ___type;

  /// @brief Field object_list, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* ___object_list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonData, 0x58>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___inst_array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___inst_boolean) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___inst_double) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___inst_number) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___inst_object) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___inst_string) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___json) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___type) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonData, ___object_list) == 0x50, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::JsonData);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonData*, "ThirdParty.Json.LitJson", "JsonData");
