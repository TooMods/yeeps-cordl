#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
CORDL_MODULE_EXPORT(AutoConstructedDictionary_2)
// Forward declare root types
namespace Amazon::Runtime::Internal {
template <typename K, typename V> class AutoConstructedDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::AutoConstructedDictionary_2);
// Type: Amazon.Runtime.Internal::AutoConstructedDictionary`2
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AutoConstructedDictionary`2<K,V>*
class CORDL_TYPE AutoConstructedDictionary_2 : public ::System::Collections::Generic::Dictionary_2<K, V> {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoConstructedDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoConstructedDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoConstructedDictionary_2(AutoConstructedDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoConstructedDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoConstructedDictionary_2(AutoConstructedDictionary_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::AutoConstructedDictionary_2, "Amazon.Runtime.Internal", "AutoConstructedDictionary`2");
