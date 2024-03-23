#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HashSetExtensions)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class HashSetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::HashSetExtensions);
// Type: Unity.XR.CoreUtils::HashSetExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::HashSetExtensions*
class CORDL_TYPE HashSetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ExceptWithNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>* self, ::System::Collections::Generic::HashSet_1<T>* other);

  /// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T First(::System::Collections::Generic::HashSet_1<T>* set);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetExtensions(HashSetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetExtensions(HashSetExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::HashSetExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::HashSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::HashSetExtensions*, "Unity.XR.CoreUtils", "HashSetExtensions");
