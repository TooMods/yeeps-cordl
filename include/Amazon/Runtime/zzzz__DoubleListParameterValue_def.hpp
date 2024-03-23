#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ParameterValue_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DoubleListParameterValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class DoubleListParameterValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::DoubleListParameterValue);
// Type: Amazon.Runtime::DoubleListParameterValue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::DoubleListParameterValue*
class CORDL_TYPE DoubleListParameterValue : public ::Amazon::Runtime::ParameterValue {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value))::System::Collections::Generic::List_1<double_t>* Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::System::Collections::Generic::List_1<double_t>* _Value_k__BackingField;

  static inline ::Amazon::Runtime::DoubleListParameterValue* New_ctor();

  static inline ::Amazon::Runtime::DoubleListParameterValue* New_ctor(::System::Collections::Generic::List_1<double_t>* values);

  constexpr ::System::Collections::Generic::List_1<double_t>*& __cordl_internal_get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<double_t>*> const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr void __cordl_internal_set__Value_k__BackingField(::System::Collections::Generic::List_1<double_t>* value);

  /// @brief Method .ctor, addr 0x201a34c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x201a324, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<double_t>* values);

  /// @brief Method get_Value, addr 0x201a314, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<double_t>* get_Value();

  /// @brief Method set_Value, addr 0x201a31c, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::Collections::Generic::List_1<double_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleListParameterValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleListParameterValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleListParameterValue(DoubleListParameterValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleListParameterValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleListParameterValue(DoubleListParameterValue const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<double_t>* ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::DoubleListParameterValue, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::DoubleListParameterValue, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::DoubleListParameterValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::DoubleListParameterValue*, "Amazon.Runtime", "DoubleListParameterValue");
