#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONLazyCreator)
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace OVRSimpleJSON {
class JSONObject;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace OVRSimpleJSON {
struct __JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONLazyCreator;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONLazyCreator);
// Type: OVRSimpleJSON::JSONLazyCreator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: ::OVRSimpleJSON::JSONLazyCreator*
class CORDL_TYPE JSONLazyCreator : public ::OVRSimpleJSON::JSONNode {
public:
  // Declarations
  __declspec(property(get = get_AsArray))::OVRSimpleJSON::JSONArray* AsArray;

  __declspec(property(get = get_AsBool, put = set_AsBool)) bool AsBool;

  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsFloat, put = set_AsFloat)) float_t AsFloat;

  __declspec(property(get = get_AsInt, put = set_AsInt)) int32_t AsInt;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  __declspec(property(get = get_AsObject))::OVRSimpleJSON::JSONObject* AsObject;

  __declspec(property(get = get_Item, put = set_Item))::OVRSimpleJSON::JSONNode* Item[];

  __declspec(property(get = get_Item, put = set_Item))::OVRSimpleJSON::JSONNode* Item[];

  __declspec(property(get = get_Tag))::OVRSimpleJSON::JSONNodeType Tag;

  /// @brief Field m_Key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Key, put = __cordl_internal_set_m_Key))::StringW m_Key;

  /// @brief Field m_Node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Node, put = __cordl_internal_set_m_Node))::OVRSimpleJSON::JSONNode* m_Node;

  /// @brief Method Add, addr 0x16ab66c, size 0x9c, virtual true, abstract: false, final false
  inline void Add(::OVRSimpleJSON::JSONNode* aItem);

  /// @brief Method Add, addr 0x16ab708, size 0xa4, virtual true, abstract: false, final false
  inline void Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem);

  /// @brief Method Equals, addr 0x16ab7dc, size 0x18, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEnumerator, addr 0x16ab444, size 0x14, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x16ab7f4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OVRSimpleJSON::JSONLazyCreator* New_ctor(::OVRSimpleJSON::JSONNode* aNode);

  static inline ::OVRSimpleJSON::JSONLazyCreator* New_ctor(::OVRSimpleJSON::JSONNode* aNode, ::StringW aKey);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Set(T aVal);

  /// @brief Method WriteToStringBuilder, addr 0x16abfa4, size 0x54, virtual true, abstract: false, final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode);

  constexpr ::StringW const& __cordl_internal_get_m_Key() const;

  constexpr ::StringW& __cordl_internal_get_m_Key();

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_Node();

  constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& __cordl_internal_get_m_Node() const;

  constexpr void __cordl_internal_set_m_Key(::StringW value);

  constexpr void __cordl_internal_set_m_Node(::OVRSimpleJSON::JSONNode* value);

  /// @brief Method .ctor, addr 0x16a8fa4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* aNode);

  /// @brief Method .ctor, addr 0x16a9b14, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* aNode, ::StringW aKey);

  /// @brief Method get_AsArray, addr 0x16abeb4, size 0x78, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONArray* get_AsArray();

  /// @brief Method get_AsBool, addr 0x16abd9c, size 0x88, virtual true, abstract: false, final false
  inline bool get_AsBool();

  /// @brief Method get_AsDouble, addr 0x16aba34, size 0x88, virtual true, abstract: false, final false
  inline double_t get_AsDouble();

  /// @brief Method get_AsFloat, addr 0x16ab91c, size 0x88, virtual true, abstract: false, final false
  inline float_t get_AsFloat();

  /// @brief Method get_AsInt, addr 0x16ab7fc, size 0x88, virtual true, abstract: false, final false
  inline int32_t get_AsInt();

  /// @brief Method get_AsLong, addr 0x16abb48, size 0x10c, virtual true, abstract: false, final false
  inline int64_t get_AsLong();

  /// @brief Method get_AsObject, addr 0x16abf2c, size 0x78, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONObject* get_AsObject();

  /// @brief Method get_Item, addr 0x16ab458, size 0x64, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* get_Item(int32_t aIndex);

  /// @brief Method get_Item, addr 0x16ab558, size 0x70, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* get_Item(::StringW aKey);

  /// @brief Method get_Tag, addr 0x16ab43c, size 0x8, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNodeType get_Tag();

  /// @brief Method op_Equality, addr 0x16ab7ac, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::OVRSimpleJSON::JSONLazyCreator* a, ::System::Object* b);

  /// @brief Method op_Inequality, addr 0x16ab7c4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::OVRSimpleJSON::JSONLazyCreator* a, ::System::Object* b);

  /// @brief Method set_AsBool, addr 0x16abe24, size 0x90, virtual true, abstract: false, final false
  inline void set_AsBool(bool value);

  /// @brief Method set_AsDouble, addr 0x16ababc, size 0x8c, virtual true, abstract: false, final false
  inline void set_AsDouble(double_t value);

  /// @brief Method set_AsFloat, addr 0x16ab9a4, size 0x90, virtual true, abstract: false, final false
  inline void set_AsFloat(float_t value);

  /// @brief Method set_AsInt, addr 0x16ab884, size 0x98, virtual true, abstract: false, final false
  inline void set_AsInt(int32_t value);

  /// @brief Method set_AsLong, addr 0x16abc54, size 0x148, virtual true, abstract: false, final false
  inline void set_AsLong(int64_t value);

  /// @brief Method set_Item, addr 0x16ab4bc, size 0x9c, virtual true, abstract: false, final false
  inline void set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value);

  /// @brief Method set_Item, addr 0x16ab5c8, size 0xa4, virtual true, abstract: false, final false
  inline void set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONLazyCreator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONLazyCreator(JSONLazyCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONLazyCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONLazyCreator(JSONLazyCreator const&) = delete;

  /// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ___m_Node;

  /// @brief Field m_Key, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONLazyCreator, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONLazyCreator, ___m_Node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONLazyCreator, ___m_Key) == 0x18, "Offset mismatch!");

} // namespace OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONLazyCreator*, "OVRSimpleJSON", "JSONLazyCreator");
