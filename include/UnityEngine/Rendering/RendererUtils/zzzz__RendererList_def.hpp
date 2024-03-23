#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UIntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererList)
// Forward declare root types
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RendererUtils::RendererList);
// Type: UnityEngine.Rendering.RendererUtils::RendererList
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::RendererUtils {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.RendererUtils::RendererList
struct CORDL_TYPE RendererList {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field nullRendererList, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_nullRendererList, put = setStaticF_nullRendererList))::UnityEngine::Rendering::RendererUtils::RendererList nullRendererList;

  /// @brief Method .ctor, addr 0x29dcc68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(void* ctx, uint32_t indx);

  static inline ::UnityEngine::Rendering::RendererUtils::RendererList getStaticF_nullRendererList();

  /// @brief Method get_isValid, addr 0x29dcbb8, size 0x74, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method get_isValid_Injected, addr 0x29dcc2c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isValid_Injected(ByRef<::UnityEngine::Rendering::RendererUtils::RendererList> _unity_self);

  static inline void setStaticF_nullRendererList(::UnityEngine::Rendering::RendererUtils::RendererList value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererList();

  // Ctor Parameters [CppParam { name: "context", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "frame",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RendererList(void* context, uint32_t index, uint32_t frame) noexcept;

  /// @brief Field context, offset: 0x0, size: 0x8, def value: None
  void* context;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  uint32_t index;

  /// @brief Field frame, offset: 0xc, size: 0x4, def value: None
  uint32_t frame;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RendererUtils::RendererList, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererList, context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererList, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererList, frame) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::RendererUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RendererUtils::RendererList, "UnityEngine.Rendering.RendererUtils", "RendererList");
