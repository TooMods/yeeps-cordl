#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ParameterValue_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringParameterValue)
// Forward declare root types
namespace Amazon::Runtime {
class StringParameterValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::StringParameterValue);
// Type: Amazon.Runtime::StringParameterValue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::StringParameterValue*
class CORDL_TYPE StringParameterValue : public ::Amazon::Runtime::ParameterValue {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::StringW _Value_k__BackingField;

  static inline ::Amazon::Runtime::StringParameterValue* New_ctor();

  static inline ::Amazon::Runtime::StringParameterValue* New_ctor(::StringW value);

  constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x201a2cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x201a2a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method get_Value, addr 0x201a294, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x201a29c, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringParameterValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringParameterValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringParameterValue(StringParameterValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringParameterValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringParameterValue(StringParameterValue const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::StringParameterValue, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::StringParameterValue, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::StringParameterValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::StringParameterValue*, "Amazon.Runtime", "StringParameterValue");
