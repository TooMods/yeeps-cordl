#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryExtensions)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class DictionaryExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::DictionaryExtensions);
// Type: Unity.XR.CoreUtils::DictionaryExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::DictionaryExtensions*
class CORDL_TYPE DictionaryExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> First(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

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
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::DictionaryExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::DictionaryExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::DictionaryExtensions*, "Unity.XR.CoreUtils", "DictionaryExtensions");
