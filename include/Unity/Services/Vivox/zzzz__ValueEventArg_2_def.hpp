#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValueEventArg_2)
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename TK, typename TV> class ValueEventArg_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::ValueEventArg_2);
// Type: Unity.Services.Vivox::ValueEventArg`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename TK, typename TV>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ValueEventArg`2<TK,TV>*
class CORDL_TYPE ValueEventArg_2 : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) TK Key;

  __declspec(property(get = get_PropertyName, put = set_PropertyName))::StringW PropertyName;

  __declspec(property(get = get_Value, put = set_Value)) TV Value;

  /// @brief Field <Key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) TK _Key_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyName_k__BackingField, put = __cordl_internal_set__PropertyName_k__BackingField))::StringW _PropertyName_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) TV _Value_k__BackingField;

  static inline ::Unity::Services::Vivox::ValueEventArg_2<TK, TV>* New_ctor(TK key, TV value, ::StringW name);

  constexpr TK const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr TK& __cordl_internal_get__Key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField();

  constexpr TV const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr TV& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Key_k__BackingField(TK value);

  constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Value_k__BackingField(TV value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TK key, TV value, ::StringW name);

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TK get_Key();

  /// @brief Method get_PropertyName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TV get_Value();

  /// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Key(TK value);

  /// @brief Method set_PropertyName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_PropertyName(::StringW value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(TV value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueEventArg_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueEventArg_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueEventArg_2(ValueEventArg_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueEventArg_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueEventArg_2(ValueEventArg_2 const&) = delete;

  /// @brief Field <Key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  TK ____Key_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x18, size: 0x8, def value: None
  TV ____Value_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::ValueEventArg_2, "Unity.Services.Vivox", "ValueEventArg`2");
