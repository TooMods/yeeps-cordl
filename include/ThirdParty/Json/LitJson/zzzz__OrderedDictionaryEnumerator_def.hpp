#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OrderedDictionaryEnumerator)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class OrderedDictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::OrderedDictionaryEnumerator);
// Type: ThirdParty.Json.LitJson::OrderedDictionaryEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::OrderedDictionaryEnumerator*
class CORDL_TYPE OrderedDictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field list_enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list_enumerator, put = __cordl_internal_set_list_enumerator))::System::Collections::Generic::IEnumerator_1<
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* list_enumerator;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x14a4ca8, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ThirdParty::Json::LitJson::OrderedDictionaryEnumerator*
  New_ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* enumerator);

  /// @brief Method Reset, addr 0x14a4d48, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>*& __cordl_internal_get_list_enumerator();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>*> const&
  __cordl_internal_get_list_enumerator() const;

  constexpr void
  __cordl_internal_set_list_enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* value);

  /// @brief Method .ctor, addr 0x14a2994, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* enumerator);

  /// @brief Method get_Current, addr 0x14a49fc, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x14a4a60, size 0xe8, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x14a4b48, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x14a4bf4, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedDictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrderedDictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedDictionaryEnumerator(OrderedDictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedDictionaryEnumerator(OrderedDictionaryEnumerator const&) = delete;

  /// @brief Field list_enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>>* ___list_enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::OrderedDictionaryEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::OrderedDictionaryEnumerator, ___list_enumerator) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::OrderedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::OrderedDictionaryEnumerator*, "ThirdParty.Json.LitJson", "OrderedDictionaryEnumerator");
