#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteDataAccessExtensions)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine::U2D {
struct SpriteChannelInfo;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteDataAccessExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteDataAccessExtensions);
// Type: UnityEngine.U2D::SpriteDataAccessExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: ::UnityEngine.U2D::SpriteDataAccessExtensions*
class CORDL_TYPE SpriteDataAccessExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckAttributeTypeMatchesAndThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckAttributeTypeMatchesAndThrow(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetChannelInfo, addr 0x2a87158, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::U2D::SpriteChannelInfo GetChannelInfo(::UnityEngine::Sprite* sprite, ::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetChannelInfo_Injected, addr 0x2a871c8, size 0x54, virtual false, abstract: false, final false
  static inline void GetChannelInfo_Injected(::UnityEngine::Sprite* sprite, ::UnityEngine::Rendering::VertexAttribute channel, ByRef<::UnityEngine::U2D::SpriteChannelInfo> ret);

  /// @brief Method GetIndices, addr 0x2a87010, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint16_t> GetIndices(::UnityEngine::Sprite* sprite);

  /// @brief Method GetIndicesInfo, addr 0x2a870ac, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::U2D::SpriteChannelInfo GetIndicesInfo(::UnityEngine::Sprite* sprite);

  /// @brief Method GetIndicesInfo_Injected, addr 0x2a87114, size 0x44, virtual false, abstract: false, final false
  static inline void GetIndicesInfo_Injected(::UnityEngine::Sprite* sprite, ByRef<::UnityEngine::U2D::SpriteChannelInfo> ret);

  /// @brief Method GetVertexAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeSlice_1<T> GetVertexAttribute(::UnityEngine::Sprite* sprite, ::UnityEngine::Rendering::VertexAttribute channel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteDataAccessExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteDataAccessExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteDataAccessExtensions(SpriteDataAccessExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteDataAccessExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteDataAccessExtensions(SpriteDataAccessExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteDataAccessExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteDataAccessExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteDataAccessExtensions*, "UnityEngine.U2D", "SpriteDataAccessExtensions");
