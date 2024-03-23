#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryExtensions)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DictionaryExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DictionaryExtensions);
// Type: Unity.Services.Core.Internal::DictionaryExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::DictionaryExtensions*
class CORDL_TYPE DictionaryExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method MergeAllowOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDictionary, typename TKey, typename TValue>
  static inline TDictionary MergeAllowOverride(TDictionary self, ::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method MergeNoOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDictionary, typename TKey, typename TValue> static inline TDictionary MergeNoOverride(TDictionary self, ::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method ValueEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline bool ValueEquals(::System::Collections::Generic::IDictionary_2<TKey, TValue>* x, ::System::Collections::Generic::IDictionary_2<TKey, TValue>* y);

  /// @brief Method ValueEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue, typename TComparer>
  static inline bool ValueEquals(::System::Collections::Generic::IDictionary_2<TKey, TValue>* x, ::System::Collections::Generic::IDictionary_2<TKey, TValue>* y, TComparer valueComparer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryExtensions(DictionaryExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryExtensions(DictionaryExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DictionaryExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DictionaryExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DictionaryExtensions*, "Unity.Services.Core.Internal", "DictionaryExtensions");
