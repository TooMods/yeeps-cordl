#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AWSPropertyAttribute)
// Forward declare root types
namespace Amazon::Runtime::Internal {
class AWSPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AWSPropertyAttribute);
// Type: Amazon.Runtime.Internal::AWSPropertyAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 35, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AWSPropertyAttribute*
class CORDL_TYPE AWSPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsMaxSet, put = set_IsMaxSet)) bool IsMaxSet;

  __declspec(property(get = get_IsMinSet, put = set_IsMinSet)) bool IsMinSet;

  __declspec(property(get = get_Max, put = set_Max)) int64_t Max;

  __declspec(property(get = get_Min, put = set_Min)) int64_t Min;

  __declspec(property(get = get_Required, put = set_Required)) bool Required;

  /// @brief Field <IsMaxSet>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__IsMaxSet_k__BackingField, put = __cordl_internal_set__IsMaxSet_k__BackingField)) bool _IsMaxSet_k__BackingField;

  /// @brief Field <IsMinSet>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__IsMinSet_k__BackingField, put = __cordl_internal_set__IsMinSet_k__BackingField)) bool _IsMinSet_k__BackingField;

  /// @brief Field <Required>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__Required_k__BackingField, put = __cordl_internal_set__Required_k__BackingField)) bool _Required_k__BackingField;

  /// @brief Field max, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int64_t max;

  /// @brief Field min, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) int64_t min;

  static inline ::Amazon::Runtime::Internal::AWSPropertyAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__IsMaxSet_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsMaxSet_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsMinSet_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsMinSet_k__BackingField();

  constexpr bool const& __cordl_internal_get__Required_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Required_k__BackingField();

  constexpr int64_t const& __cordl_internal_get_max() const;

  constexpr int64_t& __cordl_internal_get_max();

  constexpr int64_t const& __cordl_internal_get_min() const;

  constexpr int64_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set__IsMaxSet_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsMinSet_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Required_k__BackingField(bool value);

  constexpr void __cordl_internal_set_max(int64_t value);

  constexpr void __cordl_internal_set_min(int64_t value);

  /// @brief Method .ctor, addr 0x23d5748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsMaxSet, addr 0x23d570c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsMaxSet();

  /// @brief Method get_IsMinSet, addr 0x23d56d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsMinSet();

  /// @brief Method get_Max, addr 0x23d5720, size 0x18, virtual false, abstract: false, final false
  inline int64_t get_Max();

  /// @brief Method get_Min, addr 0x23d56e4, size 0x18, virtual false, abstract: false, final false
  inline int64_t get_Min();

  /// @brief Method get_Required, addr 0x23d56bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_Required();

  /// @brief Method set_IsMaxSet, addr 0x23d5714, size 0xc, virtual false, abstract: false, final false
  inline void set_IsMaxSet(bool value);

  /// @brief Method set_IsMinSet, addr 0x23d56d8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsMinSet(bool value);

  /// @brief Method set_Max, addr 0x23d5738, size 0x10, virtual false, abstract: false, final false
  inline void set_Max(int64_t value);

  /// @brief Method set_Min, addr 0x23d56fc, size 0x10, virtual false, abstract: false, final false
  inline void set_Min(int64_t value);

  /// @brief Method set_Required, addr 0x23d56c4, size 0xc, virtual false, abstract: false, final false
  inline void set_Required(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSPropertyAttribute(AWSPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSPropertyAttribute(AWSPropertyAttribute const&) = delete;

  /// @brief Field min, offset: 0x10, size: 0x8, def value: None
  int64_t ___min;

  /// @brief Field max, offset: 0x18, size: 0x8, def value: None
  int64_t ___max;

  /// @brief Field <Required>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____Required_k__BackingField;

  /// @brief Field <IsMinSet>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____IsMinSet_k__BackingField;

  /// @brief Field <IsMaxSet>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____IsMaxSet_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AWSPropertyAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AWSPropertyAttribute, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AWSPropertyAttribute, ___max) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AWSPropertyAttribute, ____Required_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AWSPropertyAttribute, ____IsMinSet_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::AWSPropertyAttribute, ____IsMaxSet_k__BackingField) == 0x22, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AWSPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AWSPropertyAttribute*, "Amazon.Runtime.Internal", "AWSPropertyAttribute");
