#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Concurrency)
// Forward declare root types
namespace Amazon::Lambda::Model {
class Concurrency;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Concurrency);
// Type: Amazon.Lambda.Model::Concurrency
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::Concurrency*
class CORDL_TYPE Concurrency : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ReservedConcurrentExecutions, put = set_ReservedConcurrentExecutions)) int32_t ReservedConcurrentExecutions;

  /// @brief Field _reservedConcurrentExecutions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__reservedConcurrentExecutions, put = __cordl_internal_set__reservedConcurrentExecutions))::System::Nullable_1<int32_t> _reservedConcurrentExecutions;

  /// @brief Method IsSetReservedConcurrentExecutions, addr 0x2bc4958, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReservedConcurrentExecutions();

  static inline ::Amazon::Lambda::Model::Concurrency* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__reservedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__reservedConcurrentExecutions();

  constexpr void __cordl_internal_set__reservedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bc4994, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReservedConcurrentExecutions, addr 0x2bc48b4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ReservedConcurrentExecutions();

  /// @brief Method set_ReservedConcurrentExecutions, addr 0x2bc48f0, size 0x68, virtual false, abstract: false, final false
  inline void set_ReservedConcurrentExecutions(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Concurrency();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Concurrency", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Concurrency(Concurrency&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Concurrency", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Concurrency(Concurrency const&) = delete;

  /// @brief Field _reservedConcurrentExecutions, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____reservedConcurrentExecutions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Concurrency, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::Concurrency, ____reservedConcurrentExecutions) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::Concurrency);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Concurrency*, "Amazon.Lambda.Model", "Concurrency");
