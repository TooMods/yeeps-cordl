#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(QueueItemAddedEventArgs_1)
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename T> class QueueItemAddedEventArgs_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::QueueItemAddedEventArgs_1);
// Type: Unity.Services.Vivox::QueueItemAddedEventArgs`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::QueueItemAddedEventArgs`1<T>*
class CORDL_TYPE QueueItemAddedEventArgs_1 : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Value)) T Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) T _Value_k__BackingField;

  static inline ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>* New_ctor(T item);

  constexpr T const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr T& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T item);

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueueItemAddedEventArgs_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueueItemAddedEventArgs_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueueItemAddedEventArgs_1(QueueItemAddedEventArgs_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueueItemAddedEventArgs_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueueItemAddedEventArgs_1(QueueItemAddedEventArgs_1 const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  T ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::QueueItemAddedEventArgs_1, "Unity.Services.Vivox", "QueueItemAddedEventArgs`1");
