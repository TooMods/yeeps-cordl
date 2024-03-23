#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MyIntersectNodeSort)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace UnityEngine::Rendering::Universal {
class IntersectNode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MyIntersectNodeSort;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MyIntersectNodeSort);
// Type: UnityEngine.Rendering.Universal::MyIntersectNodeSort
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::MyIntersectNodeSort*
class CORDL_TYPE MyIntersectNodeSort : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*() noexcept;

  /// @brief Method Compare, addr 0x1e22114, size 0x38, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Rendering::Universal::IntersectNode* node1, ::UnityEngine::Rendering::Universal::IntersectNode* node2);

  static inline ::UnityEngine::Rendering::Universal::MyIntersectNodeSort* New_ctor();

  /// @brief Method .ctor, addr 0x1e2214c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__Rendering__Universal__IntersectNode__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MyIntersectNodeSort();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MyIntersectNodeSort", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MyIntersectNodeSort(MyIntersectNodeSort&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MyIntersectNodeSort", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MyIntersectNodeSort(MyIntersectNodeSort const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MyIntersectNodeSort, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MyIntersectNodeSort);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MyIntersectNodeSort*, "UnityEngine.Rendering.Universal", "MyIntersectNodeSort");
