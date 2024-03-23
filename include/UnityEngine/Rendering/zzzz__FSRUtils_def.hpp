#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FSRUtils)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class __FSRUtils__ShaderConstants;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class FSRUtils;
}
namespace UnityEngine::Rendering {
class __FSRUtils__ShaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FSRUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::__FSRUtils__ShaderConstants);
// Type: ::ShaderConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::FSRUtils::ShaderConstants*
class CORDL_TYPE __FSRUtils__ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _FsrEasuConstants0, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FsrEasuConstants0, put = setStaticF__FsrEasuConstants0)) int32_t _FsrEasuConstants0;

  /// @brief Field _FsrEasuConstants1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FsrEasuConstants1, put = setStaticF__FsrEasuConstants1)) int32_t _FsrEasuConstants1;

  /// @brief Field _FsrEasuConstants2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FsrEasuConstants2, put = setStaticF__FsrEasuConstants2)) int32_t _FsrEasuConstants2;

  /// @brief Field _FsrEasuConstants3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FsrEasuConstants3, put = setStaticF__FsrEasuConstants3)) int32_t _FsrEasuConstants3;

  /// @brief Field _FsrRcasConstants, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__FsrRcasConstants, put = setStaticF__FsrRcasConstants)) int32_t _FsrRcasConstants;

  static inline int32_t getStaticF__FsrEasuConstants0();

  static inline int32_t getStaticF__FsrEasuConstants1();

  static inline int32_t getStaticF__FsrEasuConstants2();

  static inline int32_t getStaticF__FsrEasuConstants3();

  static inline int32_t getStaticF__FsrRcasConstants();

  static inline void setStaticF__FsrEasuConstants0(int32_t value);

  static inline void setStaticF__FsrEasuConstants1(int32_t value);

  static inline void setStaticF__FsrEasuConstants2(int32_t value);

  static inline void setStaticF__FsrEasuConstants3(int32_t value);

  static inline void setStaticF__FsrRcasConstants(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FSRUtils__ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FSRUtils__ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FSRUtils__ShaderConstants(__FSRUtils__ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FSRUtils__ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FSRUtils__ShaderConstants(__FSRUtils__ShaderConstants const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__FSRUtils__ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::FSRUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::FSRUtils*
class CORDL_TYPE FSRUtils : public ::System::Object {
public:
  // Declarations
  using ShaderConstants = ::UnityEngine::Rendering::__FSRUtils__ShaderConstants;

  /// @brief Method IsSupported, addr 0x17cf708, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSupported();

  /// @brief Method SetEasuConstants, addr 0x17cf4b0, size 0x174, virtual false, abstract: false, final false
  static inline void SetEasuConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels, ::UnityEngine::Vector2 inputImageSizeInPixels,
                                      ::UnityEngine::Vector2 outputImageSizeInPixels);

  /// @brief Method SetRcasConstants, addr 0x17cf624, size 0xd0, virtual false, abstract: false, final false
  static inline void SetRcasConstants(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessStops);

  /// @brief Method SetRcasConstantsLinear, addr 0x17cf6f4, size 0x14, virtual false, abstract: false, final false
  static inline void SetRcasConstantsLinear(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessLinear);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSRUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSRUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSRUtils(FSRUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSRUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSRUtils(FSRUtils const&) = delete;

  /// @brief Field kDefaultSharpnessLinear offset 0xffffffff size 0x4
  static constexpr float_t kDefaultSharpnessLinear{ 0.92 };

  /// @brief Field kDefaultSharpnessStops offset 0xffffffff size 0x4
  static constexpr float_t kDefaultSharpnessStops{ 0.2 };

  /// @brief Field kMaxSharpnessStops offset 0xffffffff size 0x4
  static constexpr float_t kMaxSharpnessStops{ 2.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FSRUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FSRUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FSRUtils*, "UnityEngine.Rendering", "FSRUtils");
NEED_NO_BOX(::UnityEngine::Rendering::__FSRUtils__ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__FSRUtils__ShaderConstants*, "UnityEngine.Rendering", "FSRUtils/ShaderConstants");
