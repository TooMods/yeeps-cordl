#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureXR)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TextureXR;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TextureXR);
// Type: UnityEngine.Rendering::TextureXR
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::TextureXR*
class CORDL_TYPE TextureXR : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_BlackTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackTexture, put = setStaticF_m_BlackTexture))::UnityW<::UnityEngine::Texture2D> m_BlackTexture;

  /// @brief Field m_BlackTexture2DArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackTexture2DArray, put = setStaticF_m_BlackTexture2DArray))::UnityW<::UnityEngine::Texture2DArray> m_BlackTexture2DArray;

  /// @brief Field m_BlackTexture2DArrayRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackTexture2DArrayRTH, put = setStaticF_m_BlackTexture2DArrayRTH))::UnityEngine::Rendering::RTHandle* m_BlackTexture2DArrayRTH;

  /// @brief Field m_BlackTexture3D, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackTexture3D, put = setStaticF_m_BlackTexture3D))::UnityW<::UnityEngine::Texture3D> m_BlackTexture3D;

  /// @brief Field m_BlackTexture3DRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackTexture3DRTH, put = setStaticF_m_BlackTexture3DRTH))::UnityEngine::Rendering::RTHandle* m_BlackTexture3DRTH;

  /// @brief Field m_BlackTextureRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackTextureRTH, put = setStaticF_m_BlackTextureRTH))::UnityEngine::Rendering::RTHandle* m_BlackTextureRTH;

  /// @brief Field m_BlackUIntTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackUIntTexture, put = setStaticF_m_BlackUIntTexture))::UnityW<::UnityEngine::Texture> m_BlackUIntTexture;

  /// @brief Field m_BlackUIntTexture2DArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackUIntTexture2DArray, put = setStaticF_m_BlackUIntTexture2DArray))::UnityW<::UnityEngine::Texture> m_BlackUIntTexture2DArray;

  /// @brief Field m_BlackUIntTexture2DArrayRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackUIntTexture2DArrayRTH, put = setStaticF_m_BlackUIntTexture2DArrayRTH))::UnityEngine::Rendering::RTHandle* m_BlackUIntTexture2DArrayRTH;

  /// @brief Field m_BlackUIntTextureRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_BlackUIntTextureRTH, put = setStaticF_m_BlackUIntTextureRTH))::UnityEngine::Rendering::RTHandle* m_BlackUIntTextureRTH;

  /// @brief Field m_ClearTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ClearTexture, put = setStaticF_m_ClearTexture))::UnityW<::UnityEngine::Texture2D> m_ClearTexture;

  /// @brief Field m_ClearTexture2DArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ClearTexture2DArray, put = setStaticF_m_ClearTexture2DArray))::UnityW<::UnityEngine::Texture2DArray> m_ClearTexture2DArray;

  /// @brief Field m_ClearTexture2DArrayRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ClearTexture2DArrayRTH, put = setStaticF_m_ClearTexture2DArrayRTH))::UnityEngine::Rendering::RTHandle* m_ClearTexture2DArrayRTH;

  /// @brief Field m_ClearTextureRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ClearTextureRTH, put = setStaticF_m_ClearTextureRTH))::UnityEngine::Rendering::RTHandle* m_ClearTextureRTH;

  /// @brief Field m_MagentaTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MagentaTexture, put = setStaticF_m_MagentaTexture))::UnityW<::UnityEngine::Texture2D> m_MagentaTexture;

  /// @brief Field m_MagentaTexture2DArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MagentaTexture2DArray, put = setStaticF_m_MagentaTexture2DArray))::UnityW<::UnityEngine::Texture2DArray> m_MagentaTexture2DArray;

  /// @brief Field m_MagentaTexture2DArrayRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MagentaTexture2DArrayRTH, put = setStaticF_m_MagentaTexture2DArrayRTH))::UnityEngine::Rendering::RTHandle* m_MagentaTexture2DArrayRTH;

  /// @brief Field m_MagentaTextureRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MagentaTextureRTH, put = setStaticF_m_MagentaTextureRTH))::UnityEngine::Rendering::RTHandle* m_MagentaTextureRTH;

  /// @brief Field m_MaxViews, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_MaxViews, put = setStaticF_m_MaxViews)) int32_t m_MaxViews;

  /// @brief Field m_WhiteTexture2DArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_WhiteTexture2DArray, put = setStaticF_m_WhiteTexture2DArray))::UnityW<::UnityEngine::Texture2DArray> m_WhiteTexture2DArray;

  /// @brief Field m_WhiteTexture2DArrayRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_WhiteTexture2DArrayRTH, put = setStaticF_m_WhiteTexture2DArrayRTH))::UnityEngine::Rendering::RTHandle* m_WhiteTexture2DArrayRTH;

  /// @brief Field m_WhiteTextureRTH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_WhiteTextureRTH, put = setStaticF_m_WhiteTextureRTH))::UnityEngine::Rendering::RTHandle* m_WhiteTextureRTH;

  /// @brief Method CreateBlackTexture3D, addr 0x17c4eac, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> CreateBlackTexture3D(::StringW name);

  /// @brief Method CreateBlackUIntTextureArray, addr 0x17c481c, size 0x254, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader);

  /// @brief Method CreateBlackUintTexture, addr 0x17c4a70, size 0x254, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader);

  /// @brief Method CreateTexture2DArrayFromTexture2D, addr 0x17c4cc4, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2DArray> CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* source, ::StringW name);

  /// @brief Method GetBlackTexture, addr 0x17c40d0, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetBlackTexture();

  /// @brief Method GetBlackTexture3D, addr 0x17c41ac, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetBlackTexture3D();

  /// @brief Method GetBlackTextureArray, addr 0x17c4154, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetBlackTextureArray();

  /// @brief Method GetBlackUIntTexture, addr 0x17c3f44, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetBlackUIntTexture();

  /// @brief Method GetClearTexture, addr 0x17c3fc8, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetClearTexture();

  /// @brief Method GetMagentaTexture, addr 0x17c404c, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetMagentaTexture();

  /// @brief Method GetWhiteTexture, addr 0x17c4204, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetWhiteTexture();

  /// @brief Method Initialize, addr 0x17c4288, size 0x594, virtual false, abstract: false, final false
  static inline void Initialize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader);

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_m_BlackTexture();

  static inline ::UnityW<::UnityEngine::Texture2DArray> getStaticF_m_BlackTexture2DArray();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_BlackTexture2DArrayRTH();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_BlackTexture3D();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_BlackTexture3DRTH();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_BlackTextureRTH();

  static inline ::UnityW<::UnityEngine::Texture> getStaticF_m_BlackUIntTexture();

  static inline ::UnityW<::UnityEngine::Texture> getStaticF_m_BlackUIntTexture2DArray();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_BlackUIntTexture2DArrayRTH();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_BlackUIntTextureRTH();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_m_ClearTexture();

  static inline ::UnityW<::UnityEngine::Texture2DArray> getStaticF_m_ClearTexture2DArray();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_ClearTexture2DArrayRTH();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_ClearTextureRTH();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_m_MagentaTexture();

  static inline ::UnityW<::UnityEngine::Texture2DArray> getStaticF_m_MagentaTexture2DArray();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_MagentaTexture2DArrayRTH();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_MagentaTextureRTH();

  static inline int32_t getStaticF_m_MaxViews();

  static inline ::UnityW<::UnityEngine::Texture2DArray> getStaticF_m_WhiteTexture2DArray();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_WhiteTexture2DArrayRTH();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_WhiteTextureRTH();

  /// @brief Method get_dimension, addr 0x17c3ee4, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_slices, addr 0x17c3e2c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_slices();

  /// @brief Method get_useTexArray, addr 0x17c3e84, size 0x60, virtual false, abstract: false, final false
  static inline bool get_useTexArray();

  static inline void setStaticF_m_BlackTexture(::UnityW<::UnityEngine::Texture2D> value);

  static inline void setStaticF_m_BlackTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value);

  static inline void setStaticF_m_BlackTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_BlackTexture3D(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_m_BlackTexture3DRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_BlackTextureRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_BlackUIntTexture(::UnityW<::UnityEngine::Texture> value);

  static inline void setStaticF_m_BlackUIntTexture2DArray(::UnityW<::UnityEngine::Texture> value);

  static inline void setStaticF_m_BlackUIntTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_BlackUIntTextureRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_ClearTexture(::UnityW<::UnityEngine::Texture2D> value);

  static inline void setStaticF_m_ClearTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value);

  static inline void setStaticF_m_ClearTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_ClearTextureRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_MagentaTexture(::UnityW<::UnityEngine::Texture2D> value);

  static inline void setStaticF_m_MagentaTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value);

  static inline void setStaticF_m_MagentaTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_MagentaTextureRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_MaxViews(int32_t value);

  static inline void setStaticF_m_WhiteTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value);

  static inline void setStaticF_m_WhiteTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_WhiteTextureRTH(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_maxViews, addr 0x17c3dd0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_maxViews(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureXR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureXR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureXR(TextureXR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureXR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureXR(TextureXR const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureXR, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TextureXR);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureXR*, "UnityEngine.Rendering", "TextureXR");
