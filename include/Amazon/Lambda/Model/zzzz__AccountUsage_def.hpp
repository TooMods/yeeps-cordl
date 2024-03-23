#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccountUsage)
// Forward declare root types
namespace Amazon::Lambda::Model {
class AccountUsage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AccountUsage);
// Type: Amazon.Lambda.Model::AccountUsage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AccountUsage*
class CORDL_TYPE AccountUsage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FunctionCount, put = set_FunctionCount)) int64_t FunctionCount;

  __declspec(property(get = get_TotalCodeSize, put = set_TotalCodeSize)) int64_t TotalCodeSize;

  /// @brief Field _functionCount, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__functionCount, put = __cordl_internal_set__functionCount))::System::Nullable_1<int64_t> _functionCount;

  /// @brief Field _totalCodeSize, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__totalCodeSize, put = __cordl_internal_set__totalCodeSize))::System::Nullable_1<int64_t> _totalCodeSize;

  /// @brief Method IsSetFunctionCount, addr 0x2bc3fa8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetFunctionCount();

  /// @brief Method IsSetTotalCodeSize, addr 0x2bc4090, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTotalCodeSize();

  static inline ::Amazon::Lambda::Model::AccountUsage* New_ctor();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__functionCount() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__functionCount();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__totalCodeSize() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__totalCodeSize();

  constexpr void __cordl_internal_set__functionCount(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__totalCodeSize(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x2bc40cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionCount, addr 0x2bc3efc, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_FunctionCount();

  /// @brief Method get_TotalCodeSize, addr 0x2bc3fe4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_TotalCodeSize();

  /// @brief Method set_FunctionCount, addr 0x2bc3f38, size 0x70, virtual false, abstract: false, final false
  inline void set_FunctionCount(int64_t value);

  /// @brief Method set_TotalCodeSize, addr 0x2bc4020, size 0x70, virtual false, abstract: false, final false
  inline void set_TotalCodeSize(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountUsage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountUsage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountUsage(AccountUsage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountUsage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountUsage(AccountUsage const&) = delete;

  /// @brief Field _functionCount, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____functionCount;

  /// @brief Field _totalCodeSize, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____totalCodeSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AccountUsage, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountUsage, ____functionCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountUsage, ____totalCodeSize) == 0x20, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AccountUsage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AccountUsage*, "Amazon.Lambda.Model", "AccountUsage");
