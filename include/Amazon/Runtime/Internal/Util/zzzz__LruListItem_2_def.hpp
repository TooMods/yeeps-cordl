#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LruListItem_2)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class LruListItem_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::LruListItem_2);
// Type: Amazon.Runtime.Internal.Util::LruListItem`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::LruListItem`2<TKey,TValue>*
class CORDL_TYPE LruListItem_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) TKey Key;

  __declspec(property(get = get_LastTouchedTimestamp, put = set_LastTouchedTimestamp))::System::DateTime LastTouchedTimestamp;

  __declspec(property(get = get_Next, put = set_Next))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Next;

  __declspec(property(get = get_Previous, put = set_Previous))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Previous;

  __declspec(property(get = get_Value, put = set_Value)) TValue Value;

  /// @brief Field <Key>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) TKey _Key_k__BackingField;

  /// @brief Field <LastTouchedTimestamp>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__LastTouchedTimestamp_k__BackingField,
                      put = __cordl_internal_set__LastTouchedTimestamp_k__BackingField))::System::DateTime _LastTouchedTimestamp_k__BackingField;

  /// @brief Field <Next>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Next_k__BackingField,
                      put = __cordl_internal_set__Next_k__BackingField))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* _Next_k__BackingField;

  /// @brief Field <Previous>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Previous_k__BackingField,
                      put = __cordl_internal_set__Previous_k__BackingField))::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* _Previous_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) TValue _Value_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* New_ctor(TKey key, TValue value);

  constexpr TKey const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr TKey& __cordl_internal_get__Key_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__LastTouchedTimestamp_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastTouchedTimestamp_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& __cordl_internal_get__Next_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const& __cordl_internal_get__Next_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& __cordl_internal_get__Previous_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const& __cordl_internal_get__Previous_k__BackingField() const;

  constexpr TValue const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr TValue& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Key_k__BackingField(TKey value);

  constexpr void __cordl_internal_set__LastTouchedTimestamp_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Next_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__Previous_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__Value_k__BackingField(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey key, TValue value);

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Key();

  /// @brief Method get_LastTouchedTimestamp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastTouchedTimestamp();

  /// @brief Method get_Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* get_Next();

  /// @brief Method get_Previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* get_Previous();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Value();

  /// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Key(TKey value);

  /// @brief Method set_LastTouchedTimestamp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_LastTouchedTimestamp(::System::DateTime value);

  /// @brief Method set_Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Next(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  /// @brief Method set_Previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Previous(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LruListItem_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LruListItem_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LruListItem_2(LruListItem_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LruListItem_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LruListItem_2(LruListItem_2 const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  TValue ____Value_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0x18, size: 0x8, def value: None
  TKey ____Key_k__BackingField;

  /// @brief Field <LastTouchedTimestamp>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ____LastTouchedTimestamp_k__BackingField;

  /// @brief Field <Next>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* ____Next_k__BackingField;

  /// @brief Field <Previous>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* ____Previous_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::LruListItem_2, "Amazon.Runtime.Internal.Util", "LruListItem`2");
