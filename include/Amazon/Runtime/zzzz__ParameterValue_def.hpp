#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ParameterValue)
// Forward declare root types
namespace Amazon::Runtime {
class ParameterValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ParameterValue);
// Type: Amazon.Runtime::ParameterValue
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ParameterValue*
class CORDL_TYPE ParameterValue : public ::System::Object {
public:
  // Declarations
  static inline ::Amazon::Runtime::ParameterValue* New_ctor();

  /// @brief Method .ctor, addr 0x201a28c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterValue(ParameterValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterValue(ParameterValue const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ParameterValue, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ParameterValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ParameterValue*, "Amazon.Runtime", "ParameterValue");
