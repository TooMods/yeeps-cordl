#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListBufferExtensions)
namespace UnityEngine::Rendering {
template <typename T> struct ListBuffer_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ListBufferExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ListBufferExtensions);
// Type: UnityEngine.Rendering::ListBufferExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ListBufferExtensions*
class CORDL_TYPE ListBufferExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::UnityEngine::Rendering::ListBuffer_1<T> self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListBufferExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListBufferExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListBufferExtensions(ListBufferExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListBufferExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListBufferExtensions(ListBufferExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ListBufferExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ListBufferExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ListBufferExtensions*, "UnityEngine.Rendering", "ListBufferExtensions");
