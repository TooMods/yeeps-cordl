#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture)
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class UnityException;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Texture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture);
// Type: UnityEngine::Texture
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Texture*
class CORDL_TYPE Texture : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field GenerateAllMips, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_GenerateAllMips, put = setStaticF_GenerateAllMips)) int32_t GenerateAllMips;

  __declspec(property(get = get_activeTextureColorSpace))::UnityEngine::ColorSpace activeTextureColorSpace;

  __declspec(property(get = get_anisoLevel, put = set_anisoLevel)) int32_t anisoLevel;

  __declspec(property(get = get_dimension, put = set_dimension))::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_filterMode, put = set_filterMode))::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_graphicsFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(put = set_mipMapBias)) float_t mipMapBias;

  __declspec(property(get = get_mipmapCount)) int32_t mipmapCount;

  __declspec(property(get = get_texelSize))::UnityEngine::Vector2 texelSize;

  __declspec(property(get = get_updateCount)) uint32_t updateCount;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_wrapMode, put = set_wrapMode))::UnityEngine::TextureWrapMode wrapMode;

  __declspec(property(put = set_wrapModeU))::UnityEngine::TextureWrapMode wrapModeU;

  __declspec(property(put = set_wrapModeV))::UnityEngine::TextureWrapMode wrapModeV;

  __declspec(property(put = set_wrapModeW))::UnityEngine::TextureWrapMode wrapModeW;

  /// @brief Method CreateNativeArrayLengthOverflowException, addr 0x27ec920, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException();

  /// @brief Method CreateNonReadableException, addr 0x27ec87c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* t);

  /// @brief Method GetDataHeight, addr 0x27ebcec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetDataHeight();

  /// @brief Method GetDataWidth, addr 0x27ebcb0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetDataWidth();

  /// @brief Method GetDimension, addr 0x27ebd28, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetDimension();

  /// @brief Method GetNativeTexturePtr, addr 0x27ec23c, size 0x3c, virtual false, abstract: false, final false
  inline void* GetNativeTexturePtr();

  /// @brief Method GetPixelDataOffset, addr 0x27ec38c, size 0x54, virtual false, abstract: false, final false
  inline uint64_t GetPixelDataOffset(int32_t mipLevel, int32_t element);

  /// @brief Method GetPixelDataSize, addr 0x27ec338, size 0x54, virtual false, abstract: false, final false
  inline uint64_t GetPixelDataSize(int32_t mipLevel, int32_t element);

  /// @brief Method Internal_GetActiveTextureColorSpace, addr 0x27ec2b4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t Internal_GetActiveTextureColorSpace();

  static inline ::UnityEngine::Texture* New_ctor();

  /// @brief Method ValidateFormat, addr 0x27ec66c, size 0x1cc, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method ValidateFormat, addr 0x27ec3e0, size 0x1b4, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format);

  /// @brief Method .ctor, addr 0x27ebbc4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_GenerateAllMips();

  /// @brief Method get_activeTextureColorSpace, addr 0x27ec2f0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorSpace get_activeTextureColorSpace();

  /// @brief Method get_anisoLevel, addr 0x27ec0e0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_anisoLevel();

  /// @brief Method get_dimension, addr 0x27ebe5c, size 0x3c, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_filterMode, addr 0x27ec060, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::FilterMode get_filterMode();

  /// @brief Method get_graphicsFormat, addr 0x27ebc58, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_height, addr 0x27ebde0, size 0x3c, virtual true, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_isReadable, addr 0x27ebed8, size 0x3c, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_mipmapCount, addr 0x27ebc1c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_mipmapCount();

  /// @brief Method get_texelSize, addr 0x27ec1ac, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_texelSize();

  /// @brief Method get_texelSize_Injected, addr 0x27ec1f8, size 0x44, virtual false, abstract: false, final false
  inline void get_texelSize_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_updateCount, addr 0x27ec278, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_updateCount();

  /// @brief Method get_width, addr 0x27ebd64, size 0x3c, virtual true, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method get_wrapMode, addr 0x27ebf14, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureWrapMode get_wrapMode();

  static inline void setStaticF_GenerateAllMips(int32_t value);

  /// @brief Method set_anisoLevel, addr 0x27ec11c, size 0x44, virtual false, abstract: false, final false
  inline void set_anisoLevel(int32_t value);

  /// @brief Method set_dimension, addr 0x27ebe98, size 0x40, virtual true, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_filterMode, addr 0x27ec09c, size 0x44, virtual false, abstract: false, final false
  inline void set_filterMode(::UnityEngine::FilterMode value);

  /// @brief Method set_height, addr 0x27ebe1c, size 0x40, virtual true, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_mipMapBias, addr 0x27ec160, size 0x4c, virtual false, abstract: false, final false
  inline void set_mipMapBias(float_t value);

  /// @brief Method set_width, addr 0x27ebda0, size 0x40, virtual true, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_wrapMode, addr 0x27ebf50, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeU, addr 0x27ebf94, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapModeU(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeV, addr 0x27ebfd8, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapModeV(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeW, addr 0x27ec01c, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapModeW(::UnityEngine::TextureWrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture(Texture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture(Texture const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Texture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture*, "UnityEngine", "Texture");
