#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RetryableDetails)
// Forward declare root types
namespace Amazon::Runtime {
class RetryableDetails;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::RetryableDetails);
// Type: Amazon.Runtime::RetryableDetails
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::RetryableDetails*
class CORDL_TYPE RetryableDetails : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Throttling, put = set_Throttling)) bool Throttling;

  /// @brief Field <Throttling>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Throttling_k__BackingField, put = __cordl_internal_set__Throttling_k__BackingField)) bool _Throttling_k__BackingField;

  static inline ::Amazon::Runtime::RetryableDetails* New_ctor(bool throttling);

  constexpr bool const& __cordl_internal_get__Throttling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Throttling_k__BackingField();

  constexpr void __cordl_internal_set__Throttling_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1fdee58, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool throttling);

  /// @brief Method get_Throttling, addr 0x1fdee84, size 0x8, virtual false, abstract: false, final false
  inline bool get_Throttling();

  /// @brief Method set_Throttling, addr 0x1fdee8c, size 0xc, virtual false, abstract: false, final false
  inline void set_Throttling(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryableDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryableDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryableDetails(RetryableDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryableDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryableDetails(RetryableDetails const&) = delete;

  /// @brief Field <Throttling>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Throttling_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::RetryableDetails, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryableDetails, ____Throttling_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::RetryableDetails);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::RetryableDetails*, "Amazon.Runtime", "RetryableDetails");
