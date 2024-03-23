#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFenceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFence)
namespace UnityEngine::Rendering {
struct GraphicsFenceType;
}
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
}
namespace UnityEngine::Rendering {
struct SynchronisationStage;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsFence;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GraphicsFence);
// Type: UnityEngine.Rendering::GraphicsFence
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::GraphicsFence
struct CORDL_TYPE GraphicsFence {
public:
  // Declarations
  /// @brief Method GetPlatformNotSupportedVersion, addr 0x2a8f4a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPlatformNotSupportedVersion();

  /// @brief Method GetVersionNumber, addr 0x2a8f4ac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVersionNumber(void* fencePtr);

  /// @brief Method InitPostAllocation, addr 0x2a8dfe8, size 0xec, virtual false, abstract: false, final false
  inline void InitPostAllocation();

  /// @brief Method IsFencePending, addr 0x2a8e254, size 0x9c, virtual false, abstract: false, final false
  inline bool IsFencePending();

  /// @brief Method TranslateSynchronizationStageToFlags, addr 0x2a8e168, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SynchronisationStageFlags TranslateSynchronizationStageToFlags(::UnityEngine::Rendering::SynchronisationStage s);

  /// @brief Method Validate, addr 0x2a8e0d4, size 0x7c, virtual false, abstract: false, final false
  inline void Validate();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsFence();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_FenceType", ty: "::UnityEngine::Rendering::GraphicsFenceType", modifiers: "", def_value: None }]
  constexpr GraphicsFence(void* m_Ptr, int32_t m_Version, ::UnityEngine::Rendering::GraphicsFenceType m_FenceType) noexcept;

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  void* m_Ptr;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_FenceType, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::GraphicsFenceType m_FenceType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsFence, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GraphicsFence, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GraphicsFence, m_Version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GraphicsFence, m_FenceType) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsFence, "UnityEngine.Rendering", "GraphicsFence");
