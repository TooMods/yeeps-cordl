#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__PolyNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PolyTree)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class PolyNode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PolyTree;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PolyTree);
// Type: UnityEngine.Rendering.Universal::PolyTree
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PolyTree*
class CORDL_TYPE PolyTree : public ::UnityEngine::Rendering::Universal::PolyNode {
public:
  // Declarations
  __declspec(property(get = get_Total)) int32_t Total;

  /// @brief Field m_AllPolys, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllPolys, put = __cordl_internal_set_m_AllPolys))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* m_AllPolys;

  /// @brief Method Clear, addr 0x1e21654, size 0xe8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetFirst, addr 0x1e2173c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PolyNode* GetFirst();

  static inline ::UnityEngine::Rendering::Universal::PolyTree* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>*& __cordl_internal_get_m_AllPolys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>*> const& __cordl_internal_get_m_AllPolys() const;

  constexpr void __cordl_internal_set_m_AllPolys(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* value);

  /// @brief Method .ctor, addr 0x1e21860, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Total, addr 0x1e217b8, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_Total();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolyTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolyTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolyTree(PolyTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolyTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolyTree(PolyTree const&) = delete;

  /// @brief Field m_AllPolys, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* ___m_AllPolys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PolyTree, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyTree, ___m_AllPolys) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PolyTree);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PolyTree*, "UnityEngine.Rendering.Universal", "PolyTree");
