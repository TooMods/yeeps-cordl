#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::ListExtensions);
// Type: Unity.XR.CoreUtils::ListExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ListExtensions*
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EnsureCapacity(::System::Collections::Generic::List_1<T>* list, int32_t capacity);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* Fill(::System::Collections::Generic::List_1<T>* list, int32_t count);

  /// @brief Method SwapAtIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SwapAtIndices(::System::Collections::Generic::List_1<T>* list, int32_t first, int32_t second);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListExtensions(ListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListExtensions(ListExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::ListExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::ListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::ListExtensions*, "Unity.XR.CoreUtils", "ListExtensions");
