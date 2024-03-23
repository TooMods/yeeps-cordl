#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RetryCapacity)
// Forward declare root types
namespace Amazon::Runtime::Internal {
class RetryCapacity;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::RetryCapacity);
// Type: Amazon.Runtime.Internal::RetryCapacity
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::RetryCapacity*
class CORDL_TYPE RetryCapacity : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AvailableCapacity, put = set_AvailableCapacity)) int32_t AvailableCapacity;

  __declspec(property(get = get_MaxCapacity)) int32_t MaxCapacity;

  /// @brief Field <AvailableCapacity>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__AvailableCapacity_k__BackingField, put = __cordl_internal_set__AvailableCapacity_k__BackingField)) int32_t _AvailableCapacity_k__BackingField;

  /// @brief Field _maxCapacity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCapacity, put = __cordl_internal_set__maxCapacity)) int32_t _maxCapacity;

  static inline ::Amazon::Runtime::Internal::RetryCapacity* New_ctor(int32_t maxCapacity);

  constexpr int32_t const& __cordl_internal_get__AvailableCapacity_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__AvailableCapacity_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxCapacity() const;

  constexpr int32_t& __cordl_internal_get__maxCapacity();

  constexpr void __cordl_internal_set__AvailableCapacity_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__maxCapacity(int32_t value);

  /// @brief Method .ctor, addr 0x20345c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCapacity);

  /// @brief Method get_AvailableCapacity, addr 0x2034674, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AvailableCapacity();

  /// @brief Method get_MaxCapacity, addr 0x2034684, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxCapacity();

  /// @brief Method set_AvailableCapacity, addr 0x203467c, size 0x8, virtual false, abstract: false, final false
  inline void set_AvailableCapacity(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryCapacity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryCapacity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryCapacity(RetryCapacity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryCapacity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryCapacity(RetryCapacity const&) = delete;

  /// @brief Field _maxCapacity, offset: 0x10, size: 0x4, def value: None
  int32_t ____maxCapacity;

  /// @brief Field <AvailableCapacity>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____AvailableCapacity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::RetryCapacity, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RetryCapacity, ____maxCapacity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RetryCapacity, ____AvailableCapacity_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::RetryCapacity);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::RetryCapacity*, "Amazon.Runtime.Internal", "RetryCapacity");
