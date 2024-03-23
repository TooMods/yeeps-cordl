#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__MeshUtils_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh)
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Edge;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Face;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Vertex;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class Mesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh);
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::Mesh
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::Mesh*
class CORDL_TYPE Mesh : public ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh*> {
public:
  // Declarations
  /// @brief Field _eHead, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eHead, put = __cordl_internal_set__eHead))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _eHead;

  /// @brief Field _eHeadSym, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eHeadSym, put = __cordl_internal_set__eHeadSym))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _eHeadSym;

  /// @brief Field _fHead, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fHead, put = __cordl_internal_set__fHead))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* _fHead;

  /// @brief Field _vHead, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__vHead, put = __cordl_internal_set__vHead))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* _vHead;

  /// @brief Method AddEdgeVertex, addr 0x2892164, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* AddEdgeVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrg);

  /// @brief Method Check, addr 0x289263c, size 0x98, virtual false, abstract: false, final false
  inline void Check();

  /// @brief Method Connect, addr 0x289229c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* Connect(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrg,
                                                                                        ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eDst);

  /// @brief Method Delete, addr 0x2891fa0, size 0xf8, virtual false, abstract: false, final false
  inline void Delete(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eDel);

  /// @brief Method MakeEdge, addr 0x2891b88, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* MakeEdge();

  /// @brief Method MergeConvexFaces, addr 0x2892478, size 0x174, virtual false, abstract: false, final false
  inline void MergeConvexFaces(int32_t maxVertsPerFace);

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh* New_ctor();

  /// @brief Method OnFree, addr 0x2891a80, size 0x108, virtual true, abstract: false, final false
  inline void OnFree();

  /// @brief Method Reset, addr 0x2891a74, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Splice, addr 0x2891d8c, size 0xbc, virtual false, abstract: false, final false
  inline void Splice(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrg, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eDst);

  /// @brief Method SplitEdge, addr 0x28921cc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* SplitEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrg);

  /// @brief Method ZapFace, addr 0x289235c, size 0x11c, virtual false, abstract: false, final false
  inline void ZapFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* fZap);

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__eHead();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__eHead() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__eHeadSym();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__eHeadSym() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& __cordl_internal_get__fHead();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const& __cordl_internal_get__fHead() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& __cordl_internal_get__vHead();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const& __cordl_internal_get__vHead() const;

  constexpr void __cordl_internal_set__eHead(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__eHeadSym(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__fHead(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value);

  constexpr void __cordl_internal_set__vHead(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value);

  /// @brief Method .ctor, addr 0x2891920, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mesh(Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mesh(Mesh const&) = delete;

  /// @brief Field _vHead, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* ____vHead;

  /// @brief Field _fHead, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* ____fHead;

  /// @brief Field _eHead, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____eHead;

  /// @brief Field _eHeadSym, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____eHeadSym;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh, ____vHead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh, ____fHead) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh, ____eHead) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh, ____eHeadSym) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh*, "UnityEngine.Rendering.Universal.LibTessDotNet", "Mesh");
