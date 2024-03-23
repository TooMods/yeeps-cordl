#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DAtlasDynamic)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class AtlasAllocatorDynamic;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class Texture2DAtlasDynamic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Texture2DAtlasDynamic);
// Type: UnityEngine.Rendering::Texture2DAtlasDynamic
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::Texture2DAtlasDynamic*
class CORDL_TYPE Texture2DAtlasDynamic : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AtlasTexture))::UnityEngine::Rendering::RTHandle* AtlasTexture;

  /// @brief Field isAtlasTextureOwner, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isAtlasTextureOwner, put = __cordl_internal_set_isAtlasTextureOwner)) bool isAtlasTextureOwner;

  /// @brief Field m_AllocationCache, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocationCache,
                      put = __cordl_internal_set_m_AllocationCache))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector4>* m_AllocationCache;

  /// @brief Field m_AtlasAllocator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasAllocator, put = __cordl_internal_set_m_AtlasAllocator))::UnityEngine::Rendering::AtlasAllocatorDynamic* m_AtlasAllocator;

  /// @brief Field m_AtlasTexture, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTexture, put = __cordl_internal_set_m_AtlasTexture))::UnityEngine::Rendering::RTHandle* m_AtlasTexture;

  /// @brief Field m_Format, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Format, put = __cordl_internal_set_m_Format))::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format;

  /// @brief Field m_Height, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Height, put = __cordl_internal_set_m_Height)) int32_t m_Height;

  /// @brief Field m_Width, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) int32_t m_Width;

  /// @brief Method AddTexture, addr 0x17c37a4, size 0x268, virtual false, abstract: false, final false
  inline bool AddTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture);

  /// @brief Method EnsureTextureSlot, addr 0x17c3c50, size 0x114, virtual false, abstract: false, final false
  inline bool EnsureTextureSlot(ByRef<bool> isUploadNeeded, ByRef<::UnityEngine::Vector4> scaleOffset, int32_t key, int32_t width, int32_t height);

  /// @brief Method IsCached, addr 0x17c3be8, size 0x68, virtual false, abstract: false, final false
  inline bool IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, int32_t key);

  static inline ::UnityEngine::Rendering::Texture2DAtlasDynamic* New_ctor(int32_t width, int32_t height, int32_t capacity, ::UnityEngine::Rendering::RTHandle* atlasTexture);

  static inline ::UnityEngine::Rendering::Texture2DAtlasDynamic* New_ctor(int32_t width, int32_t height, int32_t capacity, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method Release, addr 0x17c36cc, size 0x78, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ReleaseTextureSlot, addr 0x17c3d64, size 0x6c, virtual false, abstract: false, final false
  inline void ReleaseTextureSlot(int32_t key);

  /// @brief Method ResetAllocator, addr 0x17c3744, size 0x60, virtual false, abstract: false, final false
  inline void ResetAllocator();

  constexpr bool const& __cordl_internal_get_isAtlasTextureOwner() const;

  constexpr bool& __cordl_internal_get_isAtlasTextureOwner();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector4>*& __cordl_internal_get_m_AllocationCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AllocationCache() const;

  constexpr ::UnityEngine::Rendering::AtlasAllocatorDynamic*& __cordl_internal_get_m_AtlasAllocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::AtlasAllocatorDynamic*> const& __cordl_internal_get_m_AtlasAllocator() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_AtlasTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::RTHandle*> const& __cordl_internal_get_m_AtlasTexture() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_Format() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_Format();

  constexpr int32_t const& __cordl_internal_get_m_Height() const;

  constexpr int32_t& __cordl_internal_get_m_Height();

  constexpr int32_t const& __cordl_internal_get_m_Width() const;

  constexpr int32_t& __cordl_internal_get_m_Width();

  constexpr void __cordl_internal_set_isAtlasTextureOwner(bool value);

  constexpr void __cordl_internal_set_m_AllocationCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set_m_AtlasAllocator(::UnityEngine::Rendering::AtlasAllocatorDynamic* value);

  constexpr void __cordl_internal_set_m_AtlasTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Format(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_Height(int32_t value);

  constexpr void __cordl_internal_set_m_Width(int32_t value);

  /// @brief Method .ctor, addr 0x17c35c8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t capacity, ::UnityEngine::Rendering::RTHandle* atlasTexture);

  /// @brief Method .ctor, addr 0x17c3438, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t capacity, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method get_AtlasTexture, addr 0x17c3430, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_AtlasTexture();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DAtlasDynamic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture2DAtlasDynamic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2DAtlasDynamic(Texture2DAtlasDynamic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DAtlasDynamic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2DAtlasDynamic(Texture2DAtlasDynamic const&) = delete;

  /// @brief Field m_AtlasTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_AtlasTexture;

  /// @brief Field isAtlasTextureOwner, offset: 0x18, size: 0x1, def value: None
  bool ___isAtlasTextureOwner;

  /// @brief Field m_Width, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Width;

  /// @brief Field m_Height, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Height;

  /// @brief Field m_Format, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_Format;

  /// @brief Field m_AtlasAllocator, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::AtlasAllocatorDynamic* ___m_AtlasAllocator;

  /// @brief Field m_AllocationCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector4>* ___m_AllocationCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Texture2DAtlasDynamic, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___m_AtlasTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___isAtlasTextureOwner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___m_Width) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___m_Height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___m_Format) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___m_AtlasAllocator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlasDynamic, ___m_AllocationCache) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::Texture2DAtlasDynamic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DAtlasDynamic*, "UnityEngine.Rendering", "Texture2DAtlasDynamic");
