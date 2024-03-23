#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(KeyEventArg_1)
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::KeyEventArg_1);
// Type: Unity.Services.Vivox::KeyEventArg`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename TK>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::KeyEventArg`1<TK>*
class CORDL_TYPE KeyEventArg_1 : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) TK Key;

  /// @brief Field <Key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) TK _Key_k__BackingField;

  static inline ::Unity::Services::Vivox::KeyEventArg_1<TK>* New_ctor(TK key);

  constexpr TK const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr TK& __cordl_internal_get__Key_k__BackingField();

  constexpr void __cordl_internal_set__Key_k__BackingField(TK value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TK key);

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TK get_Key();

  /// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Key(TK value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyEventArg_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyEventArg_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyEventArg_1(KeyEventArg_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyEventArg_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyEventArg_1(KeyEventArg_1 const&) = delete;

  /// @brief Field <Key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  TK ____Key_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::KeyEventArg_1, "Unity.Services.Vivox", "KeyEventArg`1");
