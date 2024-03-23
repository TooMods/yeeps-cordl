#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenerateDataKeyResult)
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class GenerateDataKeyResult;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult);
// Type: Amazon.Runtime.SharedInterfaces::GenerateDataKeyResult
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::GenerateDataKeyResult*
class CORDL_TYPE GenerateDataKeyResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_KeyCiphertext, put = set_KeyCiphertext))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyCiphertext;

  __declspec(property(get = get_KeyPlaintext, put = set_KeyPlaintext))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyPlaintext;

  /// @brief Field <KeyCiphertext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__KeyCiphertext_k__BackingField,
                      put = __cordl_internal_set__KeyCiphertext_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _KeyCiphertext_k__BackingField;

  /// @brief Field <KeyPlaintext>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__KeyPlaintext_k__BackingField,
                      put = __cordl_internal_set__KeyPlaintext_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _KeyPlaintext_k__BackingField;

  static inline ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__KeyCiphertext_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__KeyCiphertext_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__KeyPlaintext_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__KeyPlaintext_k__BackingField();

  constexpr void __cordl_internal_set__KeyCiphertext_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__KeyPlaintext_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x202149c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KeyCiphertext, addr 0x202148c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyCiphertext();

  /// @brief Method get_KeyPlaintext, addr 0x202147c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyPlaintext();

  /// @brief Method set_KeyCiphertext, addr 0x2021494, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyCiphertext(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_KeyPlaintext, addr 0x2021484, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyPlaintext(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenerateDataKeyResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenerateDataKeyResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenerateDataKeyResult(GenerateDataKeyResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenerateDataKeyResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenerateDataKeyResult(GenerateDataKeyResult const&) = delete;

  /// @brief Field <KeyPlaintext>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____KeyPlaintext_k__BackingField;

  /// @brief Field <KeyCiphertext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____KeyCiphertext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult, ____KeyPlaintext_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult, ____KeyCiphertext_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*, "Amazon.Runtime.SharedInterfaces", "GenerateDataKeyResult");
