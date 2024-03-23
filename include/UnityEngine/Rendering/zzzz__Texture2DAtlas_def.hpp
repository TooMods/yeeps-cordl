#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DAtlas)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class AtlasAllocator;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct __Texture2DAtlas__BlitType;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __Texture2DAtlas__BlitType;
}
namespace UnityEngine::Rendering {
class Texture2DAtlas;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__Texture2DAtlas__BlitType);
MARK_REF_PTR_T(::UnityEngine::Rendering::Texture2DAtlas);
// Type: ::BlitType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::Texture2DAtlas::BlitType
struct CORDL_TYPE __Texture2DAtlas__BlitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Texture2DAtlas__BlitType_Unwrapped
  enum struct ____Texture2DAtlas__BlitType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_CubeTo2DOctahedral = static_cast<int32_t>(0x1),
    __E_SingleChannel = static_cast<int32_t>(0x2),
    __E_CubeTo2DOctahedralSingleChannel = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Texture2DAtlas__BlitType_Unwrapped() const noexcept {
    return static_cast<____Texture2DAtlas__BlitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Texture2DAtlas__BlitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Texture2DAtlas__BlitType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CubeTo2DOctahedral value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__Texture2DAtlas__BlitType const CubeTo2DOctahedral;

  /// @brief Field CubeTo2DOctahedralSingleChannel value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::__Texture2DAtlas__BlitType const CubeTo2DOctahedralSingleChannel;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__Texture2DAtlas__BlitType const Default;

  /// @brief Field SingleChannel value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::__Texture2DAtlas__BlitType const SingleChannel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__Texture2DAtlas__BlitType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__Texture2DAtlas__BlitType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::Texture2DAtlas
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::Texture2DAtlas*
class CORDL_TYPE Texture2DAtlas : public ::System::Object {
public:
  // Declarations
  using BlitType = ::UnityEngine::Rendering::__Texture2DAtlas__BlitType;

  __declspec(property(get = get_AtlasTexture))::UnityEngine::Rendering::RTHandle* AtlasTexture;

  /// @brief Field fullScaleOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_fullScaleOffset, put = setStaticF_fullScaleOffset))::UnityEngine::Vector4 fullScaleOffset;

  /// @brief Field m_AllocationCache, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AllocationCache,
      put = __cordl_internal_set_m_AllocationCache))::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* m_AllocationCache;

  /// @brief Field m_AtlasAllocator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasAllocator, put = __cordl_internal_set_m_AtlasAllocator))::UnityEngine::Rendering::AtlasAllocator* m_AtlasAllocator;

  /// @brief Field m_AtlasTexture, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTexture, put = __cordl_internal_set_m_AtlasTexture))::UnityEngine::Rendering::RTHandle* m_AtlasTexture;

  /// @brief Field m_Format, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Format, put = __cordl_internal_set_m_Format))::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format;

  /// @brief Field m_Height, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Height, put = __cordl_internal_set_m_Height)) int32_t m_Height;

  /// @brief Field m_IsAtlasTextureOwner, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsAtlasTextureOwner, put = __cordl_internal_set_m_IsAtlasTextureOwner)) bool m_IsAtlasTextureOwner;

  /// @brief Field m_IsGPUTextureUpToDate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsGPUTextureUpToDate,
                      put = __cordl_internal_set_m_IsGPUTextureUpToDate))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_IsGPUTextureUpToDate;

  /// @brief Field m_TextureHashes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureHashes, put = __cordl_internal_set_m_TextureHashes))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_TextureHashes;

  /// @brief Field m_UseMipMaps, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseMipMaps, put = __cordl_internal_set_m_UseMipMaps)) bool m_UseMipMaps;

  /// @brief Field m_Width, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) int32_t m_Width;

  /// @brief Field s_MaxMipLevelPadding, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_MaxMipLevelPadding, put = setStaticF_s_MaxMipLevelPadding)) int32_t s_MaxMipLevelPadding;

  /// @brief Method AddTexture, addr 0x1a0cf68, size 0xa0, virtual true, abstract: false, final false
  inline bool AddTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture);

  /// @brief Method AllocateTexture, addr 0x1a07100, size 0x1d8, virtual true, abstract: false, final false
  inline bool AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture, int32_t width, int32_t height,
                              int32_t overrideInstanceID);

  /// @brief Method AllocateTextureWithoutBlit, addr 0x1a0c68c, size 0x18c, virtual true, abstract: false, final false
  inline bool AllocateTextureWithoutBlit(int32_t instanceId, int32_t width, int32_t height, ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method AllocateTextureWithoutBlit, addr 0x1a0c630, size 0x5c, virtual false, abstract: false, final false
  inline bool AllocateTextureWithoutBlit(::UnityEngine::Texture* texture, int32_t width, int32_t height, ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method Blit2DTexture, addr 0x1a0c004, size 0x29c, virtual false, abstract: false, final false
  inline void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                            ::UnityEngine::Rendering::__Texture2DAtlas__BlitType blitType);

  /// @brief Method BlitCubeTexture2D, addr 0x1a0c4ac, size 0x184, virtual true, abstract: false, final false
  inline void BlitCubeTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitOctahedralTexture, addr 0x1a0c49c, size 0x10, virtual true, abstract: false, final false
  inline void BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                    bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitTexture, addr 0x1a0c2fc, size 0x1a0, virtual true, abstract: false, final false
  inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                          int32_t overrideInstanceID);

  /// @brief Method ClearTarget, addr 0x1a0bc04, size 0x1bc, virtual false, abstract: false, final false
  inline void ClearTarget(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method EnsureTextureSlot, addr 0x1a0d238, size 0x170, virtual false, abstract: false, final false
  inline bool EnsureTextureSlot(ByRef<bool> isUploadNeeded, ByRef<::UnityEngine::Vector4> scaleBias, int32_t key, int32_t width, int32_t height);

  /// @brief Method GetCachedTextureSize, addr 0x1a0757c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetCachedTextureSize(int32_t id);

  /// @brief Method GetTextureHash, addr 0x1a0c818, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetTextureHash(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB);

  /// @brief Method GetTextureID, addr 0x1a073c4, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetTextureID(::UnityEngine::Texture* texture);

  /// @brief Method GetTextureID, addr 0x1a07534, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetTextureID(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB);

  /// @brief Method GetTextureMipmapCount, addr 0x1a06858, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetTextureMipmapCount(int32_t width, int32_t height);

  /// @brief Method Is2D, addr 0x1a06a30, size 0xc0, virtual false, abstract: false, final false
  inline bool Is2D(::UnityEngine::Texture* texture);

  /// @brief Method IsCached, addr 0x1a075f0, size 0x88, virtual false, abstract: false, final false
  inline bool IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, int32_t id);

  /// @brief Method IsCached, addr 0x1a0c8cc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture);

  /// @brief Method IsCached, addr 0x1a0c898, size 0x34, virtual false, abstract: false, final false
  inline bool IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB);

  /// @brief Method IsSingleChannelBlit, addr 0x1a0bdc0, size 0x244, virtual false, abstract: false, final false
  inline bool IsSingleChannelBlit(::UnityEngine::Texture* source, ::UnityEngine::Texture* destination);

  /// @brief Method MarkGPUTextureInvalid, addr 0x1a0c2a0, size 0x5c, virtual false, abstract: false, final false
  inline void MarkGPUTextureInvalid(int32_t instanceId);

  /// @brief Method MarkGPUTextureValid, addr 0x1a06af0, size 0x70, virtual false, abstract: false, final false
  inline void MarkGPUTextureValid(int32_t instanceId, bool mipAreValid);

  /// @brief Method NeedsUpdate, addr 0x1a0c908, size 0x260, virtual true, abstract: false, final false
  inline bool NeedsUpdate(::UnityEngine::Texture* texture, bool needMips);

  /// @brief Method NeedsUpdate, addr 0x1a0cb68, size 0x400, virtual true, abstract: false, final false
  inline bool NeedsUpdate(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, bool needMips);

  static inline ::UnityEngine::Rendering::Texture2DAtlas* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                                   bool powerOfTwoPadding, ::StringW name, bool useMipMap);

  /// @brief Method Release, addr 0x1a0bb90, size 0x74, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ResetAllocator, addr 0x1a07b0c, size 0x80, virtual false, abstract: false, final false
  inline void ResetAllocator();

  /// @brief Method UpdateTexture, addr 0x1a0d008, size 0x180, virtual true, abstract: false, final false
  inline bool UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* oldTexture, ::UnityEngine::Texture* newTexture, ByRef<::UnityEngine::Vector4> scaleOffset,
                            ::UnityEngine::Vector4 sourceScaleOffset, bool updateIfNeeded, bool blitMips);

  /// @brief Method UpdateTexture, addr 0x1a0d188, size 0xb0, virtual true, abstract: false, final false
  inline bool UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* texture, ByRef<::UnityEngine::Vector4> scaleOffset, bool updateIfNeeded, bool blitMips);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*& __cordl_internal_get_m_AllocationCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*> const&
  __cordl_internal_get_m_AllocationCache() const;

  constexpr ::UnityEngine::Rendering::AtlasAllocator*& __cordl_internal_get_m_AtlasAllocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::AtlasAllocator*> const& __cordl_internal_get_m_AtlasAllocator() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_AtlasTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::RTHandle*> const& __cordl_internal_get_m_AtlasTexture() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_Format() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_Format();

  constexpr int32_t const& __cordl_internal_get_m_Height() const;

  constexpr int32_t& __cordl_internal_get_m_Height();

  constexpr bool const& __cordl_internal_get_m_IsAtlasTextureOwner() const;

  constexpr bool& __cordl_internal_get_m_IsAtlasTextureOwner();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_IsGPUTextureUpToDate();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get_m_IsGPUTextureUpToDate() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_TextureHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get_m_TextureHashes() const;

  constexpr bool const& __cordl_internal_get_m_UseMipMaps() const;

  constexpr bool& __cordl_internal_get_m_UseMipMaps();

  constexpr int32_t const& __cordl_internal_get_m_Width() const;

  constexpr int32_t& __cordl_internal_get_m_Width();

  constexpr void __cordl_internal_set_m_AllocationCache(::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* value);

  constexpr void __cordl_internal_set_m_AtlasAllocator(::UnityEngine::Rendering::AtlasAllocator* value);

  constexpr void __cordl_internal_set_m_AtlasTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Format(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_Height(int32_t value);

  constexpr void __cordl_internal_set_m_IsAtlasTextureOwner(bool value);

  constexpr void __cordl_internal_set_m_IsGPUTextureUpToDate(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_TextureHashes(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_UseMipMaps(bool value);

  constexpr void __cordl_internal_set_m_Width(int32_t value);

  /// @brief Method .ctor, addr 0x1a06094, size 0x284, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode, bool powerOfTwoPadding, ::StringW name,
                    bool useMipMap);

  static inline ::UnityEngine::Vector4 getStaticF_fullScaleOffset();

  static inline int32_t getStaticF_s_MaxMipLevelPadding();

  /// @brief Method get_AtlasTexture, addr 0x1a0bb88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_AtlasTexture();

  /// @brief Method get_maxMipLevelPadding, addr 0x1a0bb30, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_maxMipLevelPadding();

  static inline void setStaticF_fullScaleOffset(::UnityEngine::Vector4 value);

  static inline void setStaticF_s_MaxMipLevelPadding(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture2DAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2DAtlas(Texture2DAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2DAtlas(Texture2DAtlas const&) = delete;

  /// @brief Field m_AtlasTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_AtlasTexture;

  /// @brief Field m_Width, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Width;

  /// @brief Field m_Height, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Height;

  /// @brief Field m_Format, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_Format;

  /// @brief Field m_UseMipMaps, offset: 0x24, size: 0x1, def value: None
  bool ___m_UseMipMaps;

  /// @brief Field m_IsAtlasTextureOwner, offset: 0x25, size: 0x1, def value: None
  bool ___m_IsAtlasTextureOwner;

  /// @brief Field m_AtlasAllocator, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::AtlasAllocator* ___m_AtlasAllocator;

  /// @brief Field m_AllocationCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* ___m_AllocationCache;

  /// @brief Field m_IsGPUTextureUpToDate, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_IsGPUTextureUpToDate;

  /// @brief Field m_TextureHashes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_TextureHashes;

  /// @brief Field kGPUTexInvalid offset 0xffffffff size 0x4
  static constexpr int32_t kGPUTexInvalid{ static_cast<int32_t>(0x0) };

  /// @brief Field kGPUTexValidMip0 offset 0xffffffff size 0x4
  static constexpr int32_t kGPUTexValidMip0{ static_cast<int32_t>(0x1) };

  /// @brief Field kGPUTexValidMipAll offset 0xffffffff size 0x4
  static constexpr int32_t kGPUTexValidMipAll{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Texture2DAtlas, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_AtlasTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_Width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_Height) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_Format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_UseMipMaps) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_IsAtlasTextureOwner) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_AtlasAllocator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_AllocationCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_IsGPUTextureUpToDate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_TextureHashes) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__Texture2DAtlas__BlitType, "UnityEngine.Rendering", "Texture2DAtlas/BlitType");
NEED_NO_BOX(::UnityEngine::Rendering::Texture2DAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DAtlas*, "UnityEngine.Rendering", "Texture2DAtlas");
