#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PowerOfTwoTextureAtlas)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct __PowerOfTwoTextureAtlas__BlitType;
}
namespace UnityEngine::Rendering {
class __PowerOfTwoTextureAtlas____c;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __PowerOfTwoTextureAtlas__BlitType;
}
namespace UnityEngine::Rendering {
class PowerOfTwoTextureAtlas;
}
namespace UnityEngine::Rendering {
class __PowerOfTwoTextureAtlas____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType);
MARK_REF_PTR_T(::UnityEngine::Rendering::PowerOfTwoTextureAtlas);
MARK_REF_PTR_T(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c);
// Type: ::BlitType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::PowerOfTwoTextureAtlas::BlitType
struct CORDL_TYPE __PowerOfTwoTextureAtlas__BlitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PowerOfTwoTextureAtlas__BlitType_Unwrapped
  enum struct ____PowerOfTwoTextureAtlas__BlitType_Unwrapped : int32_t {
    __E_Padding = static_cast<int32_t>(0x0),
    __E_PaddingMultiply = static_cast<int32_t>(0x1),
    __E_OctahedralPadding = static_cast<int32_t>(0x2),
    __E_OctahedralPaddingMultiply = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PowerOfTwoTextureAtlas__BlitType_Unwrapped() const noexcept {
    return static_cast<____PowerOfTwoTextureAtlas__BlitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PowerOfTwoTextureAtlas__BlitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PowerOfTwoTextureAtlas__BlitType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field OctahedralPadding value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType const OctahedralPadding;

  /// @brief Field OctahedralPaddingMultiply value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType const OctahedralPaddingMultiply;

  /// @brief Field Padding value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType const Padding;

  /// @brief Field PaddingMultiply value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType const PaddingMultiply;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::PowerOfTwoTextureAtlas::<>c*
class CORDL_TYPE __PowerOfTwoTextureAtlas____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* __9__23_0;

  static inline ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* New_ctor();

  /// @brief Method <RelayoutEntries>b__23_0, addr 0x1a07da4, size 0x44, virtual false, abstract: false, final false
  inline int32_t _RelayoutEntries_b__23_0(::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c1, ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c2);

  /// @brief Method .ctor, addr 0x1a07d9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* getStaticF___9();

  static inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* getStaticF___9__23_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c* value);

  static inline void setStaticF___9__23_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PowerOfTwoTextureAtlas____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PowerOfTwoTextureAtlas____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PowerOfTwoTextureAtlas____c(__PowerOfTwoTextureAtlas____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PowerOfTwoTextureAtlas____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PowerOfTwoTextureAtlas____c(__PowerOfTwoTextureAtlas____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::PowerOfTwoTextureAtlas
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::PowerOfTwoTextureAtlas*
class CORDL_TYPE PowerOfTwoTextureAtlas : public ::UnityEngine::Rendering::Texture2DAtlas {
public:
  // Declarations
  using BlitType = ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType;

  using __c = ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c;

  /// @brief Field m_MipPadding, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MipPadding, put = __cordl_internal_set_m_MipPadding)) int32_t m_MipPadding;

  /// @brief Field m_RequestedTextures, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestedTextures,
                      put = __cordl_internal_set_m_RequestedTextures))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* m_RequestedTextures;

  __declspec(property(get = get_mipPadding)) int32_t mipPadding;

  /// @brief Method AllocateTexture, addr 0x1a06ea8, size 0x258, virtual true, abstract: false, final false
  inline bool AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture, int32_t width, int32_t height,
                              int32_t overrideInstanceID);

  /// @brief Method Blit2DTexture, addr 0x1a064c8, size 0x390, virtual false, abstract: false, final false
  inline void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                            ::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType blitType);

  /// @brief Method BlitOctahedralTexture, addr 0x1a06c64, size 0x104, virtual true, abstract: false, final false
  inline void BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                    bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitOctahedralTextureMultiply, addr 0x1a06d68, size 0x104, virtual false, abstract: false, final false
  inline void BlitOctahedralTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                            bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitTexture, addr 0x1a0692c, size 0x104, virtual true, abstract: false, final false
  inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                          int32_t overrideInstanceID);

  /// @brief Method BlitTextureMultiply, addr 0x1a06b60, size 0x104, virtual false, abstract: false, final false
  inline void BlitTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                  bool blitMips, int32_t overrideInstanceID);

  /// @brief Method GetApproxCacheSizeInByte, addr 0x1a07b8c, size 0xcc, virtual false, abstract: false, final false
  static inline int64_t GetApproxCacheSizeInByte(int32_t nbElement, int32_t resolution, bool hasMipmap, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetMaxCacheSizeForWeightInByte, addr 0x1a07c58, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t GetMaxCacheSizeForWeightInByte(int32_t weight, bool hasMipmap, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetPayloadScaleOffset, addr 0x1a06350, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPayloadScaleOffset(::UnityEngine::Texture* texture, ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method GetPayloadScaleOffset, addr 0x1a06490, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPayloadScaleOffset(ByRef<::UnityEngine::Vector2> textureSize, ByRef<::UnityEngine::Vector2> paddingSize, ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method GetPowerOfTwoTextureSize, addr 0x1a06424, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPowerOfTwoTextureSize(::UnityEngine::Texture* texture);

  /// @brief Method GetTexturePadding, addr 0x1a06320, size 0x30, virtual false, abstract: false, final false
  inline int32_t GetTexturePadding();

  static inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas* New_ctor(int32_t size, int32_t mipPadding, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                           ::UnityEngine::FilterMode filterMode, ::StringW name, bool useMipMap);

  /// @brief Method RelayoutEntries, addr 0x1a07678, size 0x494, virtual false, abstract: false, final false
  inline bool RelayoutEntries();

  /// @brief Method ReserveSpace, addr 0x1a073dc, size 0x124, virtual false, abstract: false, final false
  inline bool ReserveSpace(int32_t id, int32_t width, int32_t height);

  /// @brief Method ReserveSpace, addr 0x1a07328, size 0x58, virtual false, abstract: false, final false
  inline bool ReserveSpace(::UnityEngine::Texture* texture);

  /// @brief Method ReserveSpace, addr 0x1a07380, size 0x44, virtual false, abstract: false, final false
  inline bool ReserveSpace(::UnityEngine::Texture* texture, int32_t width, int32_t height);

  /// @brief Method ReserveSpace, addr 0x1a07500, size 0x34, virtual false, abstract: false, final false
  inline bool ReserveSpace(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, int32_t width, int32_t height);

  /// @brief Method ResetRequestedTexture, addr 0x1a072d8, size 0x50, virtual false, abstract: false, final false
  inline void ResetRequestedTexture();

  /// @brief Method TextureSizeToPowerOfTwo, addr 0x1a06e6c, size 0x3c, virtual false, abstract: false, final false
  inline void TextureSizeToPowerOfTwo(::UnityEngine::Texture* texture, ByRef<int32_t> width, ByRef<int32_t> height);

  constexpr int32_t const& __cordl_internal_get_m_MipPadding() const;

  constexpr int32_t& __cordl_internal_get_m_MipPadding();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>*& __cordl_internal_get_m_RequestedTextures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>*> const& __cordl_internal_get_m_RequestedTextures() const;

  constexpr void __cordl_internal_set_m_MipPadding(int32_t value);

  constexpr void __cordl_internal_set_m_RequestedTextures(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* value);

  /// @brief Method .ctor, addr 0x1a05f9c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, int32_t mipPadding, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode, ::StringW name, bool useMipMap);

  /// @brief Method get_mipPadding, addr 0x1a06318, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mipPadding();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PowerOfTwoTextureAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PowerOfTwoTextureAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PowerOfTwoTextureAtlas(PowerOfTwoTextureAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PowerOfTwoTextureAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PowerOfTwoTextureAtlas(PowerOfTwoTextureAtlas const&) = delete;

  /// @brief Field m_MipPadding, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_MipPadding;

  /// @brief Field m_RequestedTextures, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* ___m_RequestedTextures;

  /// @brief Field k_MipmapFactorApprox offset 0xffffffff size 0x4
  static constexpr float_t k_MipmapFactorApprox{ 1.33 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PowerOfTwoTextureAtlas, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PowerOfTwoTextureAtlas, ___m_MipPadding) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PowerOfTwoTextureAtlas, ___m_RequestedTextures) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas__BlitType, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas/BlitType");
NEED_NO_BOX(::UnityEngine::Rendering::PowerOfTwoTextureAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PowerOfTwoTextureAtlas*, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas");
NEED_NO_BOX(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__PowerOfTwoTextureAtlas____c*, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas/<>c");
